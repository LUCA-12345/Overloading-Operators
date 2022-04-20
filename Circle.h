#ifndef LRTASCONE_LAB13A_CIRCLE_H
#define LRTASCONE_LAB13A_CIRCLE_H

class Circle
{
    private:
        double radius;
        constexpr const static auto pi = 3.14159;
    public:
        Circle();                   //Default Constructor sets radius to 0.0
        Circle(double rad);         //Constructor, accepts radius as an arguement

        void setRadius(double rad);          //Mutator
        double getRadius();                     //Accessor
        double getArea();                       //Accessor
        double getDiameter();                   //Accessor
        double getCircumferance();              //Accessor

        Circle operator++(int);                             // Postfix ++ Overload Funciton
        Circle operator--();                                // Postfix -- Overload Func. Decleration
        bool operator>(const Circle &);                     // Relational Overload Func. Decleration
        bool operator<(const Circle &);                     // Relational Overload Func. Decleration
        bool operator==(const Circle &);                    // Relational Overload Func. Decleration


};







#endif //LRTASCONE_LAB13A_CIRCLE_H
