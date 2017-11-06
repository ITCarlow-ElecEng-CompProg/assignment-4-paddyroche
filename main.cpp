/**<
Patrick Roche
Exercise 4
Electrical resistance of wire
 */

 /**< Preprocessor Directives */
#include <iostream>
#include <math.h>
#define pi 3.14

double resistance(double radius,double length,double rho,double area);
int main();

using namespace std;

/**< Main Fucntion */
int main()
{
    /**< Variable Declerations */
    double r,l,p,res,a;

    /**< Entering values */
    cout << "enter values for r,l and p" << endl;
    cin >> r;
    cin >> l;
    cin >> p;

    /**< Making sure that a warning message appears when a value of 0 or less is entered */
    while(r<=0 || r<=0 || p<=0)
    {
        cout << "enter values for r,l and p>0" << endl;
        cin >> r;
        cin >> l;
        cin >> p;
    }

    /**< Formula to calculate the area */
    a = pi*r*r;

    /**< Calling the function */
    res = resistance(r,l,p,a);

    /**< Presenting the result */
    cout << " Resistance of the wire: " << res;

    return 0;
}
/**< Resistance function */
double resistance(double radius,double length,double rho,double area)
{
    /**< Variable deceration */
    double resistance;

    /**< Formula to calculate the resistance */
    resistance = rho*(length/area);

    return resistance ;
}
