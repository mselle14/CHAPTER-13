//Marshon Sellers
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    int person_age;

public:
    void setAge(int age_value) 
    {
        person_age = age_value;
    }

    int getAge() 
    {
        return person_age;
    }
};

class Student : public Person 
{
private:
    string student_name;

public:
    void setName(string name_value) 
    {
        student_name = name_value;
    }

    void displayCard() {
        cout << "------ Student ID Card ------" << endl;
        cout << "Name: " << student_name << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Status: Active Student" << endl;
    }
};

int main()
{
    Student student_object;
    string input_name;
    int input_age;

    cout << "Enter student name: ";
    getline(cin, input_name);

    cout << "Enter age: ";
    cin >> input_age;

    student_object.setName(input_name);
    student_object.setAge(input_age);

    student_object.displayCard();

    return 0;
}