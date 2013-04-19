////reverse the string recursive
//#include <iostream>
//#include <string>
//using namespace std;
//string Reverse(string s);
//int main(int argc, char** argv)
//{
//
//string s("Shazbot");
//
//cout << Reverse(s);
//
////for (int i = s.length();i>=0;--i)
////{
////	cout << s[i];
////}
//system("PAUSE");
//return 0;
//}
//string Reverse(string s) 
//{
//	if(s.length() ==1)
//	{
//	return s;
//	}
//	else
//	{
//		return Reverse(s.substr(1,s.length()))+s.at(0);
//	}
//
//}
///* Remove the first character.
//Reverse the remaining string.
//Add the first character above to the reversed string.
//Return the new string.
//*/