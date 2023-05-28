#include <iostream>
using namespace std;

class Car
{
	private:
	int currentSpeed;

	public:	
	string name;
	int noOfWheels;
	int noOfDoors;
	int noOfCylinders;


	// Default Constructor-> No Arguments
	Car()
	{

		cout<<"Default Constructor is Called\n";
		name="Mercedes";
		noOfWheels=4;
		noOfDoors=4;
		noOfCylinders=5;
		currentSpeed=0;

	}

	


	// Constructor Overloading 
	// Parameterised Constructor
	Car(string n,int wheels,int doors,int cylinders,int speed)
	{

		cout<<"Parameterised Constructor Called\n";
		name=n;
		noOfWheels=wheels;
		noOfDoors=doors;
		noOfCylinders=cylinders;
		currentSpeed=speed;
	}

	// Parameterised Constructor
	Car(string n,int wheels,int doors,int speed)
	{
		name=n;
		noOfWheels=wheels;
		noOfDoors=doors;
		currentSpeed=speed;
	}

	void display()
	{
	cout<<"Name: "<<name<<endl;
	cout<<"No of Wheels: "<<noOfWheels<<endl;
	cout<<"No of Doors: "<<noOfDoors<<endl;
	cout<<"No of Cylinders: "<<noOfCylinders<<endl;
	cout<<"Current Speed: "<<currentSpeed<<endl;
	}

	void accelerate()
	{
		currentSpeed++;
	}

	void braking()
	{
		currentSpeed--;
	}

	void setCurrentSpeed(int s)
	{
		currentSpeed=s;
	}
	void setName(string n)
	{
		name=n;
	}

	void setNoOfWheels(int w)
	{
		noOfWheels=w;
	}
	void setNoOfDoors(int d)
	{
		noOfDoors=d;
	}

	void setNoOfCylinder(int c)
	{
		noOfCylinders=c;
	}



	int getCurrentSpeed()
	{
		return currentSpeed;
	}
	string getName()
	{
		return name;
	}

	int getNoOfWheels()
	{
		return noOfWheels;
	}
	int getNoOfDoors()
	{
		return noOfDoors;
	}

	int getNoOfCylinder()
	{
		return noOfCylinders;
	}


};
int main()
{
	int a=12;
//  <DataType> variableName;
	// cout<<a;

	// int char bool float

	// Car c1("AUDI",4,4,6,0);
	// c1.name="AUDI";
	// c1.noOfWheels=4;
	// c1.noOfCylinders=6;
	// c1.currentSpeed=0;




	// Car c2("BMW",4,2,5,120);
	// c2.name="BMW";
	// c2.noOfWheels=4;
	// c2.noOfCylinders=5;
	// c2.currentSpeed=120;

	Car c3("Mercedes",4,4,7,180);
	c3.display();

	c3.setName("Rolls Royce");

	cout<<c3.getName();

	// cout<<c3.name;
	// cout<<c3.noOfWheels;
	// cout<<c3.noOfCylinders;
	// cout<<c3.currentSpeed;

	// c3.currentSpeed=c3.currentSpeed+20;

	// c3.name="Mercedes";
	// c3.noOfWheels=4;
	// c3.noOfCylinders=7;
	// c3.currentSpeed=180;

	c3.display();


	// Car c4;
	// c4.display();



	// cout<<"Name: "<<c1.name<<endl;
	// cout<<"No of Wheels: "<<c1.noOfWheels<<endl;
	// cout<<"No of Cylinders: "<<c1.noOfCylinders<<endl;
	// cout<<"Current Speed: "<<c1.currentSpeed<<endl;

	// c1.accelerate();
	// c1.braking();

	// c2.accelerate();

	// c1.display();
	// c2.display();


	// cout<<"Name: "<<c2.name<<endl;
	// cout<<"No of Wheels: "<<c2.noOfWheels<<endl;
	// cout<<"No of Cylinders: "<<c2.noOfCylinders<<endl;
	// cout<<"Current Speed: "<<c2.currentSpeed<<endl;



	// Classes -> blueprint for a real world entity
}