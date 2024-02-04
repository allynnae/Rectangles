/**
 *   @file: Rectangle.h
 * @author: Allison McKee
 *   @date: 09-07-2023
 *  @brief: Rectangles
 */

// Add documentation for the file and each function

#include <iostream>
    
class Rectangle
{   
  public:

    Rectangle(double l = 0.0, double w = 0.0);   

    // Member functions
    void input(std::istream& ins);            
    void output(std::ostream& outs)const;

    double get_length()const {return length;}
    double get_width()const {return width;}
    double get_area()const {return area;}

    // Operators
    Rectangle operator + (const Rectangle& r2)const;

    Rectangle operator - (const Rectangle& r2)const;
 
    Rectangle operator * (int num)const;

    Rectangle operator / (int num)const;

    bool operator == (const Rectangle& r2)const;

    bool operator < (const Rectangle& r2)const;

    bool operator > (const Rectangle& r2)const;
   
  private:
      double length;  // should not be able to go < 0
      double width;   // should not be able to go < 0
      double area;
};

std::istream& operator >> (std::istream& fin, Rectangle& r);
std::ostream& operator << (std::ostream& fout, const Rectangle& r);