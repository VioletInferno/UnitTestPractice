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

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
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

