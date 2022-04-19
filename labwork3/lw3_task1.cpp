#include <iostream>
#include <string>
#include <vector>
#include "Package.h"
using namespace std;
Package::Package(){};
Sender_info::Sender_info(string sender_n, string sender_a, string sender_s, string sender_c, string sender_z)
{
    sender_name = sender_n;
    sender_address = sender_a;
    sender_state = sender_s;
    sender_city = sender_c;
    sender_ZIP = sender_z;
}

Recipient_info::Recipient_info(string recipient_n, string recipient_a, string recipient_s, string recipient_c, string recipient_z)
{
    recipient_name = recipient_n;
    recipient_address = recipient_a;
    recipient_state = recipient_s;
    recipient_city = recipient_c;
    recipient_ZIP = recipient_z;
}

Package::Package(double w, double cpo)
{
    {
        if (w > 0.0)
            weight = w;
        else
            weight = 0.0;
    }
    {
        if (cpo > 0.0)
            cost_per_ounce = cpo;
        else
            cost_per_ounce = 0.0;
    }
}

void Package::setSenderName(string sender_n)
{
    sender_name = sender_n;
}
string Package::getSenderName()
{
    return sender_name;
}

void Package::setRecipientName(string recipient_n)
{
    recipient_name = recipient_n;
}
string Package::getRecipientName()
{
    return recipient_name;
}

void Package::setSenderAddress(string sender_a)
{
    sender_address = sender_a;
}
string Package::getSenderAddress()
{
    return sender_address;
}

void Package::setRecipientAddress(string recipient_a)
{
    recipient_address = recipient_a;
}
string Package::getRecipientAddress()
{
    return recipient_address;
}

void Package::setSenderState(string sender_s)
{
    sender_state = sender_s;
}
string Package::getSenderState()
{
    return sender_state;
}

void Package::setRecipientState(string recipient_s)
{
    recipient_state = recipient_s;
};
string Package::getRecipientState()
{
    return recipient_state;
};

void Package::setSenderCity(string sender_c)
{
    sender_city = sender_c;
};
string Package::getSenderCity()
{
    return sender_city;
};

void Package::setRecipientCity(string recipient_c)
{
    recipient_city = recipient_c;
};
string Package::getRecipientCity()
{
    return recipient_city;
}

void Package::setSenderZIP(string sender_z)
{
    sender_ZIP = sender_z;
}
string Package::getSenderZIP()
{
    return sender_ZIP;
};

void Package::setRecipientZIP(string recipient_z)
{
    recipient_ZIP = recipient_z;
}
string Package::getRecipientZIP()
{
    return recipient_ZIP;
}

void Package::setWeight(double w)
{
    if (w > 0.0)
        weight = w;
    else
        weight = 0.0;
}
double Package::getWeight() { return weight; }

void Package::setCostPerOunce(double cpo)
{
    if (cpo > 0.0)
        cost_per_ounce = cpo;
    else
        cost_per_ounce = 0.0;
}
double Package::getCostPerOunce()
{
    return cost_per_ounce;
}

int main()
{
    Package p;
    Sender s;
    Recipient r;
    Cost c;
    OvernightPackage o;
    TwodayPackage t;
    int type;
    int n;
    double package_cost = 0.0;
    double total_cost = 0.0;
    cout << "Enter the number of packages: ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter sender information(Name,Address,State, City,ZIP code): ";
        cin >> p.sender_name >> p.sender_address >> p.sender_state >> p.sender_city >> p.sender_ZIP;
        s.sender.push_back(p);

        cout << "Enter recipient information(Name,Address,State, City,ZIP code): ";
        cin >> p.recipient_name >> p.recipient_address >> p.recipient_state >> p.recipient_city >> p.recipient_ZIP;
        r.recipient.push_back(p);

        cout << "Enter the weight and cost per ounce of the package: ";
        cin >> p.weight >> p.cost_per_ounce;
        c.cost.push_back(p);

        cout << "Enter type of the package(1 for overnight, 2 for twoday and regular as default option):";
        cin >> type;
        switch (type)
        {
        case 1:
            cout << "Enter the overnight fee ";
            cin >> o.overnight_fee;
            package_cost = (c.cost[i].cost_per_ounce + o.overnight_fee) * c.cost[i].weight;
            break;

        case 2:
            cout << "Enter the twoday fee ";
            cin >> t.twoday_fee;
            package_cost = c.cost[i].weight * c.cost[i].cost_per_ounce + t.twoday_fee;
            break;

        default:
            package_cost = c.cost[i].weight * c.cost[i].cost_per_ounce;
            break;
        }
        total_cost += package_cost;
        cout << "Sender name: " << s.sender[i].sender_name << "\n"
             << "sender address: " << s.sender[i].sender_address << "\n"
             << "Sender state: " << s.sender[i].sender_state << "\n"
             << "Sender city: " << s.sender[i].sender_city << "\n"
             << "Sender ZIP code: " << s.sender[i].sender_ZIP << "\n\n"
             << "Recipient name: " << r.recipient[i].recipient_name << "\n"
             << "Recipient address: " << r.recipient[i].recipient_address << "\n"
             << "Recipient state: " << r.recipient[i].recipient_state << "\n"
             << "recipient city: " << r.recipient[i].recipient_city << "\n"
             << "recipient ZIP code: " << r.recipient[i].recipient_ZIP << "\n"
             << "Price of the package: " << package_cost << "\n\n";
    }
    cout << "Total cost of the packages:  " << total_cost << endl;
}