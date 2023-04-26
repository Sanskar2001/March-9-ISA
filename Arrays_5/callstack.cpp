#include <iostream>
using namespace std;
void iginitionOn()
{
	cout<<"start button pressed\n";
}
void moveForward()
{
	cout<<"Car Moving\n";
}
void engineOn()
{
	cout<<"engine started\n";
	moveForward();
}
int main()
{

	iginitionOn();
	engineOn();


}