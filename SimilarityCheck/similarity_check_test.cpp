#include "gmock/gmock.h"
#include "similarity_check.cpp"

using namespace testing;

TEST(SimilarityCheck, length_check_tc)
{
	SimilarityChecker checker;
	EXPECT_EQ(checker.checkLength("qwe", "wer"), Score::Length);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}