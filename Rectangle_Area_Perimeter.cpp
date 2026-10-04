#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    void accept()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void area()
    {
        cout << "Area = " << length * breadth << endl;
    }

    void perimeter()
    {
        cout << "Perimeter = " << 2 * (length + breadth) << endl;
    }
};

int main()
{
    Rectangle r;

    r.accept();
    r.area();
    r.perimeter();

    return 0;
}