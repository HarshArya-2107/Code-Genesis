#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int custid, consumption;
    float charges, surcharges = 0, total, netamt;
    string customer_name;
    cin >> custid >> customer_name >> consumption;
    if (consumption < 200 ) {
        charges = 3;
    }
    else if (consumption >= 200 && consumption < 400) {
        charges = 3.350;
    }
    else if (consumption >= 400 && consumption < 600) {
        charges = 4.80;
    }
    else {
        charges = 5.10;
    }
    total = consumption * charges;
 
    if (total > 1250) {
        surcharges = total * 15 / 100.0;
    }
    netamt = total + surcharges;
 
    cout << custid << endl;
    cout << customer_name << endl;
    cout << consumption << endl;
    cout << netamt << endl;
}
 
 
