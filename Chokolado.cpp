// Chokolado - zelena karta '11
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string word;
	cin >> word;
	char ch;
	cin >> ch;
	int count = 0;
	for(int i=0;i<word.size();i++)
	{
		if(i>0 && word[i] == ch && word[i-1] != ch)
		{
			count++;
		}
		if(i>0 && word[i] != ch && word[i-1] == ch)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}