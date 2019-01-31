#include <iostream>
using namespace std;

class Circle
{
    double m_radius;

public:
    //Constructor - smiður
    Circle()
    {
       m_radius = 0.0;
    }
    Circle(double r)
    {
       m_radius = r;
    }

    double area()
    {
        return 0.0;
    }
};


void circleInfo(Circle& circle)
 {
    cout << "Area: " << circle.area() << endl;
    cout << "Perimeter: " << circle.perimeter() << endl;
}


int main()
{
    Circle circle1;

    double radius;

    cout << circle1._m_radius << endl;


    cout << "Radius of circle: ";
    cin >> radius;


    Circle circle2(radius);
    circleInfo(circle2);
    circle.setRadius(circle2.getRadius() + 1.0);
    circleInfo(circle2);


    return 0;
}
