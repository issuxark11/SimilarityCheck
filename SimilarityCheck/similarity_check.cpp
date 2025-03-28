#include <string>

enum Score {
	Same_Length = 60,
	Diffent_Length = 0
};

class SimilarityChecker
{
public:
	int checkLength(std::string str1, std::string str2)
	{
		int length1 = str1.length();
		int length2 = str2.length();
		int result = 0;

		if (isSameLength(length1, length2))
			return Score::Same_Length;

		if (isDifferentLength(length1, length2))
			return Score::Diffent_Length;

		return getPartialScore(length1, length2);
	}

	bool isSameLength(int length1, int length2)
	{
		return (length1 == length2);
	}

	bool isDifferentLength(int length1, int length2)
	{
		return (length1 >= (length2 * 2)) || (length2 >= (length1 * 2));
	}

	int getPartialScore(int length1, int length2)
	{
		int score = 0;
		if (length1 > length2)
		{
			score = Score::Same_Length - ((length1 - length2) * Score::Same_Length / length2);
		}
		else
		{
			score = Score::Same_Length - ((length2 - length1) * Score::Same_Length / length1);
		}

		return score;
	}


};