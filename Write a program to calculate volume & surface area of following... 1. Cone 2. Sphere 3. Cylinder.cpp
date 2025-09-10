// Program to calculate Volume and Surface Area
#include <iostream>
using namespace std;

int main() {
    float pi = 3.14; // making a constant for value of pi
    
    // Surface area and volume of a cone 
    float r; // making a varibale for radius 
    float h; // making a variable for slant height
    
    // taking inputs
    cout << "        Surface area and volume of a cone" << endl;
    cout << "Enter the radius of base of right angled cone: ";
    cin >> r;
    cout << "Enter the slant height of cone: ";
    cin >> h;
    
    // applying formulas for surface area and curved surface area of cone
    float e = r+h; 
    float sa = pi*r*e;
    float csa = pi*r*h;
    
    // applying formula and logic for volume of cone
    float w = h/3;
    float vol = pi*r*r*w;
    
    //printing the result
    cout << "Surface area of cone = " << sa << endl;
    cout << "Curved Surface area of cone= " << csa << endl;
    cout << "Volume of cone = " << vol << endl;
    
    // Surface area and volume fo a sphere 
    float rad; // making variable to take radius of sphere as input
    cout << "         Surface area and Volume of a sphere" << endl;
    
    //taking input
    cout << "Enter the radius of sphere: ";
    cin >> rad;
    
    // Calculating surface area and volume 
    float sas = 4*pi*rad*rad;
    float vols = (4/3)*pi*rad*rad*rad;
    
    // display of input 
    
    cout << "Surface area of sphere = " << sas << endl;
    cout << "volume of sphere = " << vols << endl;
    
    // Surface area and volume of a cylinder
    float rd;
    float ht;
    cout << "        Surface area and volume of a cylinder" << endl;
    
    // taking inputs
    cout << " Enter the radius of cylinder: ";
    cin >> rd;
    cout << "Enter the height of cylinder: ";
    cin >> ht;
    
    //calculating surface area and volume of cylinder
    float sac = (2*pi*rd*ht) + (2*pi*rd*rd);
    float csac = (2*pi*rd*ht);
    float volc = pi*rd*rd*ht;
    
    // displaying the output 
    cout << "Surface area of cylinder = " << sac << endl;
    cout << "Curved surface area of cylinder = " << csac << endl;
    cout << "Volume of cylinder = " << volc << endl;
    
    
    
    return 0;
}
