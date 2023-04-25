#include <iostream>
using namespace std;

// void fun(int arr[],int n)
// {
// 	for(int i=0;i<n;i++)
// 		cout<<arr[i]<<" ";
// }

void fun(int* arr,int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main()
{
	// int x=12;

	// //pointer
	// int* ptr=&x;

	// cout<<ptr<<endl;
	// cout<<(&x)<<endl;

	// // Dereference a pointer-> you are 
	// // looking up for the data stored at this adddress

	// cout<<(*ptr)<<endl;


	// // null pointer 
	// int* nptr=NULL;

	// int* myptr=0;

	// cout<<myptr<<endl;
	// cout<<nptr<<endl;

	// // Arrays are a block of contigous memory 

	// int arr[]={1,2,3,4};
	// //		   0 1 2 3

	// // base address of an array
	// cout<<arr<<endl;


	// for(int i=0;i<4;i++)
	// {
	// 	cout<<"Address of "<<i<<"th index"<<(&arr[i])<<endl;
	// }


	// int* arrPtr=arr;

	// // Traverse an array using pointers


	// for(int i=0;i<4;i++)
	// {

	//   cout<<(*arrPtr)<<" ";
	//   arrPtr=arrPtr+1;		
	// }


	int arr[]={1,2,3,4};

	fun(arr,4);





}