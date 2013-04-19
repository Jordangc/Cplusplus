//#include <iostream>
//#include <cmath>
//#include <string>
//using namespace std;
//#define ROW 3
//#define COLUMN 3
//void fillArray( int a[COLUMN][ROW] );
//void printArray( const int a[COLUMN][ROW] );
//int main(int argv, char** argc)
//{
//int  i=0;
//int b[COLUMN][ROW];
//
//
////for( ;i<3;++i)
////{
////cout <<b[i];
////}
//fillArray(b);
//printArray(b);
//system("PAUSE");
//return 0;
//}
//////0 1 0
//////1 0 1
//////0 1 0
////// pass in a 3x3 int array and fill it up with alternating 0's and 1's
//void fillArray( int a[COLUMN][ROW] )
//{
//	int i = 0;
//	int count = 0;
//	int even =0;
//	for(;i<COLUMN;++i)
//	{
//
//
//		for(int j = 0;j<ROW;++j)
//		{
//		
//			if(count == even)
//			{
//				count ++;
//				a[i][j] = 0;
//				//even = 2*(count+1)/2;
//				even=count+1;
//			}
//			else 
//			{
//					a[i][j] =1;
// 				count++;
//			}
//		}
//	
//	}
//
//}
////
////// print out all the contents of a 3x3 int array as example
//void printArray( const int a[COLUMN][ROW] )
//{
//	int i =0;
//	
//	
//	for (;i<COLUMN;i++)
//	{
//		for(int j = 0;j < ROW;++j)
//		{
//		cout << a[i][j];
//		}
//	cout <<endl;
//	}
//
//}