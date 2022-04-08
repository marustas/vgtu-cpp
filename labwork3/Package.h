#ifndef _PACKAGE_CLASS_
#define _PACKAGE_CLASS_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Package
{
public:
    string sender_name;
    string sender_address;
    string sender_state;
    string sender_city;
    string sender_ZIP;

    string recipient_name;
    string recipient_address;
    string recipient_state;
    string recipient_city;
    string recipient_ZIP;

    double weight;
    double cost_per_ounce;

    Package();

    Package(double w, double cpo);

    // Setters and getters.
    void setSenderName(string sender_n);
    string getSenderName();

    void setRecipientName(string recipient_n);
    string getRecipientName();

    void setSenderAddress(string sender_a);
    string getSenderAddress();

    void setRecipientAddress(string recipient_a);
    string getRecipientAddress();

    void setSenderState(string sender_s);
    string getSenderState();

    void setRecipientState(string recipient_s);
    string getRecipientState();

    void setSenderCity(string sender_c);
    string getSenderCity();

    void setRecipientCity(string recipient_c);
    string getRecipientCity();

    void setSenderZIP(string sender_z);
    string getSenderZIP();

    void setRecipientZIP(string recipient_z);
    string getRecipientZIP();

    void setWeight(double w);
    double getWeight();

    void setCostPerOunce(double cpo);
    double getCostPerOunce();

    // Calcualte shipping cost.
    double calculateCost();
};

class Sender_info : public Package
{
public:
    Sender_info(string sender_n, string sender_a, string sender_s, string sender_c, string sender_z);
};

class Recipient_info : public Package
{
    Recipient_info(string recipient_n, string recipient_a, string recipient_s, string recipient_c, string recipient_z);
};

class Sender
{
public:
    vector<Package> sender;
};

class Recipient
{
public:
    vector<Package> recipient;
};

class Cost
{
public:
    vector<Package> cost;
};

class OvernightPackage
{
public:
    double overnight_fee;
};

class TwodayPackage
{
public:
    double twoday_fee;
};

#endif