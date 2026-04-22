//Marshon Sellers
#include <iostream>
#include <string>
using namespace std;

class Visitor
{
private:
    int visitor_id;
    string visitor_city;

public:
    void setVisitorId(int id_value)
    {
        visitor_id = id_value;
    }

    int getVisitorId()
    {
        return visitor_id;
    }

    void setCity(string city_value)
    {
        visitor_city = city_value;
    }

    string getCity()
    {
        return visitor_city;
    }
};

class PremiumVisitor : public Visitor
{
private:
    string visitor_name;
    string pass_type;
    int rides_selected;
    int guest_count;
    double total_spending;
    string locker_required;

public:
    void setPremiumDetails(string name_value, string pass_value,
        int rides_value, int guest_value,
        double spending_value, string locker_value)
    {
        visitor_name = name_value;
        pass_type = pass_value;
        rides_selected = rides_value;
        guest_count = guest_value;
        total_spending = spending_value;
        locker_required = locker_value;
    }

    string getLoungeAccess()
    {
        if (guest_count > 3)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }

    string getFoodCouponStatus()
    {
        if (total_spending >= 3000)
        {
            return "Eligible";
        }
        else
        {
            return "Not Eligible";
        }
    }

    string getVisitorCategory()
    {
        if (pass_type == "Gold" || pass_type == "Platinum")
        {
            return "Premium Fast Track";
        }
        else
        {
            return "Standard Premium";
        }
    }

    void displayPremiumPass()
    {
        cout << "***************************************" << endl;
        cout << "ADVENTURE PARK PREMIUM PASS" << endl;
        cout << "***************************************" << endl;
        cout << "Visitor Name : " << visitor_name << endl;
        cout << "Visitor ID : " << getVisitorId() << endl;
        cout << "City : " << getCity() << endl;
        cout << "Pass Type : " << pass_type << endl;
        cout << "Rides Selected : " << rides_selected << endl;
        cout << "Guests Count : " << guest_count << endl;
        cout << "Total Spending : " << total_spending << endl;
        cout << "Locker Required : " << locker_required << endl;
        cout << "Lounge Access : " << getLoungeAccess() << endl;
        cout << "Food Coupon : " << getFoodCouponStatus() << endl;
        cout << "Visitor Category : " << getVisitorCategory() << endl;
        cout << "Reminder : Please arrive 30 minutes early" << endl;
        cout << "***************************************" << endl;
    }
};

int main()
{
    PremiumVisitor visitor_object;

    string input_name;
    string input_city;
    string input_pass;
    string input_locker;
    int input_id;
    int input_rides;
    int input_guests;
    double input_spending;

    cout << "Enter visitor name: ";
    getline(cin, input_name);

    cout << "Enter visitor ID: ";
    cin >> input_id;
    cin.ignore();

    cout << "Enter city: ";
    getline(cin, input_city);

    cout << "Enter pass type: ";
    getline(cin, input_pass);

    cout << "Enter number of rides selected: ";
    cin >> input_rides;

    cout << "Enter number of guests: ";
    cin >> input_guests;

    cout << "Enter total spending: ";
    cin >> input_spending;
    cin.ignore();

    cout << "Enter locker required (Yes/No): ";
    getline(cin, input_locker);

    visitor_object.setVisitorId(input_id);
    visitor_object.setCity(input_city);
    visitor_object.setPremiumDetails(input_name, input_pass,
        input_rides, input_guests,
        input_spending, input_locker);

    visitor_object.displayPremiumPass();

    return 0;
}