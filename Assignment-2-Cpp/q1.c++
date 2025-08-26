#include <iostream>
using namespace std;
class Shape
{
    int length, breadth, height;

public:
    Shape() : length(0), breadth(0), height(0) {}
    Shape(int length) : length(length), breadth(length), height(length) {}
    Shape(int length, int breadth, int height) : length(length), breadth(breadth), height(height) {}
    int volume()
    {
        return this->length * this->breadth * this->height;
    }
};

int main()
{
    int choice;
    cout << "1.Calculate Volume with default values\n2.Calculate volume with lenght,breadth,height same value\n3.Calculate volume with different length,breadth,height values\n";
    cin >> choice;
    do
    {
        if (choice == 1)
        {
            Shape s;
            cout << s.volume() << endl;
        }

        else if (choice == 2)
        {
            int length;
            cout << "Enter dimension :\n";
            cin >> length;
            Shape s(length);
            cout << s.volume() << endl;
        }
        else if (choice == 3)
        {
            int length, breadth, height;
            cout << "Enter length:\n";
            cin >> length;
            cout << "Enter breadth:\n";
            cin >> breadth;
            cout << "Enter height:\n";
            cin >> height;
            Shape s(length, breadth, height);
            cout << s.volume() << endl;
        }
        cout << "1.Calculate Volume with default values\n2.Calculate volume with lenght,breadth,height same value\n3.Calculate volume with different length,breadth,height values\n4.Exit\n";
        cin >> choice;
    } while (choice != 4);
    return 0;
}
