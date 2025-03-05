#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int salary;

    void setName(string s) {
        name = s;
    }

    void setSalary(int num) {
        salary = num;
    }

    int getSalary() {
        return salary;
    }
};

int main() {
    Employee obj1;  // No need for dynamic allocation

    obj1.setName("Shivanshu");
    obj1.setSalary(100000);

    cout << obj1.name << " " << obj1.salary << endl;
    cout<<obj1.getSalary()<<endl;
    
    
    Employee obj2;
    obj2.setName("aditya");
    obj2.setSalary(120000);
    
    cout<<obj2.name<<" "<<obj2.getSalary()<<endl;

    return 0;
}

