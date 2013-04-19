//Jordan Cacatian
//take in a 0-15 returns take in int number return character 0
//call function from main
#include <iostream>
#include <string>
#include <bitset>
using namespace std;
string colorParse( const string s);
char intToChar(int x);
int charToInt(char x);
int main(int argv, char** argc)
{
cout <<colorParse("#F0000E");
system("PAUSE");
return 0;
}
char intToChar(int x)
{
	if(x<10)return x+48;
	else
	return x+55;
}
int charToInt(char x)
{
	if(x>47 && x<58)return x-48;
	else
	return x-55;
}
//string like #F0000E seperate evens after # sign this function seperates the even positions after after the # sign
string colorParse( const string s)
{	
	string t;		//save a copy of string
	char temp[2];
	t = s;
	int i = 0;
	int next = 1;
	for(;i < t.length();++i)
	{	
		if(t[i] == '#')t.erase(t.begin());	//get rid of the # sign in copy
		//get alternating characters in the string copy and insert them into temp
		if(next == i)
		{
			t.erase(t.begin());
		++next;
		}
		//cout << t[i]<<endl;	
	}
return t;
}
//function to convert the hex to binary
//function to shift the the bit to position 
//