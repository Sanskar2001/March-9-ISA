#include<iostream>
using namespace std;
class Engine
{
	private:
	int rpm;
	bool isOn;

	public:
	Engine()
	{
		isOn=false;
		rpm=0;
	}

	void acceleration()
	{
		rpm+=50;
	}

	void iginitonOn()
	{
		isOn=true;
	}

	void iginitonOff()
	{
		isOn=false;
	}

	int getRpm()
	{
		return rpm;
	}

	int getIsOn()
	{
		return isOn;
	}

	int setRpm(int r)
	{
		rpm=r;
	}

	int setIsOn(bool on)
	{
		isOn=on;
	}

	bool checkEngineStatus()
	{
		return isOn;
	}

	// Getters & Setters

	// Getter-> A Function 
	//which gets or return the value 
	// of a particular property of an object

	// Setter-> A Function 
	// which sets a particular property of an object



};
int main()
{

	Engine eng;

	// eng.isOn=true;
	// eng.isOn=false; -> Not allowed for a pvt property

	eng.setIsOn(true);
	cout<<eng.getIsOn();



	eng.iginitonOn();
	cout<<eng.checkEngineStatus()<<endl;

	eng.iginitonOff();
	cout<<eng.checkEngineStatus()<<endl;


	eng.acceleration();
	eng.acceleration();
	eng.acceleration();
	



}