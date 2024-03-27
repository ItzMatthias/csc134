// M5LAB2
// CSC 134
//Matthias Kleckley
// 3/27/24

#include <iostream>
using namespace std;

double getLength();
double getArea(double length , double width);
double getWidth();
void displayData(double length, double width, double area);
// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
  

   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length,width);
   
   // Display the rectangle's data.
   displayData( length, width, area);
          
   return 0;
}

double getLength() { 
    double length;
    cout<< "What is the length of the rectangle ";
    cin >> length;
    return length;
}
 
double getWidth() {
    double Width;
    cout<< "What is the Width of the rectangle ";
    cin >> Width;
    return Width;
}
double getArea(double length , double width){
double area = length * width;

return area;
}



void displayData(double length ,double width ,double area) {
   
    cout<< "The Area is " << area;

    return ;
}
//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************