#include <string>

enum Score {
	Length = 60
};

class SimilarityChecker
{
public:
	int checkLength(std::string str1, std::string str2)
	{
		return Score::Length;
	}

};