#ifndef _PACKAGE_CLASS_
#define _PACKAGE_CLASS_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Package
{
private:
    string Sender_name;
    string Sender_address;
    string Sender_state;
    string Sender_city;
    int Sender_ZIP;

    string Recipient_name;
    string Recipient_address;
    string Recipient_state;
    string Recipient_city;
    int Recipient_ZIP;

    double weight;
    double cost_per_ounce;

public:
    Package(const string &, const string &, const string &, const string &, int,
            const string &, const string &, const string &, const string &, int, double, double);

    // Setters and getters.
    void setSenderName(const string &);
    string getSenderName() const;

    void setRecipientName(const string &);
    string getRecipientName() const;

    void setSenderAddress(const string &);
    string getSenderAddress() const;

    void setRecipientAddress(const string &);
    string getRecipientAddress() const;

    void setSenderState(const string &);
    string getSenderState() const;

    void setRecipientState(const string &);
    string getRecipientState() const;

    void setSenderCity(const string &);
    string getSenderCity() const;

    void setRecipientCity(const string &);
    string getRecipientCity() const;

    void setSenderZIP(int);
    int getSenderZIP() const;

    void setRecipientZIP(int);
    int getRecipientZIP() const;

    void setWeight(double);
    double getWeight() const;

    void setCostPerOunce(double);
    double getCostPerOunce() const;

    double calculateCost() const;
};

class TwodayPackage : public Package
{
private:
    double twoday_fee;

public:
    TwodayPackage(const string &, const string &, const string &, const string &, int,
                  const string &, const string &, const string &, const string &, int, double, double, double);
    void setTwodayFee(double);
    double getTwodayFee() const;
    double calculateCost() const;
};

class OvernightPackage : public Package
{
private:
    double overnight_fee;

public:
    OvernightPackage(const string &, const string &, const string &, const string &, int,
                     const string &, const string &, const string &, const string &, int, double, double, double);
    void setOvernightFee(double);
    double getOvernightFee() const;
    double calculateCost() const;
};

#endif