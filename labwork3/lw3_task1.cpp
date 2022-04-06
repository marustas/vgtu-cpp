#include <iostream>
#include <string>
#include "Package.h"
using namespace std;

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
    return weight * cost_per_ounce;
}