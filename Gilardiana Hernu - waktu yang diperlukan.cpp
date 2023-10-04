#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double a;
    double v0;
    double g;
    double waktu;
    double sinA;

    cout << "Masukkan sudut: ";
    cin >> a;
    cout << "Masukkan gravitasi: ";
    cin >> g;
    cout << "Masukkan kecepatan awal: ";
    cin >> v0;
    sinA = sin(a * 22 / 7 / 180);
    waktu = 2 * (v0 * sinA) / 10;
    cout << "Jadi waktu yang diperlukan Boro adalah: " << waktu << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

