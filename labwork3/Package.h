#ifndef _PACKAGE_
#define _PACKAGE_
#include <string>
using namespace std;

class Package
{
private:
    string sender_name;
    string sender_state;
    string sender_city;
    string sender_address;
    string sender_ZIP;

    string recipient_name;
    string recipient_state;
    string recipient_city;
    string recipient_address;
    string recipient_ZIP;

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

class TwoDayPackage : public Package
{
private:
    double two_day_delivery_fee;

public:
    TwoDayPackage(string sender_n, string sender_addr, string sender_c, string sender_s, string sender_Z, string recipient_n,
                  string recipient_addr, string recipient_c, string recipient_s,
                  string recipient_Z, double w, double cost, double delivery_fee);

    double getTwo_day_delivery_fee();
    void setTwo_day_delivery_fee(double delivery_fee);
    double calculateCost();
};

class OvernightPackage : public Package
{
private:
    double overnight_delivery_fee;

public:
    OvernightPackage(string sender_n, string sender_addr, string sender_c,
                     string sender_s, string sender_Z, string recipient_n, string recipient_addr,
                     string recipient_c, string recipient_s, string recipient_Z, double w,
                     double cost, double delivery_fee);

    double calculateCost();
    double getOvernight_delivery_fee();
    void setOvernight_delivery_fee(double delivery_fee);
};
#endif