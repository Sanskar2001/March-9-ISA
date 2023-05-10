#include <iostream>
using namespace std;

// Return type of this function?
// Normal Printing in this function
// So return type should be void
string keypad[10]={" ","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printCombinations(string str,int pos,string ans)
{

	int currDigit=str[pos]-'0';

	// "23"
	// keypad[currDigit]-->string

	// 2->"abc"
	// 2->'a'
	// 2->'b'
	// 2->'c'

	// "abc"
	//  012

	for(int i=0;i<keypad[currDigit];i++)
	{
		char currentChar=keypad[currDigit][i];
		printCombinations(str,pos+1,ans+currentChar);
		
	}

}


int main()
{
	string str="23";

	//					0  1    2     3    4      5     6     7      8      9
	printCombinations(str,0,"",keypad);
}