#include <ctest.h>
#include <string>
#include <vector>

using namespace std;

#include <libKBNinja/count_number_of_str.h>
#include <libKBNinja/select_str.h>

CTEST(select_str, Last_1)
{
    string path = "src/resources/symbol_EN.txt";
    int num_str = count_number_of_str(path);
    vector<int> used_str;
    used_str.reserve(num_str);

    for (int i = 0; i < num_str - 1; ++i) {
        used_str.push_back(i);
    }

    string exp_result = "z";
    string result = select_str(path, num_str, used_str);

    ASSERT_STR(exp_result.c_str(), result.c_str());
}

CTEST(select_str, Last_2)
{
    string path = "src/resources/words_EN.txt";
    int num_str = count_number_of_str(path);
    vector<int> used_str;
    used_str.reserve(num_str);

    for (int i = 0; i < num_str - 1; ++i) {
        used_str.push_back(i);
    }

    string exp_result = "Predisposition";
    string result = select_str(path, num_str, used_str);

    ASSERT_STR(exp_result.c_str(), result.c_str());
}

CTEST(select_str, Last_3)
{
    string path = "src/resources/words_RU.txt";
    int num_str = count_number_of_str(path);
    vector<int> used_str;
    used_str.reserve(num_str);

    for (int i = 0; i < num_str - 1; ++i) {
        used_str.push_back(i);
    }

    string exp_result = "Капуста";
    string result = select_str(path, num_str, used_str);

    ASSERT_STR(exp_result.c_str(), result.c_str());
}

CTEST(select_str, Last_4)
{
    string path = "src/resources/symbol_RU.txt";
    int num_str = count_number_of_str(path);
    vector<int> used_str;
    used_str.reserve(num_str);

    for (int i = 0; i < num_str - 1; ++i) {
        used_str.push_back(i);
    }

    string exp_result = "я";
    string result = select_str(path, num_str, used_str);

    ASSERT_STR(exp_result.c_str(), result.c_str());
}

CTEST(select_str, Error_number_str)
{
    string path = "src/resources/paragraph_EN.txt";
    int num_str = count_number_of_str(path) + 10;
    vector<int> used_str;
    used_str.reserve(num_str);

    for (int i = 0; i < num_str - 1; ++i) {
        used_str.push_back(i);
    }

    string exp_result;
    string result = select_str(path, num_str, used_str);

    ASSERT_STR(exp_result.c_str(), result.c_str());
}

CTEST(select_str, Error_path)
{
    string path = "src/resources/Sentence_EN.txt";
    int num_str = count_number_of_str(path);
    vector<int> used_str;
    used_str.reserve(num_str);

    for (int i = 0; i < num_str - 1; ++i) {
        used_str.push_back(i);
    }

    string exp_result;
    string result = select_str(path, num_str, used_str);

    ASSERT_STR(exp_result.c_str(), result.c_str());
}
