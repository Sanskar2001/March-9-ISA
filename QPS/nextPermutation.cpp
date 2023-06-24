#include <iostream>
#include <vector>
using namespace std;


 void nextPermutation(vector<int>& arr) 
 {
    
    int n=arr.size();

    bool lexographicallyLargest=true;

    int pos1=0; // culprit's index
    int pos2=0; // replacement's index


    // find the culprit

    for(int i=n-2;i>=0;i--)
    {

    	if(arr[i]<arr[i+1])
    	{
    		// i have found the culprit
    		lexographicallyLargest=false;
    		pos1=i;
    		break;
    	}

    }

    // Replacement for the culprit

    for(int i=n-1;i>=0;i--)
    {

    	if(arr[i]>arr[pos1])
    	{
    		// i have found the replacement
    		pos2=i;
    		break;
    	}

    }

    if(lexographicallyLargest)
    {
    	sort(arr.begin(),arr.end());
    	return;
    }



    swap(arr[pos1],arr[pos2]);


    sort(arr.begin()+pos1+1,arr.end());
 	


 }



int main()
{




	vector<int> arr={3,2,1}; 
	// 1 3 2
	nextPermutation(arr);

	for(int i=0;i<arr.size();i++)
		cout<<arr[i];

}