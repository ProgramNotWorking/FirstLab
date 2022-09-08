#include <iostream>
#include <windows.h>

using namespace std;

class Person {
private:
    string name;
    int age;
    double height;

public:
    void dataInput() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayInfo() {
        cout << "User name: " << getName() << endl << "User age: " << getAge() << endl;
    }

private:
    string getName() { return name; }
    int getAge() const { return age; }

public:
    void sayHelloToUser() {
        cout << "Hello " << getName() << endl;
    }

    void howOldAreUser() {
        if (getAge() > 0) {
            if (getAge() < 18) {
                cout << "So, u are minor" << endl;
            } else if (getAge() >= 18 && getAge() <= 25) {
                cout << "So, u are mature" << endl;
            } else {
                cout << "U are rly grown up" << endl;
            }
        } else {
            cout << "I think u have some mistake with u'r age" << endl;
        }
    }

};

int main() {
    Person person;

    person.dataInput();
    person.sayHelloToUser();
    person.displayInfo();
    person.howOldAreUser();

}
