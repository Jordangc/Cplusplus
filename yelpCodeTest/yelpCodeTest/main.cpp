#include <iostream>
#include <fstream>
#include <string>
#include "binaryTree.h"
using namespace std;  
void docFunctionFile(string *line);								//get file input
void queryFunction(string line,string keyWord[],int &max);		//get query input string
void highlighter(string &docCopy, string keyWords[],int max);	//highlights input string
void releventSnippet(const string &docCopy, const string keyWord[], const int max); //algorithm for relevent snippet
string highLightDoc(string const docLine, string const queryLine);			//codetest function
struct keyWordPosition											//keyword iterators
{
int x;
int y;
};
int main(int argv, char** argc) 
{
binaryTree yelpTree;
node yelpNode;


	//cout<< "Howdy "<<yelpTree.releventReview();

string doc;
string query;
query = "deep dish pizza";
docFunctionFile(&doc);
cout <<highLightDoc(doc,query);

system("PAUSE");
return 0;
}  
void queryFunction(const string line, string keyWords[], int &max) //store single/multiple query into a string array
{
	int i = 0;
	int j =0;
	char s;
	

	for(int i = 0;i < (int)line.length(); i++)
	{
		s = line[i];
		if(s == ' ')
		{
			i++;
			s = line[i];
			j++;
		}
		keyWords[j].push_back(s);
	}
	max = j+1;
}


void docFunctionFile(string *line)//Store unformatted test data textfile to string
{
	string s;
	ifstream inFile;	// read in doc
	ofstream outFile;	// formated doc 
	//outFile.open("finalResult.txt");//copy original document to manipulate
	inFile.open("yelpTest.txt");   //original document
		while(!inFile.eof())
		{
			getline(inFile,s);
			(*line)=(*line)+s+'\n';//leaves in the carriage return
		}
		(*line).erase((*line).end()-1);
	
	outFile<<*line;
	inFile.close();
	outFile.close(); 
}

string highLightDoc(string const docLine, string const queryLine)
{
	
	string snippet;
	int max = 0;	
	string docCopy; 
	docCopy = docLine;	
	string keyWords[5];
	queryFunction(queryLine, keyWords, max);
								//copy of unformatted data
	//releventSnippet(docCopy, keyWords, max);
	highlighter(docCopy, keyWords, max);
	//releventSnippet(docCopy,keyWords,max);

	return docCopy;
}
void highlighter(string &docCopy, string keyWords[],int max)
{
	char c;
	int i = 0;
	int j = 0;
	int k = 0;
	int weightValue = 0;
	int SIZE = 256;
	int iter = 0;
	string start = "[[HIGHLIGHT]]";
	string end = "[[ENDHIGHLIGHT]]";
	
	
	for(; i < docCopy.length()+1;i++)//parse through the doc string
	{
		
		for(j = 0; j < max; j++)//iterate through keyWords array
		{
		c = docCopy[i];
		iter = i;
			for(k = 0; k < keyWords[j].length()+1; k++)//iterate through the keyWord string
			{
				if(c == keyWords[j][k])
				{	
													//reach the end of my keyWord
					iter++;
													//if I reach the end of my keyword by reaching length it is a match
					if(keyWords[j].length() == k+1)
					{
						//weightValue++;
					//find the positions for where the highlights will be inserted in front and end of match keyword
					//evaluate the weightValue
						//docCopy[iter] end
						docCopy.insert(iter,end);
						//docCopy[i] start
						docCopy.insert(i,start);
						//releventSnippet(i,iter,weightValue, docCopy, SIZE);
						// after highlight get back to position to read next character in docCopy
						
						i = i+start.length()+end.length();
					}
					
					//	cout<< "match"<<endl;
								//here I need to highlight wheres the beginning wheres the end to highlight need to find the check
					c = docCopy[iter];
				}
				else break;
			}
			
		}
	}
}
void releventSnippet(const string &docCopy, const string keyWords[], const int max)// build snippet tree
{
	keyWordPosition position[1000];
	char c;
	int i = 0;
	int j = 0;
	int k = 0; 
	int a = 0;
	int begin = 0;
	int end = 0;
	int weightValue = 0;
	int SIZE = 250;
	int iter = 0;
	string snippet;
	
	for(; i < docCopy.length()+1;i++)//parse through the doc string
	{	
		
		for(j = 0; j < max; j++)//iterate through keyWords array
		{	
	
		c = docCopy[i];
		iter = i;	
			for(k = 0; k < keyWords[j].length()+1;k++)//iterate through the keyWord string
			{
				
				if(docCopy[iter] == keyWords[j][k])
				{	
													//reach the end of my keyWord
					//iter++;
					//if I reach the end of my keyword by reaching length it is a match
					if(keyWords[j].length() == k+1)
					{
						position[a].x = i;
						position[a].y = keyWords[j].length();
						cout<<"a "<< a <<": "<< position[a].x <<": "<< position[a].y <<endl;
			
						a++;
						
					}
					iter++;
				}
				else break;
				
			}
			
		}
		
	}
	
}
