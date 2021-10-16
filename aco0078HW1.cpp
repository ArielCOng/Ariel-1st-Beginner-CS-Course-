/*Name: Ariel Ong
EUID: aco0078
Email: spring3828@gmail.com
Department: Computer Science and Computer Engineering
Course Number: 1030.002, 0058
Description of Program: This program will calculate the escape velocity of a planet based on user input. Next, the program will calculate kinetic energy required for an object to escape the planet's pull based on user input
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std ;

int main ()
{
	cout << "    Computer Science and Engineering" << endl;  //Displaying my info
	cout << "   CSCE 1030.002 - Computer Science I" << endl;
	cout << " Ariel Ong   aco0078   arielong@my.unt.edu" << endl;

	const double gravitCon = 6.67e-11; //Initializing Gravitation Constan
      	const double milesToMeters = 1609.34; //Initializing multipler that converts miles to meters
       
       	double radius; //Radius of planet (in miles)
        double massPlanet; //Mass of planet (in kg)
       	double escapeV; //escape velocity of planet in meters per second	
        double kineticEnergy; //Energy required by object to escape the planet
       
	int massObject; //Mass of object trying to escape gravity (mass in kg)

	cout << "Radius of planet in miles: "; //Get radius from user 
	cin >> radius;

	cout << "Mass of planet in kg: ";//Get mass of planet from user
	cin >> massPlanet;
        
        radius = (radius * milesToMeters); //Converting to meters 
	
	escapeV = sqrt((2 * gravitCon * massPlanet) / radius); //changing  "escapeV" equal to the equation given
	
	cout << "The escape velocity of the planet is " << setprecision(3) << fixed << escapeV <<" meters per second." << endl; //showing escape velocity of planet in meters per second

        cout << "Enter the mass (in kg) of the object attempting to escape the gravity of the planet: "; //Prompting for mass of object trying to escape 
	cin >>  massObject; 
	
	kineticEnergy = ((.5 * massObject) * (pow(escapeV, 2)));

	cout << "The kinetic energy required by the object to escape the planet is " << setprecision(4) << fixed << kineticEnergy << " Joules." << endl;	

	return 0;
}
