#include <iostream>
using namespace std;
double kubus(double p, double l, double t);
int main()
{
    double p, l, t, h;
    cout << "Volume Kubus" << endl;
    cout << "Masukkan Panjang Kubus" << endl;
    cin >> p;
    cout << "Masukkan Luas Kubus" << endl;
    cin >> l;
    cout << "Masukkan Tinggi Kubus" << endl;
    cin >> t;
    cout << "Volume Kubus :" << kubus(p, l, t) << endl;
}

double kubus(double p, double l, double t)
{
    return p * l * t;
}
