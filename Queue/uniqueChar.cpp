#include <iostream>
#include <queue>
using namespace std;
int main()
{

	char ch;
	cin>>ch; // input first char of stream
	int freq[26]={0};
	queue<char>q;
	q.push(ch);

	// input running stream

	// - terminate stream

	while(ch!='-')
	{
		int idx=ch-'a';
		freq[idx]++;


		while(!q.empty())
		{
			char charAtFront=q.front();
			int pos=charAtFront-'a';

			if(freq[pos]>1)
			q.pop();
			
			else
			{
				cout<<charAtFront;
				break;
			}	

		}

		if(q.empty())
		cout<<"-1";

		q.push(ch);
		cin>>ch;

	}



}