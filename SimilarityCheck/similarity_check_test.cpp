#include "gmock/gmock.h"
#include "similarity_check.cpp"

using namespace testing;

TEST(SimilarityCheck, same_length_check_tc)
{
	SimilarityChecker checker;
	EXPECT_EQ(checker.checkLength("qwe", "wer"), Score::Same_Length);
}

TEST(SimilarityCheck, diggerent_length_check_tc)
{
	SimilarityChecker checker;
	EXPECT_EQ(checker.checkLength("abc", "defg"), 40);
	EXPECT_EQ(checker.checkLength("ab", "cde"), 30);
	EXPECT_EQ(checker.checkLength("ab", "cdef"), 0);
	EXPECT_EQ(checker.checkLength("abcdef", "abcde"), 48);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}