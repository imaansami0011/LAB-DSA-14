#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

//Task 3
int main()
{
	string sentence;
	unordered_map<string, int>count;

	cout << "Enter a sentence: " << endl;
	getline(cin, sentence);


	string word = " ";
	for (int i = 0;i < sentence.length();i++)
	{
		char ch = sentence[i];
		if (ch == ' ')
		{
			if (word != " ")
			{
				count[word]++;
				word = " ";
			}
		}
		else
		{
			word = word + ch;
		}
	}

	if (word != " ")
	{
		count[word]++;

		cout << "Word Frquency: " << endl;
		for (auto it : count)
		{
			cout << it.first << "->" << it.second << endl;
		}
	}


	return 0;

}