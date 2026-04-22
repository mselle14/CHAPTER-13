//Marshon Sellers
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    int person_age;
    string person_gender;

public:
    void setAge(int age_value)
    {
        person_age = age_value;
    }

    int getAge()
    {
        return person_age;
    }

    void setGender(string gender_value)
    {
        person_gender = gender_value;
    }

    string getGender()
    {
        return person_gender;
    }
};

class Patient : public Person
{
private:
    string patient_name;
    string disease_name;
    string doctor_name;
    int room_number;
    int days_admitted;
    double bill_amount;

public:
    void setPatientDetails(string name_value, string disease_value,
        string doctor_value, int room_value,
        int days_value, double bill_value)
    {
        patient_name = name_value;
        disease_name = disease_value;
        doctor_name = doctor_value;
        room_number = room_value;
        days_admitted = days_value;
        bill_amount = bill_value;
    }

    string getAdmissionType()
    {
        if (days_admitted > 7)
        {
            return "Long Stay";
        }
        else
        {
            return "Short Stay";
        }
    }

    string getBillStatus()
    {
        if (bill_amount >= 5000)
        {
            return "High Bill Case";
        }
        else
        {
            return "Regular Bill Case";
        }
    }

    void displayRecord()
    {
        cout << "========================================" << endl;
        cout << "SMART HOSPITAL RECORD" << endl;
        cout << "========================================" << endl;
        cout << "Patient Name : " << patient_name << endl;
        cout << "Age : " << getAge() << endl;
        cout << "Gender : " << getGender() << endl;
        cout << "Disease : " << disease_name << endl;
        cout << "Doctor Assigned : " << doctor_name << endl;
        cout << "Room Number : " << room_number << endl;
        cout << "Days Admitted : " << days_admitted << endl;
        cout << "Bill Amount : " << bill_amount << endl;
        cout << "Admission Type : " << getAdmissionType() << endl;
        cout << "Bill Status : " << getBillStatus() << endl;
        cout << "========================================" << endl;
    }
};

int main()
{
    Patient patient_object;

    string input_patient_name;
    string input_gender;
    string input_disease;
    string input_doctor;
    int input_age;
    int input_room;
    int input_days;
    double input_bill;

    cout << "Enter patient name: ";
    getline(cin, input_patient_name);

    cout << "Enter age: ";
    cin >> input_age;
    cin.ignore();

    cout << "Enter gender: ";
    getline(cin, input_gender);

    cout << "Enter disease: ";
    getline(cin, input_disease);

    cout << "Enter doctor name: ";
    getline(cin, input_doctor);

    cout << "Enter room number: ";
    cin >> input_room;

    cout << "Enter days admitted: ";
    cin >> input_days;

    cout << "Enter bill amount: ";
    cin >> input_bill;

    patient_object.setAge(input_age);
    patient_object.setGender(input_gender);
    patient_object.setPatientDetails(input_patient_name, input_disease,
        input_doctor, input_room,
        input_days, input_bill);

    patient_object.displayRecord();

    return 0;
}