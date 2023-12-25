#include <iostream>

using namespace std;

int main()
{
    double length;
    double width;
    double height;
    double volume;

    cout << "Please Enter a Length for your box: ";
    cin >> length;

    cout << "\nPlease Enter a Width for your box: ";
    cin >> width;

    cout << "\nPlease Enter a Height for your box: ";
    cin >> height;


    volume = length * width * height;
    cout << "\n\nThe Volume of your box is: " << volume << endl;

    return 0;
}


#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    //variable declaration
    int number;

    //take input for number from user
    cout << "Enter number : ";
    cin >> number;

    //use of sqrt function to find square root
    cout << "square root of " << number << " is " << sqrt(number);

    cout << "\n\n";

    //use of cbrt function to find cube root
    cout << "cube root of " << number << " is " << cbrt(number);

    cout << "\n";

    return 0;
}#include<iostream>
using namespace std;

int main()
{
 float p,r,t,i;

 cout<<"Enter Principle : ";
 cin>>p;
 cout<<"Enter Rate : ";
 cin>>r;
 cout<<"Enter Time(in years) : ";
 cin>>t;

 //formula to calculate intrest
 i=(p*r*t)/100;
 cout<<"Simple interest is : "<<i;

 return 0;
}#include <stdio.h>
#include <math.h>
#include<iostream>

using namespace std;

int main()
{
    int num, tempnum;

    cout<<"Enter a number: ";
    cin>>num;

    tempnum = sqrt(num);

    if(tempnum*tempnum==num)
    {
       cout<<"YES,its perfect square of : "<<sqrt(num);
    }

    else
    {
        cout<<"NO,its not perfect square";
    }

    return 0;
}#include<iostream>

using namespace std;

int main()
{

    //variable declaration
    int num1, num2, gcd = 1;

    //take input from user
    cout << "Enter two numbers : ";
    cin >> num1;
    cin >> num2;

    //logic to calculate gcd and lcm
    for (int i = 1; i < 1000; ++i)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            gcd = i;
        }
    }

    //print calculated value of gcd and lcm

    cout << "\nGCD of two number is : " << gcd;
    cout << "\nLCM of two number is : " << (num1 * num2) / gcd;
}


#include <iostream>
#include <cmath>
using namespace std;

int main()
 {
    float a, b, c, x1, x2, determinant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    determinant = b*b - 4*a*c;

    if(a==0)
    {
      cout<<" 'a'can not be zero";
    }
    else
    {
        if (determinant > 0)
         {
            x1 = (-b + sqrt(determinant)) / (2*a);
            x2 = (-b - sqrt(determinant)) / (2*a);
            cout << "Roots are real and different." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
         }
        else if (determinant == 0)
         {
            cout << "Roots are real and same." << endl;
            x1 = (-b + sqrt(determinant)) / (2*a);
            cout << "x1 = x2 =" << x1 << endl;
         }
        else 
        {
            realPart = -b/(2*a);
            imaginaryPart =sqrt(-determinant)/(2*a);
            cout << "Roots are complex and different." << endl;
            cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
            cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
        }
    return 0;
    }
}#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int area;
    cout<<"enter area of circle : ";
    cin>>area;

    cout<<"\n";

    double radius=sqrt(area/3.14);

    cout<<"Radius of circle is : "<<radius;
}#include<iostream>

using namespace std;

int main()

{

    int width,height,area,perimeter;

    cout<<"Enter Width of Rectangle = ";

    cin>>width;

    cout<<"Enter Height of Rectangle = ";

    cin>>height;

    area=height*width;

    cout<<"Area of Rectangle = "<<area<<endl;

    perimeter=2*(height+width);

    cout<<"Perimeter of rectangle are = "<<perimeter<<endl;

    return 0;

}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;

    cout<<"Enter Hexadecimal Number : ";
    cin >> hex >> num;

    cout<<"Decimal number for given hexadecimal number is : ";
    cout << num << endl;

    return 0;
}


#include <iostream>

using namespace std;

 long gregorian_calendar_to_jd(int y, int m, int d)
    {

 y+=8000;
 if(m<3) { y--; m+=12; }
 return (y*365) +(y/4) -(y/100) +(y/400) -1200820
              +(m*153+3)/5-92
              +d-1;

    }

int main()
{
    
    int year = 2014;
    int month = 11;
    int day = 26;

    cout<<"Day in Julian Calendar is "<<gregorian_calendar_to_jd(year,month,day)<<"\n";
    return(0);
    
}#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    float meter, cmeter, kmeter;

    //user input
    cout << "\nEnter length in centimeters : ";
    cin >> cmeter;


    // Convert centimeter into meter and kilometer

    meter = cmeter / 100.0;
    kmeter = cmeter / 100000.0;

    //display converted values

    cout << "\nLength in Meter : ";
    cout << meter;

    cout << "\nLength in Kilometer : ";
    cout << kmeter;

    cout << endl;

    return 0;
}#include<iostream>
using namespace std;

int main()
{
    float fahrenheit, celsius;

    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "The temperature in Celsius : " << celsius << endl;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    return 0;
}#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 float PA,R,Time,CI;
 cout<<"Enter Principal amount : ";
 cin>>PA;
 cout<<"\n";
 cout<<"enter rate : ";
 cin>>R;
 cout<<"\n";
 cout<<"enter time(in year) : ";
 cin>>Time;

 //formula to calculate compound intrest
 CI=PA*pow((1+R/100),Time) - PA;
 cout<<"Compound Interest is : "<<CI;

    cout<<"\n";
 return 0;
}// to calculate the circumference and area of circle
#include <iostream>
using namespace std;

// define identifier PI with a constant
#define PI 3.14159
// define identifier TWO with a constant
#define TWO 2.0

int main(void)
{

float area, circumference, radius;

cout<<"\nEnter a radius of the circle in meter: ";
cin>>radius;
// circle area = PI*radius*radius
area = PI * radius * radius;

// circumference = 2*PI*radius
circumference = TWO * PI * radius;

// circle circumference
cout<<"\nCircumference = "<<circumference<<" meter";

// circle area
cout<<"\nCircle area = "<<area<<" square meter"<<endl;

return 0;

}#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()
{
    float weight;
    float height;
    float bmi;
    char response;

    do
    {
        cout<<"Please enter your weight (pounds): ";
        cin>>weight;
        cout<<"Please enter your height (inches): ";
        cin>>height;
        bmi = (weight / pow(height, 2)) * 703;
        cout<<"\n";
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Your BMI is "<<bmi<<endl;

        if (bmi < 18.5)
        {
            cout<<"You are underweight!"<<endl;
            cout<<"Eat more!!"<<endl;
        }
        else if (bmi >= 18.5 && bmi < 25)
        {
            cout<<"You are normal!"<<endl;
        }
        else if (bmi >= 25)
        {
            cout<<"You are overweight!"<<endl;
        }
        else
        {
            cin.get();
        }

        cin.get();
        cout<<endl;

        cout<<"Would you like to enter the information again? ";
        cin>>response;
    }
    while (toupper(response) == 'Y');
    cout<<"Okay, see you next time.."<<endl;

    return 0;
}#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float base,height;
    float area;

    cout<<"Enter base of Triangle : ";
    cin>>base;

    cout <<"Enter height of Triangle : ";
    cin>>height;

    area = 0.5 * (base * height);
    cout<<"Area of Triangle :"<<area;
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    float r,a;

    cout<<"Enter Radius : ";
    cin>>r;

    a=3.14*r*r;

    cout<<"Area of Circle : "<<a;

    return 0;
}


#include <iostream>

using namespace std;
 
class Mathematics 
{
  int a, b;
 
 public:
 void input() 
 {
  cout << "Input a:\n";
  cin >> a;
  cout << "Input b:\n\n";
  cin >> b;
 }
 
 void add() 
 {
  cout << "(a+b)^2 = " << ((a*a)+(2*a*b)+(b*b));
 }
 };
 
int main()
{
   Mathematics m; // Creating object of class
 
   m.input();
   m.add();
 
   return 0;
}


#include <iostream>

using namespace std;

class Mathematics
{
  int a, b;

 public:
 void input()
 {
  cout << "Input a:\n";
  cin >> a;
  cout << "Input b:\n\n";
  cin >> b;
 }

 void add()
 {
  cout << "(a-b)^2 = " << ((a*a)-(2*a*b)+(b*b));
 }
 };

int main()
{
   Mathematics m; // Creating object of class

   m.input();
   m.add();

   return 0;
}