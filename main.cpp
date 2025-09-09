#include <iostream>
using namespace std;

int main() {
    // declare my variables
    int height;
    height  = 61; 

    int weight= 130;

    double weightKg = weight*0.453592;
    double heightMeters = height*0.0254;

    double bmi = weightKg / (heightMeters * heightMeters);

    cout << "The BMI for this person is : " << bmi << "." << endl;
}


