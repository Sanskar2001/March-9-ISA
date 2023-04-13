#include <iostream>
using namespace std;

// returnType functionName ( datatype argument1, datatype argument2,.....)

void printMessage()
{
	cout<<"Hello World";
}

int addTwoNos(int a,int b)
{
	int sum=a+b;

	return sum;
}

void multiplyNos(int a,int b,int c)
{
	int pdt=a*b*c;
	cout<<pdt;
}

int multiply(int a,int b,int c)
{
	return a*b*c;
}

// Write a function to compare 2 nos
// and return the maximum value out of these
int maxNo(int a,int b)
{
	if(a>b)
	return a;

	return b;
}

// Ways to pass an array to a function

// Way 1
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

// Way 2
void printArrays2(int arr[4],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}


// Way 3
void printArray3(int* arr,int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";

}

int main()
{
	// function call
	printMessage();
	
	cout<<endl<<addTwoNos(2,3)<<endl;

	multiplyNos(2,3,1);
	cout<<"\n";
	cout<<multiply(1,2,3)<<endl;

	cout<<maxNo(10,5)<<"\n";

	int arr[]={1,2,3,4};

	printArray(arr,4);




	return 0;
}