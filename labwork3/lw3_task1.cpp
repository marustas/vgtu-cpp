#include <iostream>
#include <string>
#include <iomanip>
#include "Package.h"
using namespace std;

void setSender_name(string sender_n);
string getSender_name();

void setSender_address(string sender_addr);
string getSender_address();

void setSender_city(string sender_c);
string getSender_city();

void setsender_state(string sender_s);
string getsender_state();

void setsender_ZIP(string sender_Z);
string getsender_ZIP();

void setrecipient_name(string recipient_n);
string getrecipient_name();

void setrecipient_address(string recipient_addr);
string getrecipient_address();

void setrecipient_city(string recipient_c);
string getrecipient_city();

void setrecipient_state(string recipient_s);
string getrecipient_state();

void setrecipient_ZIP(string recipient_Z);
string getrecipient_ZIP();

void setweight(double w);
double getWeight();

void setcostperounce(double cost);
double getcostperounce();

double calculateCost();

Package::Package(string sender_n, string sender_addr, string sender_c, string sender_s, string sender_Z, string recipient_n, string recipient_a, string recipient_c, string recipient_s, string recipient_Z, double wei, double cost)
{
    sender_name = sender_n;
    sender_address = sender_addr;
    sender_city = sender_c;
    sender_state = sender_s;
    sender_ZIP = sender_Z;

    recipient_name = recipient_n;
    recipient_address = recipient_a;
    recipient_city = recipient_c;
    recipient_state = recipient_s;
    recipient_ZIP = recipient_Z;

    if (wei > 0.0 && cost > 0.0)
    {
        weight = wei;
        cost_per_ounce = cost;
    }
    else
    {
        weight = 0.0;
        cost_per_ounce = 0.0;
    }
}

void Package::setSender_name(string sender_n)
{
    sender_name = sender_n;
}
string Package::getSender_name()
{
    return sender_name;
}

void Package::setSender_address(string sender_addr)
{
    sender_address = sender_addr;
}
string Package::getSender_address()
{
    return sender_address;
}

void Package::setSender_city(string sender_c)
{
    sender_city = sender_c;
}

string Package::getSender_city()
{
    return sender_city;
}

void Package::setSender_sate(string sender_s)
{
    sender_state = sender_s;
}
string Package::getSender_state()
{
    return sender_state;
}

void Package::setSender_ZIP(string sender_Z)
{
    sender_ZIP = sender_Z;
}
string Package::getSender_ZIP()
{
    return sender_ZIP;
}

void Package::setRecipient_name(string recipient_n)
{
    recipient_name = recipient_n;
}
string Package::getRecipient_name()
{
    return recipient_name;
}

void Package::setRecipient_address(string recipient_addr)
{
    recipient_address = recipient_addr;
}
string Package::getRecipient_address()
{
    return recipient_address;
}

void Package::setRecipient_city(string recipient_c)
{
    recipient_city = recipient_c;
}
string Package::getRecipient_city()
{
    return recipient_city;
}

void Package::setRecipient_state(string recipient_s)
{
    recipient_state = recipient_s;
}
string Package::getRecipient_state()
{
    return recipient_state;
}

void Package::setRecipient_ZIP(string recipient_Z)
{
    recipient_ZIP = recipient_Z;
}
string Package::getRecipient_ZIP()
{
    return recipient_ZIP;
}

void Package::setWeight(double w)
{
    weight = (w < 0.0) ? 0.0 : w;
}
double Package::getWeight()
{
    return weight;
}

void Package::setCost_per_ounce(double cost)
{
    cost_per_ounce = (cost < 0.0) ? 0.0 : cost;
}
double Package::getCost_per_ounce()
{
    return cost_per_ounce;
}

double Package::calculateCost()
{
    double result;
    result = weight * cost_per_ounce;
    return result;
}

TwoDayPackage::TwoDayPackage(string sender_n, string sender_addr,
                             string sender_c, string sender_s, string sender_Z, string recipient_n,
                             string recipient_addr, string recipient_c, string recipient_s,
                             string recipient_Z, double w, double cost, double delivery_fee)
    : Package(sender_n, sender_addr, sender_c, sender_s, sender_Z, recipient_n,
              recipient_addr, recipient_c, recipient_s, recipient_Z, w, cost)
{
    setTwo_day_delivery_fee(delivery_fee);
}

double TwoDayPackage::getTwo_day_delivery_fee()
{
    return two_day_delivery_fee;
}
void TwoDayPackage::setTwo_day_delivery_fee(double delivery_fee)
{
    two_day_delivery_fee = delivery_fee;
}

double TwoDayPackage::calculateCost()
{
    double result;
    result = Package::calculateCost() + two_day_delivery_fee;
    return result;
}

OvernightPackage::OvernightPackage(string sender_n, string sender_addr,
                                   string sender_c, string sender_s, string sender_Z, string recipient_n,
                                   string recipient_addr, string recipient_c, string recipient_s,
                                   string recipient_Z, double w, double cost, double delivery_fee)
    : Package(sender_n, sender_addr, sender_c, sender_s, sender_Z, recipient_n,
              recipient_addr, recipient_c, recipient_s, recipient_Z, w, cost)
{
    setOvernight_delivery_fee(delivery_fee);
}

double OvernightPackage::getOvernight_delivery_fee()
{
    return overnight_delivery_fee;
}
void OvernightPackage::setOvernight_delivery_fee(double delivery_fee)
{
    overnight_delivery_fee = delivery_fee;
}

double OvernightPackage::calculateCost()
{
    double result;
    result = (getCost_per_ounce() + overnight_delivery_fee) * getWeight();
    return result;
}

int main(int argc, char *argv[])
{
    OvernightPackage p1("Clevelnd", "Boulevard 3/4", "Gravity Falls",
                        "Arizona", "89754", "Griffin", "123 bent street", "Chicago", "Illionis",
                        "87540", 12.00, 1.50, 1.10);
    TwoDayPackage p2("Quagmire", "987 1st Street", "Sacramento",
                     "California", "87654", "Jo", "833 palm Street", "Miami", "Florida",
                     "98763", 18.00, 1.05, 8.00);

    cout << "_______________________________________\n";
    cout << "Overnight Delivery:\n";
    cout << "Sender:" << setw(20) << p1.getSender_name() << "\n";
    cout << "Sender's address:  " << p1.getSender_address() << "\n";
    cout << "Sender's city:     " << setw(11) << p1.getSender_city() << "\n";
    cout << "Sender's state: " << setw(10) << p1.getSender_state() << "\n";
    cout << "Sender's ZIP code: " << setw(5) << p1.getSender_ZIP() << "\n";
    cout << "\n";
    cout << "Recipient:    " << setw(15) << p1.getRecipient_name() << "\n";
    cout << "Recipient's address:  " << p1.getRecipient_address() << "\n";
    cout << "Recipient's city: " << setw(11) << p1.getRecipient_city() << "\n";
    cout << "Recipient's state:  " << setw(10) << p1.getRecipient_state() << "\n";
    cout << "Recipient's ZIP code: " << setw(5) << p1.getRecipient_ZIP() << "\n";
    cout << "Cost          $ " << p1.calculateCost() << endl;
    cout << "_______________________________________\n";

    cout << "\n\n";
    cout << "_______________________________________\n";
    cout << "2 Day Delivery:\n";
    cout << "Sender:             " << p2.getSender_name() << "\n";
    cout << "Sender's address:   " << p2.getSender_address() << "\n";
    cout << "Sender's city:      " << p2.getSender_city() << "\n";
    cout << "Sender's state:     " << p2.getSender_state() << "\n";
    cout << "Sender's ZIP code:  " << p2.getSender_ZIP() << "\n";
    cout << "\n";
    cout << "Recipient:              " << p2.getRecipient_name() << "\n";
    cout << "Recipient's address:    " << p2.getRecipient_address() << "\n";
    cout << "Recipient's city:       " << p2.getRecipient_city() << "\n";
    cout << "Recipient's state:      " << p2.getRecipient_state() << "\n";
    cout << "recipient's ZIP code:   " << p2.getRecipient_ZIP() << "\n";
    cout << "Cost          $ " << p2.calculateCost() << endl;
    cout << "_______________________________________\n";
    return 0;
}