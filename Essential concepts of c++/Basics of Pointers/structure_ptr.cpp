#include <iostream>
using namepsace std;

// Define the Rectangle structure
struct Rectangle 
{
    int length;
    int breadth;
};

int main() 
{
    // Creating a pointer to structure variable
    Rectangle r1;
    r1.length = 5;
    r1.breadth = 10;

    Rectangle *ptr_Rect = &r1;

    cout << "Using pointer:" << endl;
    cout << "Length: " << ptr_Rect->length << endl;
    cout << "Breadth: " << ptr_Rect->breadth << endl;

    // Using dynamic memory allocation
    Rectangle *ptr_dy = new Rectangle;
    ptr_dy->length = 7;
    ptr_dy->breadth = 12;

   
    cout << "\nUsing dynamic memory allocation:" << endl;
    cout << "Length: " << ptr_dy->length << endl;
    cout << "Breadth: " << ptr_dy->breadth << endl;

    return 0;
}
