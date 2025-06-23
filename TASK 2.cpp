#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;


//task 2
int main()
{
	unordered_map<string, int>person;
	person["Alice"] = 25;
	person["Bob"] = 30;
	person["Charlie"] = 22;


	string name;
	cout << "Enter Name To Search: " << endl;
	cin >> name;

	if (person.find(name) != person.end())
	{
		cout << name <<" " << "is" <<" " << person[name] << " " << "Years Old" << endl;
	}
	else
	{
		cout << "Not Found !" << endl;
	}

	return 0;
}








