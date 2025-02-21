#include <iostream>
using namespace std;

class Rectangle 
{
private:
    int length, width;

public:
    Rectangle() 
	{
        length = 0;
        width = 0;
        cout << "Default Constructor: Rectangle created with length = " << length 
             << " and width = " << width << endl;
    }

    
    Rectangle(int l, int w) 
	{
        length = l;
        width = w;
        cout << "Parameterized Constructor: Rectangle created with length = " << length 
             << " and width = " << width << endl;
    }

    
    ~Rectangle() 
	{
        cout << "Destructor called: Rectangle with length = " << length 
             << " and width = " << width << " is destroyed" << endl;
    }

  
    int area() {
        return length * width;
    }

    void display() {
        cout << "Rectangle [Length: " << length << ", Width: " << width 
             << ", Area: " << area() << "]" << endl;
    }
};

int main() {
    cout << "Creating objects...\n";

    Rectangle r1;       
    Rectangle r2(10, 5);  

    cout << "\nRectangle Details:\n";
    r1.display();
    r2.display();

    cout << "\nExiting main function...\n";
    return 0;
}

