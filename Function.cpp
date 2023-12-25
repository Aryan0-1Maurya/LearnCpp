#include <iostream>
#include <string>

using namespace std;

template<typename T>
inline T const &Max(T const &val1, T const &val2)
{
    return val1 < val2 ? val2 : val1;
}

int main()
{

    int num1 = 9;
    int num2 = 210;
    cout << "Max(num1, num2): " << Max(num1, num2) << endl;

    double dbl1 = 1.5;
    double dbl2 = 210.87;
    cout << "Max(dbl1, dbl2): " << Max(dbl1, dbl2) << endl;

    string str1 = "Hey";
    string str2 = "maximum here";
    cout << "Max(str1, str2): " << Max(str1, str2) << endl;

    return 0;
}


#include <iostream>

using namespace std;

//class declaration
class staticDemo
{

private:
    //static variable declaration
    static int sum;
    //normal variable declaration
    int x;

public:
    //Constructor of the class
    staticDemo()
    {
        sum = sum + 1;
        x = sum;
    }

    //Static function staticFunction( ) defined with keyword static
    static void staticFunction()
    {
        cout << "\nResult is : " << sum;
    }

    //Normal member function normalFunctionNumber()
    void normalFunctionNumber()
    {
        cout << "\nNumber is : " << x;
    }
};


int staticDemo::sum = 0;

//declaration of main method
int main()
{
    cout << "This is how static method and variable work : \n";
    //creation of object
    staticDemo stat;

    //Static function staticFunction() accessed using class name staticDemo and the scope resolution operator ::
    staticDemo::staticFunction();

    //
    staticDemo stat1, stat2, stat3;
    staticDemo::staticFunction();
    stat.normalFunctionNumber();

    //Normal member function accessed using object stat and the dot member access operator.
    stat1.normalFunctionNumber();
    stat2.normalFunctionNumber();
    stat3.normalFunctionNumber();

    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int size, i, j;
    cout << "Enter the number of characters:";
    cin >> size;

    char chars[size];
    cout << "Enter " << size << " characters:";
    for (i = 0; i < size; i++)
    {
        cin >> chars[i];
    }

    char temp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (chars[j + 1] < chars[j])
            {
                temp = chars[j];
                chars[j] = chars[j + 1];
                chars[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << chars[i] << " ";
    }

    return 0;
}#include<stdio.h>
#include<iostream>

using namespace std;

//Function prototyping
int add(int, int);

int main()
{
    int num1, num2, output;

    cout << "enter two numbers : ";
    cin >> num1;
    cin >> num2;

    /*
        Pass the value of num1 and num2 as parameter to function add.
        The value returned is stored in the variable output
    */

    output = add(num1, num2);
    cout << "addition of number " << num1 << " and " << num2 << " = " << output;

}

// Defining the function add()
int add(int no1, int no2)
{
    int result;
    result = no1 + no2;
    return result;
}


#include <iostream>

using namespace std;

inline int add(int num1, int num2)
{
    return num1 + num2;
}

inline int sub(int num1, int num2)
{
    return num1 - num2;
}

inline int mult(int num1, int num2)
{
    return num1 * num2;
}

inline int div(int num1, int num2)
{
    return num1 / num2;
}

// Main function for the program
int main()
{
    cout << "add (20,10) : " << add(20, 10) << "\n";
    cout << "sub (1220,200) : " << sub(1220, 200) << "\n";
    cout << "multiply (100,1010) : " << mult(100, 1010) << "\n";
    cout << "division (20,10) : " << div(20, 10) << "\n";
    return 0;
}#include<iostream>

using namespace std;

int main()
{
    string name;

    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!\n";

    return 0;
}


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "hey hello\n";
    cout << "you have many letters to read in letter box\n";
    //flush clears the output buffer
    cout.flush();

    return 0;
}#include<stdio.h>
#include<iostream>

using namespace std;

int add(int *, int *);

int main()
{
    int num1 = 0, num2 = 0, output;

    cout << "enter two numbers : ";
    cin >> num1;
    cin >> num2;

    output = add(&num1, &num2);

    cout << "addition of two numbers = " << num1 << " + " << num2 << " = " << output;

}

// Defining the function add()
int add(int *n1, int *n2)
{
    int result;
    result = *n1 + *n2;
    return result;
    
    return 0;
}


#include <iostream>

using namespace std;

inline int add(int num1, int num2)
{
    return num1 + num2;
}

inline int sub(int num1, int num2)
{
    return num1 - num2;
}

inline int mult(int num1, int num2)
{
    return num1 * num2;
}

inline int div(int num1, int num2)
{
    return num1 / num2;
}

// Main function for the program
int main()
{

    cout << "add (20,10) : " << add(20, 10) << "\n";
    cout << "sub (1220,200) : " << sub(1220, 200) << "\n";
    cout << "multiply (100,1010) : " << mult(100, 1010) << "\n";
    cout << "division (20,10) : " << div(20, 10) << "\n";
    return 0;
}