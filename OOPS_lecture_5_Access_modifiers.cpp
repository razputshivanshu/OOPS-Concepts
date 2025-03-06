#include <iostream>
using namespace std;

class Base
{
private:
  int privateVar = 10; // Only accessible inside Base class

protected:
  int protectedVar = 20; // Accessible in Base and derived classes

public:
  int publicVar = 30; // Accessible from anywhere

  void showPrivate()
  {
    cout << "Private Variable: " << privateVar << endl;
  }
};

class Derived : public Base
{
public:
  void accessMembers()
  {
    // privateVar = 15; // ❌ Not accessible (private in Base class)
    protectedVar = 25; // ✅ Accessible (protected in Base class)
    publicVar = 35;    // ✅ Accessible (public in Base class)

    cout << "Protected Variable: " << protectedVar << endl;
    cout << "Public Variable: " << publicVar << endl;
  }
};

int main()
{
  Base baseObj;
  // cout << baseObj.privateVar; // ❌ Not allowed (private)
  // cout << baseObj.protectedVar; // ❌ Not allowed (protected)
  cout << "Public Variable from Base: " << baseObj.publicVar << endl; // ✅ Allowed

  baseObj.showPrivate(); // ✅ Allowed via public method

  Derived derivedObj;
  derivedObj.accessMembers(); // ✅ Accesses protected and public members

  return 0;
}
