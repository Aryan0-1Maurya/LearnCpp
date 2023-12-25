#include <iostream>

 using namespace std;

 
int
main () 
{
  
int var;
  
char var_array[10];
  
 
cout << "Address of variable1 is : ";
  
cout << &var << "\n";
  
 
cout << "Address of variable2 is : ";
  
cout << &var_array << "\n";
  
 
return 0;

}

#include <iostream>

using namespace std;

 
int
main () 
{
  
    //variable declaration
  char asciichar;
  
 
    //take user input
    cout << "Enter a character : ";
  
cin >> asciichar;
  
 
    //display ascii value of character
    cout << "\nIt's ascii value is : " << (int) asciichar << endl;
  
 
return 0;

}

#include <iostream>

using namespace std;

 
int
main () 
{
  
int num;
  
num = 50;
  
 
cout << "number is=" << num << endl;
  
    //endl is manipulator
    //endl is output manipulator
    cout << "value of number=" << num << "\n";

}

#include<iostream>

using namespace std;

 
int
main () 
{
  
int num;
  
cout << "Enter any non-zero Number : ";
  
cin >> num;
  
if (num > 0)
    
    {
      
cout << "Number is positive";
    
}
  
  else
    
    {
      
cout << "Number is negative";
    
}
  
 
return 0;

}

#include<iostream>

using namespace std;

 
int
main () 
{
  
    // Local variable declaration:
  int num = 10;
  
 
    // do loop execution
    do
    
    {
      
cout << "value of number: " << num << endl;
      
num = num + 1;
      
if (num > 15)
	
	{
	  
	    // terminate the loop
	    break;
	
}
    
}
  while (num < 20);
  
 
return 0;

}

#include<iostream>

using namespace std;

 
int
main () 
{
  
    //variable declaration
  int num1, num2, result;
  
 
    //take user input
    cout << "Enter first Number : ";
  
cin >> num1;
  
 
cout << "\nEnter second Number : ";
  
cin >> num2;
  
 
    //to add two number
    result = num1 + num2;
  
 
    //display addition
    cout << "\nAddition is : " << result;
  
 
return 0;

}
