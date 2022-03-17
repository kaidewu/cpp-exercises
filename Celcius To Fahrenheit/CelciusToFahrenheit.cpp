#include <iostream>
using namespace std;

int main() {
    float c;
    float f;
    cout << "Temperatura en Celcius: ";
    cin >> c;
    f = (c * 1.8) + 32;
    cout << c << " Celcius son " << f << " Fahrenheit\n";
}