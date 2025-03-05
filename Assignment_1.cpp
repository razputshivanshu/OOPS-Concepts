// Practice (Classes and Objects)
// 100
// Medium
// Companies
// You are tasked with designing a class Student that stores and displays information about students.

// The class must have the following :



// Attributes :

// name (string) : Stores the name of the student.
// rollNumber (int) : Stores the roll number of the student
// Methods :

// setDetails (String name, int rollNumber) : This method initializes the attributes name and rollNumber with the values provided by the user.
// displayDetails() : This method prints the details of the student in following format (The output consist of two separate lines) :


// Refer the sample input example to understand the output format.

// Refer the commented code on IDE for output statements.


// Examples:
// Input : Name - "Striver" , Roll Number : 101

// Output :

// Name : Striver

// Roll Number : 101

// Explanation :

// A Student object is created in Main class.
// The setDetails() method is called with "Striver" and 101 as arguments. This initializes the name attribute to "Striver" and the rollNumber attribute to 101.
// The displayDetails() method is invoked , which prints the student's details in the required format.
// Input : Name - "Jax" , Roll Number : 10434

// Output :

// Name : Jax

// Roll Number : 10434

// Explanation :

// A Student object is created in Main class.
// The setDetails() method is called with "Jax" and 10434 as arguments. This initializes the name attribute to "Jax" and the rollNumber attribute to 10434.
// The displayDetails() method is invoked , which prints the student's details in the required format.
// Constraints:
// 1 <= roll number <= 106

#include <iostream>
using namespace std;

class Student
{
public:
  string name;
  int rollNumber;

  void setDetails(string str1, int roll)
  {
    name = str1;
    rollNumber = roll;
  }

  void displayDetails()
  {
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
  }
};

int main()
{

  Student student1;
  student1.setDetails("Shivanshu", 6688);

  student1.displayDetails();
}