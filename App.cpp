// include pre-processor directive
#include <iostream>
#include "./headers/BMI.h"
int main() {

    // create a BMI object named b1
    // using the two-arg constructor
    // providing 72.0 inches and a weight
    // of 185 pounds
    BMI b1(72.0, 185);

    // print b1 to stdout
    b1.printBMI();

    // set b1's height to 75 inches
    b1.setHeight(75);

    // print b1 to stdout
    b1.printBMI();

    // set b1's weight to 200 pounds
    b1.setWeight(200);


    // print b1 to stdout
    b1.printBMI();

    // create a BMI object named b2 using its no-arg
    // constructor
    BMI b2;

    // declare local variables that will be used when calling 
    // b2's getter method
    
    double height;
  
    double weight;
   
    double bmi;

    // set b2's height to 75 inches
    b2.setHeight(75);

    // set b2's weight to 200 pounds
    b2.setWeight(200);

    // call method on b2 that will get its field
    // values and store them in local variables
    b2.getBMI(height, weight, bmi);

    // display values in local variables to stdout
    cout << "B2 : " << b2 << endl;

    // call method on t1 that will test if it is equal to t2
    // and display its return to stdout as no or yes
     cout << "Are b1 and b2 equal ? " << (b1.equalBMI(b2) == 0 ? "no" : "yes")
         << endl;

}