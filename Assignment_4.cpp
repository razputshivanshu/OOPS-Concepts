// Practice (Encapsulation)
// 100
// Medium
// Companies
// You are tasked to design a class Book to manage the book details in a library. The class should contain the following specifications :

// Attributes :

// title (array<string>) : The title of the book (public).
// author (array<string>) : The author of the book (public)
// isAvailable (array<boolean>) : The availability status of the book (private).
// Methods :

// Parameterised constructor to initialize the title, author, isAvaialble list.
// borrowBook() : If the availability status is false then the book is already borrowed by some user and cannot be borrowed until its returned else return "Book Not Available".
// returnBook () : Marks the book as available by setting its available flag to true.
// getAvailability () : Prints the availability status of the book (true for available , false for unavailable).


// Refer the sample example to understand the output format.

// Refer the commented code on IDE to view the output statements.



// The Input is provided as mentioned below :

// "1 <book name>" - represents call to borrowBook method along with name of the book to borrow.

// "2 <book name>" - represents call to returnBook method along with name of the book to return.

// "3 <book name>" - represents call to getAvailability method along with name of book.


// Examples:
// Input : title = [ "Sherlock_Holmes", "Frankenstein", "King_Arthur_and_the_Round_Table", "Treasure_Island" ]

// author = [ "Arthur_Conan_Doyle", "Mary_Shelley", "Roger_Lancelyn_Green", "Robert_Louis_Stevenson" ]

// isAvailable = [ "false", "true", "false", "false" ]

// methodCalls = [ ["1", "Frankenstein"] , ["1", "Sherlock_Holmes"] , ["2", "King_Arthur_and_the_Round_Table"], ["3", "Sherlock_Holmes"], ["1", "Frankenstein"] ]



// Output :

// Book is not available.

// false

// Book is not available.



// Explanation :

// Program creates a object with the arguments title, author and isAvailable list.
// It then takes the methodCalls array as input.
// Iterate over the methodCalls array and gives call to the appropriate methods from the class Book.
// The first operation is to borrow the book named "Frankenstein". As the book is available then it can be borrowed.

// The second operation is to borrow book named "Sherlock Holmes". As the book is not available so we print "Book Not Available".

// The third operation is to return the book named "King_Arthur_and_the_Round_Table".

// The fourth operation we need the availability status of book named "Sherlock_Holmes", which is false.

// The fifth operation is to borrow the book named "Frankenstein". The book was already borrowed in 1st operation and not returned yet. So the availability status is false and So we print "Book Not Available".

#include <iostream>
#include <vector>
using namespace std;

class Book
{
private:
  vector<bool> isAvailable;

public:
  vector<string> title;
  vector<string> author;

  Book(vector<string> bookTitles, vector<string> bookAuthors, vector<bool> availability)
  {
    title = bookTitles;
    author = bookAuthors;
    isAvailable = availability;
  }

  void borrowBook(string bookName)
  {
    for (size_t i = 0; i < title.size(); i++)
    {
      if (title[i] == bookName)
      {
        if (!isAvailable[i])
        {
          cout << "Book Not Available" << endl;
          return;
        }
        isAvailable[i] = false;
        return;
      }
    }
    cout << "Book Not Found" << endl;
  }

  void returnBook(string bookName)
  {
    for (size_t i = 0; i < title.size(); i++)
    {
      if (title[i] == bookName)
      {
        isAvailable[i] = true;
        return;
      }
    }
  }

  void getAvailability(string bookName)
  {
    for (size_t i = 0; i < title.size(); i++)
    {
      if (title[i] == bookName)
      {
        cout << (isAvailable[i] ? "true" : "false") << endl;
        return;
      }
    }
    cout << "Book Not Found" << endl;
  }
};

int main()
{
  vector<string> title = {"Sherlock_Holmes", "Frankenstein", "King_Arthur_and_the_Round_Table", "Treasure_Island"};
  vector<string> author = {"Arthur_Conan_Doyle", "Mary_Shelley", "Roger_Lancelyn_Green", "Robert_Louis_Stevenson"};
  vector<bool> isAvailable = {false, true, false, false};

  Book library(title, author, isAvailable);

  vector<vector<string>> methodCalls = {
      {"1", "Frankenstein"},
      {"1", "Sherlock_Holmes"},
      {"2", "King_Arthur_and_the_Round_Table"},
      {"3", "Sherlock_Holmes"},
      {"1", "Frankenstein"}};

  for (auto call : methodCalls)
  {
    if (call[0] == "1")
    {
      library.borrowBook(call[1]);
    }
    else if (call[0] == "2")
    {
      library.returnBook(call[1]);
    }
    else if (call[0] == "3")
    {
      library.getAvailability(call[1]);
    }
  }

  return 0;
}