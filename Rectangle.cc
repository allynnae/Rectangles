/**
 *   @file: Rectangle.cc
 * @author: Allison McKee
 *   @date: 09-07-2023
 *  @brief: Rectangles
 */

// The implementation file for the Rectangle class
#include "Rectangle.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

Rectangle::Rectangle(double l, double w){
	length = l;
	width = w;
	area = length * width;
}

// Member functions
// Addition
Rectangle Rectangle::operator + (const Rectangle& r2)const{
	Rectangle tmp;
    tmp.length = length + r2.length;
	tmp.width = width + r2.width;
	tmp.area = tmp.length * tmp.width;
	return tmp;
}

// Subtraction
Rectangle Rectangle::operator - (const Rectangle& r2)const{
	Rectangle tmp;
	if(length >= r2.length){
		tmp.length = length - r2.length;
	}
	else{
		tmp.length = 0;
	}

	if(width >= r2.width){
		tmp.width = width - r2.width;
	}
	else{
		tmp.width = 0;
	}
	tmp.area = tmp.length * tmp.width;
	return tmp;
}

// Division
Rectangle Rectangle::operator / (int num)const{
	Rectangle tmp;
	tmp.length = length / num;
	tmp.width = width / num;
	tmp.area = tmp.length * tmp.width;
	return tmp;
}

// Multiplication
Rectangle Rectangle::operator * (int num)const{
	Rectangle tmp;
	tmp.length = length * num;
	tmp.width = width * num;
	tmp.area = tmp.length * tmp.width;
	return tmp;
}

bool Rectangle::operator == (const Rectangle& r2)const{
	return length == r2.length && width == r2.width;
}

bool Rectangle::operator < (const Rectangle& r2)const{
	return area < r2.area;
}

bool Rectangle::operator > (const Rectangle& r2)const{
	return area > r2.area;
}

// Input
void Rectangle::input(istream&ins){
	cout << "       Enter the length: ";
	cin >> length;
	cout << "        Enter the width: ";
	cin >> width;
	area = length * width;
}

// Output
void Rectangle::output(ostream& outs)const{
	outs << "    Length: " << length << endl;
	outs << "     Width: " << width << endl;
	outs << "      Area: " << area;
}


ostream& operator << (ostream& outs, const Rectangle& r1){
    r1.output(outs); // Call the output member function
    return outs;
}

istream& operator >> (istream& ins, Rectangle& r1){

    r1.input(ins); // Call the input member function
    return ins;
}
