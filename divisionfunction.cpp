#include<iostream>
using namespace std;

//division function declaration
double division (double a, double b) {

	return a / b;
}
//main function
int main () {

	double x, y, q;
	cout << "Please enter the first number ";
	cin >> x; 
	cout << "\n";

	cout << "Please enter the second number ";
	cin >> y; 
	cout << "\n";

	//call/invoke division function and pass arguments
	q = division (x, y); 

	cout <<  x  <<  " Divided by " << y <<" = "<< q << endl;
			
	return 0;
}