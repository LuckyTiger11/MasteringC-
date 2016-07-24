// Chapter_4 : Series of exercises on chapter 4 of the book Practical C++ Programming. 
// Description:
//   4.1 Write a progam to print your name, SS# and DOB.
//   4.2 Write a program to print a block E using asterisks (*), where the E is 7 characters high and 5 characters wide.
//   4.3 Write a program to compute the area and cicumference of a rectangle 3 inches wide by 5 inches long. What Changes must be 
//       made to the program so it works for a rectangle 6.8 inches wide by 2.4 inches long?
//   4.4 Write a program to print "HELLO" in big block letters where each letter is 7 characters high and 5 characters wide.
//
// Note:
//  Exercise 4.2 was combined in exercise 4 because of the nature of both.     
//  Also note I decided to create classes instead of seperate programs because it is more compact and I got to practice creating and 
//  intantiating classes.
//
// Questions:
//  How can I call a class that is in a different source file to the main function? 

// use "using namespace blabla" sparingly - in general it is better to type out
// the whole namespace to avoid ambiguity, and make the source clear.

#include <iostream>
using namespace std;

// Called Ex42 for the exercise problem numbered 4.2 in the book. Holds functions that return a letter block (So far Hello)
class Ex42 {

    public:
        string Letter_H()
        {
            return "*   *\n*   *\n*   *\n*****\n*   *\n*   *\n*   *\n";
        }

        string Letter_E()
        {
            return "*****\n*\n*\n*****\n*\n*\n*****\n";
        }

        string Letter_L()
        {
            return "*\n*\n*\n*\n*\n*\n*****\n";
        }

        string Letter_O()
        {
            return " *** \n*   *\n*   *\n*   *\n*   *\n*   *\n *** \n\n";
        }

};

// Class for exercise 4.3 in the book. Functions calculate the area and circumference of a rectangle. 
class Ex43 {

public:
    int rec_area(int a_height, int a_width) // first parameter holds the height of the rectangle, second holds width and returns area.
    {
        return a_height * a_width;
    }

    int rec_circum(int c_height, int c_width) // first parameter holds the height of the rectangle, second holds width  and returns circumference.
    {
        return 2 * (c_height + c_width);
    }

    //If i were to chose the values 6.8 and 2.3 I'd probably change the function type to "float" since these are decimal numbers. 

};


int main(int argc, char* argv[])
{
    // instantiation of classes in main function
    Ex42 letter_print;
    Ex43 rectangle;

    cout << "\tInfo(4.1)\n\n" << "Name: Daniel\n" << "SSN: 9999 \n" << "DOB = 05/11/1990 \n" << endl; //excersise 4.1 of the book. Print name, ssn and dob. 

    cout << "\tRectangle excersise!(4.3)\n\n" << "Area: " << rectangle.rec_area(3, 5) << "\nCircumference: " << rectangle.rec_circum(3, 5) << endl; //prints out calculated area and circumference of rectangle. 

    cout << "\n\tHELLO in BLOCKS (4.2 & 4.4)\n\n" << letter_print.Letter_H() << '\n' << letter_print.Letter_E() << '\n' << letter_print.Letter_L() << '\n' << letter_print.Letter_L() << '\n' << letter_print.Letter_O(); //prints Letter blocks to spell hello. 

    return 0;
}

