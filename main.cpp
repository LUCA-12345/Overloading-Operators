
#include <iostream>
#include "Circle.h"

using namespace std;
int main()
{

    Circle circle1;
    double tempRad1;

    Circle circle2;
    double tempRad2;


    for (int count = 0; count < 3; count++)
    {

        cout << "Enter radius for circle1: ";
        cin >> tempRad1;
        cout << endl;
        circle1.setRadius(tempRad1);

        cout << "Enter radius for circle2: ";
        cin >> tempRad2;
        cout << endl;
        circle2.setRadius(tempRad2);

        if (circle1 == circle2)
        {
            cout << "Circle1 is equal to Circle2" << endl;
        }

        if (circle1 > circle2)
        {
            cout << "Circle1 is bigger than Circle2" << endl;
            int counter = 0;
            while (circle1.getRadius() > circle2.getRadius())
            {
                --circle1;
                counter++;
            }

            cout << "Circle1's radius was decremented " << counter
                 << " times, now circle1 is smaller than circle2" << endl;
        }
        else
        {
            if (circle1 < circle2) {
                cout << "Circle1 is smaller than Circle2" << endl;
                int counter = 0;
                while (circle1.getRadius() < circle2.getRadius()) {
                    circle1++;
                    counter++;
                }


                cout << "Circle1's radius was incremented " << counter
                     << " times, now circle1 is bigger than circle2" << endl;

            }
        }
    }

    return 0;
}
