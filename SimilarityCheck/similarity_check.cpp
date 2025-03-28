#include <string>

enum Score {
	Same_Length = 60
};

class SimilarityChecker
{
public:
	int checkLength(std::string str1, std::string str2)
	{
		int length1 = str1.length();
		int length2 = str2.length();
		int result = 0;

		if (length1 == length2)
			return Score::Same_Length;

		if ((length1 >= (length2 * 2)) || (length2 >= (length1 * 2)))
			return 0;

		if (length1 > length2)
		{
			result = Score::Same_Length - ((length1 - length2) * Score::Same_Length / length2);
		}
		else
		{
			result = Score::Same_Length - ((length2 - length1) * Score::Same_Length / length1);
		}

		return result;
	}

};