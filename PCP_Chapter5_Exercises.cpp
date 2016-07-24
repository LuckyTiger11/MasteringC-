// Chapter_5.cpp : Series of exercises from chapter 5: Arrays, Qualifiers, and Reading numbers
// Description:
//   5.1: Write a program that converts Celsius to Farenheit
//   5.2: Write a program to calculate the volume of a sphere, 4(pi)r^3
//   5.3: Write a proram to print out the perimeter of a rectangle given its height and width
//   5.4: Write a program that converts kilometers per hour to miles per hour, miles = kilometers * 0.6213712 
//   5.5: Write a program that takes hours and minutes as input and outputs the total number of minutes (1 hour 30 min = 90 mins)
//   5.6: Write a program that takes an integer as the number of minutes and outputs the total hours and minutes (90 mins = 1 hour 30 mins)
//
// Note:
//  In this chapter I used functions to make it a little bit more challenging for myself. 
//  I utilized a lot of new methods I learned in this chapter (i.e. Cin two arguments, static_cast () to convert values)
//  I feel I am getting more clever with shortening my code. I am still noob but feeling the progress.
//
// Questions:
//  Is there a way of shortening the output values of a double/float variable? I found myself getting values like 0.012321312544134 or so
//  how coud I print that value in more concise way like 12.3 x 10 ^ -3 or 12.3e-3 (to make it more engineer like). 
//  Also the units formating. Instead of m^3, something more elegant m3 with the 3 shown as an exponent. 
//



#include "stdafx.h"
using namespace std;

double cel_fah(double celcius); // converts degrees in celcius to farenheit. 
float sphere_vol(float radius); // calculates volume of sphere.
int rec_perim(int p_height, int p_width); // calculates perimeter of rectangle
double km_ml(double kilometers); // converts kilometers to miles

int _tmain(int argc, _TCHAR* argv[])
{ 
	//5-1
	double cel, fah;

	cout << "\tCelcius to Fahrenheit (5-1)\n\n" << "Enter temperature (in celcius) you wish to convert: "; // promps user for a temperature in celcius to be converted into farenheit
	cin >> cel;

	fah = cel_fah(cel); // function that converts temperature is called
	
	cout << cel << " degrees C is " << fah << " degrees F\n\n"; // prints result of convertion
    
	//5-2
	float radius, volume;

	cout << "\tSphere volume (5-2)\n\n" << "Enter radius(m) of the sphere: ";
	cin >> radius;

	volume = sphere_vol(radius);

	cout << volume << "m^3 is the volume of the sphere \n\n";

	//5-3
	int width, height;

	cout << "\tPerimeter of Rectangle (5-3)\n\n" << "Enter its width and height (separated by space): "; // prompts user for both width and height
	cin >> width >> height; // decided to use cin with several parameters and see functionality.

	cout << "The perimeter of the rectangle is: " << rec_perim(width, height) << "\n\n"; // calculates & prints out resulting perimeter

	//5-4
	double kilo;
	cout << "\tKilometers/h to Miles/h (5-4)\n\n" << "Enter how fast you are going (Km/h): ";
	cin >> kilo;

	cout << "you would be going at " << km_ml(kilo) << " Miles/h! \n\n";
	

	//5-5
	int time[2];
	cout << "\tHours and Minutes to just Minutes (5-5)\n\n" << "Enter your hours and minutes (separated by space): ";
	cin >> time[0] >> time[1];

	cout << "That is " << time[0] * 60 + time[1] << " minutes! \n\n"; // I'm getting good. 


	//5-6
	int hour_min;
	cout << "\tMinutes to Hour and Minutes (5-6)\n\n" << "Enter your Minutues: ";
	cin >> hour_min;

	cout << "That is " << hour_min / 60 << " Hours and " << hour_min % 60 << " Minutes!\n\n"; // Ima beast! 


	return 0;
}

double	cel_fah(double celcius) // body of the function that converts degrees in celcius to farenheit
{
	double fahrenheit;

	return fahrenheit = (static_cast<double>(9)/5 * celcius) + 32; // C++ will return an integer as a result of the division 9/5 (1.8 becomes 1, chops the decimal off!). Using 9.0 would have yield
														           // the same result. Static_cast converts the variable or number to the parameter assign. I used this opportunity to try it.
}

float sphere_vol(float radius) // body of function that calculates the sphere's volume
{
	const double PI = 3.1415926;
	float volume;
	
	return volume = static_cast<double>(4)/3 * PI * pow (radius, 3);  // pow() is used to calculate radius*e^3 (math.h library needed).  
}

int rec_perim(int p_height, int p_width)  // fast and easy function that calculates perimeters of rectangles
{ return 2 * (p_height + p_width); }

double km_ml(double kilometers)  // fast abd easy function that converts kilometers to miles
{ return kilometers * 0.6213712; }
