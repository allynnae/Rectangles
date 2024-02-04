/**
 *   @file: main.cc
 * @author: Allison McKee
 *   @date: 09-07-2023
 *  @brief: Rectangles
 */

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(){
    Rectangle r1, r2;
    int scalar;

    // Gather data
    cout << "Enter data for the first rectangle:" << endl;
    cin >> r1;
    cout << "-------------------------------------------" << endl;
    cout << "Enter data for the second rectangle:" << endl;
    cin >> r2;
    cout << "-------------------------------------------" << endl;
    cout << "Enter an integer scalar: ";
    cin >> scalar;

    // Calculate sum and print results
    Rectangle sum = r1 + r2;
    cout << "-------------------------------------------" << endl;
    cout << "Sum of rectangles:" << endl << sum << endl;

    // Calculate difference and print results
    Rectangle difference = r1 - r2;
    cout << "-------------------------------------------" << endl;
    cout << "Difference of rectangles:" << endl << difference << endl;
    
    // Calculate product and print results
    Rectangle product1 = r1 * scalar;
    cout << "-------------------------------------------" << endl;
    cout << "Product of the first rectangle by scalar:" << endl << product1 << endl;

    Rectangle product2 = r2 * scalar;
    cout << "-------------------------------------------" << endl;
    cout << "Product of the second rectangle by scalar:" << endl << product2 << endl;

    // Calculate quotient and print results
    Rectangle quotient1 = r1 / scalar;
    cout << "-------------------------------------------" << endl;
    cout << "Quotient of the first rectangle by scalar:" << endl << quotient1 << endl;

    Rectangle quotient2 = r2 / scalar;
    cout << "-------------------------------------------" << endl;
    cout << "Quotient of the second rectangle by scalar:" << endl << quotient2 << endl;


    return 1;
}