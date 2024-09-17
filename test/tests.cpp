#include <gtest/gtest.h>
#include "../src/get_digit.cpp"

TEST(test_01, get_digit_tests){
    ASSERT_TRUE(get_digit("a1b2c3") == "123");
}

TEST(test_02, get_digit_tests){
    ASSERT_TRUE(get_digit("qwerty123456p0") == "1234560");
}

TEST(test_03, get_digit_tests){
    ASSERT_TRUE(get_digit("j3u8fs4F92") == "38492");
}

TEST(test_04, get_digit_tests){
    ASSERT_TRUE(get_digit("1") == "1");
}

TEST(test_05, get_digit_tests){
    ASSERT_TRUE(get_digit("a") == "");
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}