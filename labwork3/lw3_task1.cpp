#include <iostream>
#include <string>
#include "Package.h"
#include <vector>
using namespace std;

Package::Package(const string &sn, const string &ss, const string &sc, const string &sa, int sz,
                 const string &rn, const string &rs, const string &rc, const string &ra, int rz, double w, double cost)
    : Sender_name(sn), Sender_address(sa), Sender_state(ss), Sender_city(sc), Sender_ZIP(sz),
      Recipient_name(rn), Recipient_address(ra), Recipient_state(rs), Recipient_city(rc), Recipient_ZIP(rz)
{
    setWeight(w);
    setCostPerOunce(cost);
}
void Package::setSenderName(const string &name)
{
    Sender_name = name;
}
string Package::getSenderName() const
{
    return Sender_name;
}

void Package::setRecipientName(const string &name)
{
    Recipient_name = name;
}
string Package::getRecipientName() const
{
    return Recipient_name;
}

void Package::setSenderAddress(const string &address)
{
    Sender_address = address;
}
string Package::getSenderAddress() const
{
    return Sender_address;
}

void Package::setRecipientAddress(const string &address)
{
    Recipient_address = address;
}
string Package::getRecipientAddress() const
{
    return Recipient_address;
}

void Package::setSenderState(const string &state)
{
    Sender_state = state;
}
string Package::getSenderState() const
{
    return Sender_state;
}

void Package::setRecipientState(const string &state)
{
    Recipient_state = state;
}
string Package::getRecipientState() const
{
    return Recipient_state;
}

void Package::setSenderCity(const string &city)
{
    Sender_city = city;
}
string Package::getSenderCity() const
{
    return Sender_city;
}

void Package::setRecipientCity(const string &city)
{
    Recipient_city = city;
}
string Package::getRecipientCity() const
{
    return Recipient_city;
}

void Package::setSenderZIP(int zip)
{
    Sender_ZIP = zip;
}
int Package::getSenderZIP() const
{
    return Sender_ZIP;
}

void Package::setRecipientZIP(int zip)
{
    Recipient_ZIP = zip;
}
int Package::getRecipientZIP() const
{
    return Recipient_ZIP;
}

void Package::setWeight(double w)
{
    if (w > 0.0)
        weight = w;
    else
        weight = 0.0;
}
double Package::getWeight() const
{
    return weight;
}

void Package::setCostPerOunce(double cost)
{
    if (cost > 0.0)
        cost_per_ounce = cost;
    else
        cost_per_ounce = 0.0;
}
double Package::getCostPerOunce() const
{
    return cost_per_ounce;
}

double Package::calculateCost() const
{
    return getWeight() * getCostPerOunce();
}

TwodayPackage::TwodayPackage(const string &sn, const string &ss, const string &sc, const string &sa, int sz,
                             const string &rn, const string &rs, const string &rc, const string &ra, int rz, double w, double cost, double fee) : Package(sn, ss, sc, sa, sz, rn, rs, rc, ra, rz, w, cost)
{
    setTwodayFee(fee);
}

void TwodayPackage::setTwodayFee(double fee)
{
    twoday_fee = (fee < 0.0) ? 0.0 : fee;
}
double TwodayPackage::getTwodayFee() const
{
    return twoday_fee;
}
double TwodayPackage::calculateCost() const
{
    return Package::calculateCost() + getTwodayFee();
}

OvernightPackage::OvernightPackage(const string &sn, const string &ss, const string &sc, const string &sa, int sz,
                                   const string &rn, const string &rs, const string &rc, const string &ra, int rz, double w, double cost, double fee) : Package(sn, ss, sc, sa, sz, rn, rs, rc, ra, rz, w, cost)
{
    setOvernightFee(fee);
}

void OvernightPackage::setOvernightFee(double fee)
{
    overnight_fee = (fee < 0.0) ? 0.0 : fee;
}
double OvernightPackage::getOvernightFee() const
{
    return overnight_fee;
}

double OvernightPackage::calculateCost() const
{
    return getWeight() * (getCostPerOunce() + getOvernightFee());
}

int main()
{
    vector<Package *> packages(3);
    packages[0] = new Package("Stas", "Belarus", "Minsk", "Bedy 2b", 123, "Vlad", "Belarus", "Gomel", "Kiseleva 9", 456, 10.0, 10.0);
    packages[1] = new OvernightPackage("Igor", "Russia", "Moscow", "Nervasta", 568, "Kolya", "Belarus", "Mogilev", "Neresta", 934, 13.0, 14.0, 2.0);
    packages[2] = new TwodayPackage("Algimantas", "Lithuania", "Vilnius", "Sauleteko 16", 639, "Hleb", "Spain", "Madris", "Kalvariyskaya", 297, 11.0, 12.0, 6.0);
    double total_cost = 0.0;
    for (size_t i = 0; i < packages.size(); i++)
    {
        cout << "Sender name: " << packages[i]->getSenderName() << "\n"
             << "Sender address: " << packages[i]->getSenderAddress() << "\n"
             << "Sender state: " << packages[i]->getSenderState() << "\n"
             << "Sender city: " << packages[i]->getSenderCity() << "\n"
             << "Sender ZIP code: " << packages[i]->getSenderZIP() << "\n\n"
             << "Recipient name: " << packages[i]->getRecipientName() << "\n"
             << "Recipient address: " << packages[i]->getRecipientAddress() << "\n"
             << "Recipient state: " << packages[i]->getRecipientState() << "\n"
             << "Recipient city: " << packages[i]->getSenderCity() << "\n"
             << "Recipient ZIP code: " << packages[i]->getRecipientZIP() << "\n";
        double cost = packages[i]->calculateCost();
        cout << "Price of the package: " << cost << "\n\n";
        total_cost += cost;
    }
    cout << "Total cost of the packages:  " << total_cost << endl;
    return 0;
}