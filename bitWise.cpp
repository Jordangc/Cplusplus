//#include <iostream>
//#include <bitset>
//#include <string>
//
//using namespace std;
//
//int main( int argc, char ** argv )
//{
// int i = 15;
// int j = 8;
// bitset<8> bByte;
// bByte = i;
//
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
// bByte = j;
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
//
// cout << " Bitwise Operators " << endl;
//
// cout << "~i" << endl;
// bByte = ~i;
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
//
// cout << "i & j" << endl;
// bByte = i & j;
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
//
// cout << "i | j" << endl;
// bByte = i | j;
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
//
// cout << "i ^ j" << endl;
// bByte = i ^ j;
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
//
// cout << "i << 2" << endl;
// bByte = i << 2;
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
//
// cout << "i >> 2" << endl;
// bByte = i >> 2;
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
//
// cout << " Bit Manipulation " << endl;
//
// cout << "0 | (1 << 4)" << endl;
// bByte = 0 | (1 << 4);
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
//
// cout << "0xF & ~(1 << 2)" << endl;
// bByte = 0xF & ~(1 << 2);
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
//
// cout << "0xB & ~(1 << 2)" << endl;
// bByte = 0xB ^ (1 << 2);
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
//
// cout << "0xB & (1 << 2)" << endl;
// if(0xB & (1 << 2))
//  cout << "true" << endl;
// else
//  cout << "false" << endl;
// 
//
// cout << " Bit masking " << endl;
// cout << "0x0F" << endl;
// bByte = 0x0F;
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
// cout << "0x9C" << endl;
// bByte = 0x9C;
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
// cout << "0x0F & 0x9C" << endl;
// bByte = 0x0F & 0x9C;
// cout << bByte.to_ulong()<< "\t: " << bByte << endl;
//
// return 0L;
//}