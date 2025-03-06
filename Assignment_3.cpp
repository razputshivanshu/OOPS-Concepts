// Design a class Rectangle with the following specifications :

// Attributes :

// length (double) : Represents the length of the rectangle
// width (double) : Represents the width of the rectangle.
// Area (double) : Represents the area of rectangle.
// Constructors :

// A default constructor that initializes both length and width to 1.0
// A parameterized constructor that takes two arguments to initialize length and width.
// Methods :

// double calculateArea() : Computes and returns the area of rectngle.
// void displayDetails() : Prints the rectangle's details, including its dimensions and area, in format specified below :


// Refer the sample examples for understanding the output format.

// Refer the commented code on IDE for output statements.

#include <iostream>
using namespace std;

class Rectangle
{
private:
  double length, width, area;

public:
  Rectangle() : length(1.0), width(1.0), area(1.0) {}

  Rectangle(double len, double wid) : length(len), width(wid)
  {
    area = calculateArea();
  }

  double calculateArea()
  {
    return length * width;
  }

  void displayDetails()
  {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
  }
};

int main()
{
  Rectangle rect1;
  rect1.displayDetails();

  Rectangle rect2(5.0, 5.0);
  rect2.displayDetails();

  return 0;
}