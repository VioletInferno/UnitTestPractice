/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// sortDescending tests
TEST(PracticeTest, simple_sorting)
{
    Practice obj;
    int a[3] = {2, 1, 0};
    obj.sortDescending(a[0], a[1], a[2]);
    ASSERT_LE(a[1], a[0]);
    ASSERT_LE(a[2], a[1]);
    ASSERT_LE(a[2], a[0]);
}

TEST(PracticeTest, reverse_sorting)
{
    Practice obj;
    int a[3] = {0, 1, 2};
    obj.sortDescending(a[0], a[1], a[2]);
    ASSERT_LE(a[1], a[0]);
    ASSERT_LE(a[2], a[1]);
    ASSERT_LE(a[2], a[0]);
}

TEST(PracticeTest, positive_and_negative_sorting)
{
    Practice obj;
    int a[3] = {-500, 0, 500};
    obj.sortDescending(a[0], a[1], a[2]);
    ASSERT_LE(a[1], a[0]);
    ASSERT_LE(a[2], a[1]);
    ASSERT_LE(a[2], a[0]);
}

TEST(PracticeTest, negative_sorting)
{
    Practice obj;
    int a[3] = {-2, -3, -4};
    obj.sortDescending(a[0], a[1], a[2]);
    ASSERT_LE(a[1], a[0]);
    ASSERT_LE(a[2], a[1]);
    ASSERT_LE(a[2], a[0]);
}

TEST(PracticeTest, negative_zero_sorting)
{
    Practice obj;
    int a[3] = {0, -0, 0};
    obj.sortDescending(a[0], a[1], a[2]);
    ASSERT_LE(a[1], a[0]);
    ASSERT_LE(a[2], a[1]);
    ASSERT_LE(a[2], a[0]);
}


// isPalindrome tests.
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("aa"));
    ASSERT_TRUE(obj.isPalindrome("abba"));
    ASSERT_TRUE(obj.isPalindrome("racecar"));
}

TEST(PracticeTest, is_palindrome_with_mixed_case)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("Aa"));
    ASSERT_TRUE(obj.isPalindrome("CiViC"));
    ASSERT_TRUE(obj.isPalindrome("AnnA"));
    ASSERT_TRUE(obj.isPalindrome("RacEcar"));
}

TEST(PracticeTest, is_palindrome_with_whitespace)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("race car"));
    ASSERT_TRUE(obj.isPalindrome("my gym"));
    ASSERT_TRUE(obj.isPalindrome("was it a cat i saw"));
}

TEST(PracticeTest, is_palindrom_with_whitespace_and_mixed_case)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("Race Car"));
    ASSERT_TRUE(obj.isPalindrome("Was it a cat I saw"));
    ASSERT_TRUE(obj.isPalindrome("Top spot"));
}

TEST(PracticeTest, is_palindrome_with_punctuation_whitespace_and_mixed_case)
{
    Practice obj;
    ASSERT_TRUE(obj.isPalindrome("Was it a cat I saw?"));
    ASSERT_TRUE(obj.isPalindrome("Eva, can I see bees in a cave?"));
}

TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    ASSERT_FALSE(obj.isPalindrome("Ba"));
    ASSERT_FALSE(obj.isPalindrome("ab"));
    ASSERT_FALSE(obj.isPalindrome("master branch"));
    ASSERT_FALSE(obj.isPalindrome("nerd"));
    ASSERT_FALSE(obj.isPalindrome("this is a sentence."));
}

