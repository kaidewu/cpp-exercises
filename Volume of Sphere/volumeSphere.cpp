#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

double volumeSphere(double radius){
    double volume;
    volume = 4/3 * M_PI * pow(radius, 3);
    return volume;
}

int main(){
    double r;
    double result;
    cout << "Input the radius of the sphere: ";
    cin >> r;
    result = volumeSphere(r);
    cout << "The volume of the sphere is: " << result << "\n";
}