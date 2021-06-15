#include <ctest.h>
#include <string>

using namespace std;

#include <libKBNinja/count_number_of_str.h>

/*
In fact, there is one line less in the file than the function returns. This is
done on purpose to make it easier to work with random line selection: to prevent
going out of the file.
*/

CTEST(count_str_in_file, Symbol_EN)
{
    string path = "src/resources/symbol_EN.txt";
    int count = 94;
    int result = count_number_of_str(path);

    ASSERT_EQUAL(count, result);
}

CTEST(count_str_in_file, Symbol_RU)
{
    string path = "src/resources/symbol_RU.txt";
    int count = 111;
    int result = count_number_of_str(path);

    ASSERT_EQUAL(count, result);
}

CTEST(count_str_in_file, Words_EN)
{
    string path = "src/resources/words_EN.txt";
    int count = 58;
    int result = count_number_of_str(path);

    ASSERT_EQUAL(count, result);
}

CTEST(count_str_in_file, Words_RU)
{
    string path = "src/resources/words_RU.txt";
    int count = 39;
    int result = count_number_of_str(path);

    ASSERT_EQUAL(count, result);
}

CTEST(count_str_in_file, Sentence_EN)
{
    string path = "src/resources/sentence_EN.txt";
    int count = 14;
    int result = count_number_of_str(path);

    ASSERT_EQUAL(count, result);
}

CTEST(count_str_in_file, Sentence_RU)
{
    string path = "src/resources/sentence_RU.txt";
    int count = 30;
    int result = count_number_of_str(path);

    ASSERT_EQUAL(count, result);
}

CTEST(count_str_in_file, Paragraph_EN)
{
    string path = "src/resources/paragraph_EN.txt";
    int count = 10;
    int result = count_number_of_str(path);

    ASSERT_EQUAL(count, result);
}

CTEST(count_str_in_file, Paragraph_RU)
{
    string path = "src/resources/paragraph_RU.txt";
    int count = 31;
    int result = count_number_of_str(path);

    ASSERT_EQUAL(count, result);
}

CTEST(count_str_in_file, Error_path_1)
{
    string path = "src/resources/Symbol_EN.txt";
    int count = 0;
    int result = count_number_of_str(path);

    ASSERT_EQUAL(count, result);
}

CTEST(count_str_in_file, Error_path_2)
{
    string path = "src/resources/paragraph_RU";
    int count = 0;
    int result = count_number_of_str(path);

    ASSERT_EQUAL(count, result);
}
