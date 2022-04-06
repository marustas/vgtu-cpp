#include <iostream>
#include <string>
using namespace std;

class Package
{
private:
    string sender_name;
    string sender_state;
    string sender_city;
    string sender_address;
    string sender_ZIP_code;

    string recipient_name;
    string recipient_state;
    string recipient_city;
    string recipient_address;
    string recipient_ZIP_code;

    double weight;
    double cost_per_ounce;

public:
    Package(string sender_n, string sender_addr, string sender_c,
            string sender_s, string sender_Z, string recipient_n, string recipient_addr,
            string recipient_c, string recipient_s, string recipient_Z, double w,
            double cost);

    void setSender_name(string sender_n);
    string getSender_name();

    void setSender_sate(string sender_s);
    string getSender_state();

    void setSender_city(string sender_c);
    string getSender_city();

    void setSender_address(string sender_addr);
    string getSender_address();

    void setSender_ZIP(string sender_Z);
    string getSender_ZIP();

    void setRecipient_name(string recipient_n);
    string getRecipient_name();

    void setRecipient_state(string recipient_s);
    string getRecipient_state();

    void setRecipient_city(string recipient_c);
    string getRecipient_city();

    void setRecipient_address(string recipient_addr);
    string getRecipient_address();

    void setRecipient_ZIP(string recipient_Z);
    string getRecipient_ZIP();

    void setWeight(double w);
    double getWeight();

    void setCost_per_ounce(double cost);
    double getCost_per_ounce();

    double calculateCost();
};

Package::Package(string sender_n, string sender_addr, string sender_c,
                 string sender_s, string sender_Z, string recipient_n, string recipient_addr,
                 string recipient_c, string recipient_s, string recipient_Z, double w,
                 double cost)
{
    string sender_name = sender_n;
    string sender_state = sender_s;
    string sender_city = sender_c;
    string sender_address = sender_addr;
    string sender_ZIP_code = sender_Z;

    string recipient_name = recipient_n;
    string recipient_state = recipient_s;
    string recipient_city = recipient_c;
    string recipient_address = recipient_addr;
    string recipient_ZIP_code = recipient_Z;

    if (w > 0.0 && cost > 0.0)
    {
        weight = w;
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

void Package::setSender_sate(string sender_s)
{
    sender_state = sender_s;
}
string Package::getSender_state()
{
    return sender_state;
}

void Package::setSender_city(string sender_c)
{
    sender_city = sender_c;
}
string Package::getSender_city()
{
    return sender_city;
}

void Package::setSender_address(string sender_addr)
{
    sender_address = sender_addr;
}
string Package::getSender_address()
{
    return sender_address;
}

void Package::setSender_ZIP(string sender_Z)
{
    sender_ZIP_code = sender_Z;
}
string Package::getSender_ZIP()
{
    return sender_ZIP_code;
}

void Package::setRecipient_name(string recipient_n)
{
    recipient_name = recipient_n;
}
string Package::getRecipient_name()
{
    return recipient_name;
}
void Package::setRecipient_state(string recipient_s)
{
    recipient_state = recipient_s;
}
string Package::getRecipient_state()
{
    return recipient_state;
}

void Package::setRecipient_city(string recipient_c)
{
    recipient_city = recipient_c;
}
string Package::getRecipient_city()
{
    return recipient_city;
}

void Package::setRecipient_address(string recipient_addr)
{
    recipient_address = recipient_addr;
}
string Package::getRecipient_address()
{
    return recipient_address;
}

void Package::setRecipient_ZIP(string recipient_Z)
{
    recipient_ZIP_code = recipient_Z;
}
string Package::getRecipient_ZIP()
{
    return recipient_ZIP_code;
}

void Package::setWeight(double w)
{
    weight = (w < 0.0) ? 0.0 : w;
}
double Package::getWeight()
{
    return weight;
}
double Package::calculateCost()
{
    return weight * cost_per_ounce;
}