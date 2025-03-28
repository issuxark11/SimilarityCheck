#include "gmock/gmock.h"
#include "similarity_check.cpp"

using namespace testing;

class SimilarityCheckerTixture : public Test {
public:
	SimilarityChecker checker;
};

TEST_F(SimilarityCheckerTixture, same_length_check_tc)
{
	EXPECT_EQ(checker.checkLength("qwe", "wer"), Score::Same_Length);
}

TEST_F(SimilarityCheckerTixture, diggerent_length_check_tc)
{
	EXPECT_EQ(checker.checkLength("abc", "defg"), 40);
	EXPECT_EQ(checker.checkLength("ab", "cde"), 30);
	EXPECT_EQ(checker.checkLength("ab", "cdef"), 0);
	EXPECT_EQ(checker.checkLength("abcdef", "abcde"), 48);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}