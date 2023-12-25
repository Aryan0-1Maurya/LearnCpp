#include<iostream>

using namespace std;

class Sample
{
   private:
       int x,y;
   public:
       void setdata(int a,int b)
       {
          x=a;
          y=b;
       }
       void showdata()
       {
          cout<<"x="<<x<<"\ny="<<y;
       }

    friend void swap(Sample &s);
};

void swap(Sample &s)
{
    int temp;
    temp=s.x;
    s.x=s.y;
    s.y=temp;
}

int main()
{
    Sample s;
    int x,y;

    cout<<"Enter x = ";
    cin>>x;
    cout<<"Enter y = ";
    cin>>y;

    s.setdata(x,y);

    cout<<"\nBefore Swapping\n";
    s.showdata();
    cout<<"\nAfter Swapping\n";
    swap(s);
    s.showdata();

    return 0;
}



#include<iostream>

using namespace std;

int main()

{

int var1, var2, swap;

 cout<<"Enter value for first integer: ";

 cin>>var1;

 cout<<"Enter value for second integer: ";

 cin>>var2;

 cout<<"\nValues Before swapping: \n"<<endl;

 cout<<"First Integer ="<<var1<<endl;

 cout<<"Second Interger ="<<var2<<endl;

              swap=var1;

              var1=var2;

              var2=swap;

 cout<<"\nValues After swapping: \n"<<endl;

 cout<<"First Integer ="<<var1<<endl;

 cout<<"Second Interger ="<<var2<<endl;

 return 0;

}



#include<iostream>
using namespace std;

int main()
{
    int times, Inp, sum,i;

    times=Inp=sum=i=0;

    cout << "Input the number of integers you want to square and add : ";
    cin >> times;

    for (i=times; i>0; i--)
    {
        cout<<"Enter a number:";
        cin>>Inp;
        sum=sum+(Inp*Inp);
    }

    cout<<"The sum of squares of " << times << " numbers is "<< sum;
    cout<< "." << endl;

    return 0;
}



#include<iostream>
using namespace std;

int main()
{
    int times, Inp, sum,i;

    times=Inp=sum=i=0;

    cout << "Input the number of integers you want to add:";
    cin >> times;

    for (i=times; i>0; i--)
    {
        cout << "Enter a number:";
        cin >> Inp;
        sum=sum+Inp;
    }

    cout<<"The sum of your " << times << " numbers is "<< sum;
    cout<< "." << endl;

    return 0;
}#include <iostream>
using namespace std;

int main()
{
int number, reverse = 0;

cout<<"Input a Number to Reverse and press Enter: ";
// Taking Input Number in variable number
cin>> number;

   while(number!= 0)
   {
      reverse = reverse * 10;
      reverse = reverse + number%10;
      number = number/10;
   }
   cout<<"New Reversed Number is: "<<reverse;
   return 0;
}



#include<iostream>
 
using namespace std;
int main()
{
    int a = 33, b = 5;
    cout << "Quotient = " << a / b << endl;
    cout << "Remainder = "<< a % b << endl;
    return 0;
}



#include<iostream>
    using namespace std;
    int main()
    {
       int range, first = 0, second = 1, fibonicci=0;
       cout << "Enter Range for Terms of Fibonacci Sequence: ";
       cin >> range;
       cout << "Fibonicci Series upto " << range << " Terms "<< endl;
       for ( int c = 0 ; c < range ; c++ )
       {
          if ( c <= 1 )
             fibonicci = c;
          else
          {
             fibonicci = first + second;
             first = second;
             second = fibonicci;
          }
          cout << fibonicci <<" ";
       }
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
           cout<<"YES,its perfect square";
        }

        else
        {
            cout<<"NO,its not perfect square";
        }


        return 0;
    }
    
    
    
    #include<iostream>
#include<conio.h>

using namespace std;

int main() //Start of main
{

   int i=1, u=1, sum=0;
   while(i<=500)
 { // start of first loop.

   while(u<=500)
   { //start of second loop.
     if(u<i)
     {
      if(i%u==0 )
      sum=sum+u;
     } //End of if statement

     u++;
   } //End of second loop

   if(sum==i)
   {
    cout<<i<<" is a perfect number."<<"\n";
   }

   i++;
   u=1; sum=0;
 } //End of First loop
   getch();
 }
 
 
 
 #include<iostream>

using namespace std;

int main()
{
    int i,temp,d,revrs=0;

    cout<<"Enter the number : ";
        cin>>i;
    temp=i;
    while(temp>0)
    {
        d=temp%10;
        temp/=10;
        revrs=revrs*10+d;

    }
    if(revrs==i)
        cout<<i<<" is Palindrome";
    else
        cout<<i<<" is not Palindrome";

}



#include<iostream>

int main(void)
{
    int n,d,a,sum = 0; // Initializing the variable

    std:: cout << "Enter the number : ";
    std:: cin >> n;

    a = n;

    while(a > 0) // Finding the sum of digit
    {
        d = a % 10;
        sum = sum + d;
        a = a / 10;
    }

    if(n % sum == 0) //Checking if the remainder is zero or not
        std:: cout << "\nThe number is Niven Number ";
    else
        std:: cout << "\nThe number is not a Niven Number ";

    return 0;
}#include <stdio.h>
#include<iostream>
using namespace std;

void magicsquare(int, int [][10]);

//
int main( )
{
    int size;
    int num[10][10];

   cout<<"enter size but number should be odd number : ";
    cin>>size;

        if (size % 2 == 0)
            {
                cout<<"Magic square works for an odd numbered size\n";
            }
        else
            {
                magicsquare(size, num);
            }
    return 0;
}

//magicsquare method declaration
void magicsquare(int size, int a[][10])
{
    int sqr = size * size;
    int i = 0, j = size / 2, k;

    for (k = 1; k <= sqr; ++k)
    {
        a[i][j] = k;
        i--;
        j++;

        if (k % size == 0)
            {
                i += 2;
                --j;
            }
        else
            {
                if (j == size)
                {
                    j -= size;
                }
                else if (i < 0)
                {
                    i += size;
                }
            }
    }

    for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                cout<<a[i][j]<<" ";

            }
            cout<<"\n";
        }
        cout<<"\n";
}



#include<iostream>
using namespace std;

int main()
{

    //declaration of variables
    int num1, num2, num3;
    int smallest, largest;

    //take input from user
    cout << "Please enter 3 numbers : "<<"" ;
    cin >> num1 >> num2 >> num3;

    //assign initial value for comparison
    smallest = num1;
    largest = num1;

    if (num2 > largest)
        {
           largest = num2;
        }

    if (num3 > largest)
        {
            largest = num3;
        }

    if (num2 < smallest)
        {
            smallest = num2;
        }

    if (num3 < smallest)
        {
            smallest = num3;
        }

        //display largest number and smallest number
    cout << "largest: " << largest << "\nsmallest: " << smallest << "\n";
}



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //variable declaration
 int Number,j,m,d,c,l,x,ix,v,iv,i;

 //take user input
 cout << " Enter an Integer Number : ";
 cin >> Number;

 if (Number <= 0)
 {
  cout << " Invalid number." << endl;
  cout << " Press enter to continue..." << endl;
  cin.ignore();
  cin.get();
  return 0;
 }

 m = Number / 1000;
 Number = Number % 1000;

 d = Number / 500;
 Number = Number % 500;

 c = Number / 100;
 Number = Number % 100;

 l = Number / 50;
 Number = Number % 50;

 x = Number / 10;
 Number = Number % 10;

 ix = Number / 9;
 Number = Number % 9;

 v = Number / 5;
 Number = Number % 5;

 iv = Number / 4;
 Number = Number % 4;

 i = Number;

 cout << " Roman Numeral = ";
 for (j = 1; j <= m; j++)
  cout << "M";

 for (j = 1; j <= d; j++)
  cout << "D";

 for (j = 1; j <= c; j++)
  cout << "C";

 for (j = 1; j <= l; j++)
  cout << "L";

 for (j = 1; j <= x; j++)
  cout << "X";

 for (j = 1; j <= ix; j++)
  cout << "IX";

 for (j = 1; j <= v; j++)
  cout << "V";

 for (j = 1; j <= iv; j++)
  cout << "IV";

 for (j = 1; j <= i; j++)
  cout << "I";

 cout << endl;

 cout << " Press enter to continue..." << endl;
 cin.ignore();
 cin.get();
 return 0;
}



#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    cout<<" Enter value for first number ";
    cin>>num1;

    cout<<" Enter value for second number ";
    cin>>num2;

    cout<<" Enter value for third number ";
    cin>>num3;
    if(num1>num2&&num1>num3)
      {
          cout<<" First number is greatest:"<<endl<<"which is= "<<num1;
      }
    else if(num2>num1&&num2>num3)
      {
          cout<<" Second number is greatest"<<endl<<"which is= "<<num2;
      }
    else
    {
        cout<<" Third number is greatest"<<endl<<"whick is= "<<num3;
    }
return 0;
}



#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{

int min,max,i,range,r,x;
unsigned first = time(NULL);

cout<<"FIRST = " << first <<endl;
srand(first);
cout<<"ENTER THE MINIMUM NUMBER :";
cin>>min;
cout<<"ENTER THE MAXIMUM NUMBER :";
cin>>max;
cout<<"ENTER THE NO.OF TERMS YOU WANT :";
cin>>x;

range=max-min+1;

for(i=0;i<x;i++)
 {
 r=rand()/100%range+min;
 cout<<r<<" ";
 }

getch();

}



#include<iostream>

using namespace std;

int main()
{
    int num,i,j,flag,res = 1;
    cout<<"Enter number : ";
    cin>>num;

    for(i=2;i<=num;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            res *= i;
        }
    }
    cout<<num<<"# = "<<res;
    return 0;
}



#include<iostream>
using namespace std;

int main()
{
    int startNum,endNum;
    int found=0,count=0,i,j;

    bool b[1000];

    cout<<"Enter number START of range : ";
    cin>>startNum;
    cout<<"Enter number END of range : ";
    cin>>endNum;

    for(i=2;i<endNum;i++)
    {
            b[i]=true;
    }

    cout<<"Prime number from "<<startNum<<" to "<<endNum<<" : "<<endl;

    for(i=startNum;i<endNum;i++)
    {
        if(b[i])
        {
            cout<<i<<" ";
            for(j=i*2;j<endNum;j+=i)
            {
                b[j]=false;
            }
        }
    }

    return 0;
}#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer : ";
    cin>>n;
    if(n % 2 == 0)
    {
        cout<<n<<" is even.";
    }
    else
    {
        cout << n << " is odd.";
    }
    return 0;
}# include <iostream>
# include <math.h>

using namespace std;

void primeFactors(int n)
{
    while (n%2 == 0)
    {
        cout<<"2 ";
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            cout<<i<<" ";
            n = n/i;
        }
    }

    if (n > 2)
    {
        cout<<n;
    }
}

int main()
{
    int n;
    cout<<"Enter number to find all prime factor : ";
    cin>>n;
    cout<<"Prime factors are : ";
    primeFactors(n);
    return 0;
}



#include<iostream>

using namespace std;

int main()

{

    int num,factorial=1;

    cout<<"Enter Number To Find Its Factorial: ";

    cin>>num;

    for(int a=1;a<=num;a++)

    {

        factorial=factorial*a;

    }
    
    cout<<"Factorial of Given Number is = "<<factorial<<endl;

    return 0;

}//program to convert decimal to octal or vise versa
#include <iostream>
#include <cmath>
using namespace std;

//method declaration
int decimal_octal(int n);
int octal_decimal(int n);

int main()
{
    //variable declaration
    int n;
    char c;

    //take user input
    cout << "Enter your choice : " << endl;
    cout << "1. Enter alphabet 'o' to convert decimal to octal." << endl;
    cout << "2. Enter alphabet 'd' to convert octal to decimal." << endl;
    cin >> c;
    if (c =='d' || c == 'D')
    {
        cout << "Enter a octal number : ";
        cin >> n;
        cout << n << " in octal : " << octal_decimal(n) << " in decimal";
    }

    if (c =='o' || c == 'O')
    {
        cout << "Enter a decimal number : ";
        cin >> n;
        cout << n << " in decimal : " << decimal_octal(n) << " in octal";
    }

    return 0;
}

/* Function to convert decimal to octal */
int decimal_octal(int n)
{
    int rem, i=1, octal=0;
    while (n!=0)
    {
        rem=n%8;
        n/=8;
        octal+=rem*i;
        i*=10;
    }

    return octal;
}

/* Function to convert octal to decimal */
int octal_decimal(int n)
{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(8,i);
        ++i;
    }
    return decimal;
}



#include<iostream>
using namespace std;

void binary(int num)
{
    int rem;

    if (num <= 1)
    {
        cout << num;
        return;
    }
    rem = num % 2;
    binary(num / 2);
    cout << rem;
}

int main()
{
    int dec, bin;
    cout << "Enter the number : ";
    cin >> dec;

    if (dec < 0)
        cout << dec << " is not a positive integer." << endl;
    else
    {
        cout << "The binary form of " << dec << " is ";
        binary(dec);
        cout << endl;
    }
    return 0;
}#include <iostream>

using namespace std;

int main()
{
  int n,count=0;
  cout<<"Enter an integer: ";
  cin>>n;

  while(n!=0)
  {
      n/=10;
      ++count;
  }
  cout<<"Number of digits : "<<count;
}



#include<iostream>
using namespace std;
void convetTo(int);
int main()
{
    int num;
     cout<<"Enter a number : ";
    cin>>num;
 cout<<endl;
    convetTo(num);
}

void convetTo(int value)
{
    const char * const ones[20] = {"zero", "one", "two", "three","four","five","six","seven",
     "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
     "eighteen","nineteen"};
     
 const char * const tens[10] = {"", "ten", "twenty", "thirty","forty","fifty","sixty","seventy",
     "eighty","ninety"};

    if(value<0)
     {
  cout<<"minus ";
         convetTo(-value);
 }
   
 else if(value>=1000)
  {
         convetTo(value/1000);
         cout<<" thousand";

         if(value % 1000)
         {
              if(value % 1000 < 100)
              {
                  cout << " and";
              }
              cout << " " ;
              convetTo(value % 1000);
         }
     }
    
 else if(value >= 100)
     {
         convetTo(value / 100);
         cout<<" hundred";

         if(value % 100)
         {
              cout << " and ";
              convetTo (value % 100);
         }
     }
    
 else if(value >= 20)
     {
         cout << tens[value / 10];
         if(value % 10)
         {
              cout << " ";
              convetTo(value % 10);
         }
     }
    
 else
     {
         cout<<ones[value];
     }
    
 return;
}



#include<iostream>
using namespace std;

int check(int a,int b)
{
    int s=0,i;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }

    if(s==b)
    {
        s=0;
        for(i=1;i<b;i++)
        {
            if(b%i==0)
            {
                s=s+i;
            }
        }

        if(s==a)
            return 1;
        else
            return 0;
    }

    return 0;
}

int main()
{
    int a,b;

    cout<<"Enter 1st no. : ";
    cin>>a;
    cout<<"Enter 2nd no. : ";
    cin>>b;

    if(check(a,b))
    {
        cout<<a<<" and "<<b<<" are Amicable Number";
    }
    else
    {
        cout<<a<<" and "<<b<<" are not Amicable Number";
    }
}



#include<iostream>
using namespace std;
int main()
{
    int number,count=0;
    cout<<"Enter number to check its Prime or Not : ";
    cin>>number;

    for(int a=1;a<=number;a++)
        if(number%a==0)
            count++;

    if(count==2)
        cout<<"Its Prime Number \n";
    else
        cout<<"Its not a Prime Number\n";

    return 0;
}



#include<iostream>
using namespace std;

int main()
{
    long bin, dec = 0, rem, num, base = 1;

    cout << "Enter the binary number(1s and 0s) : ";
    cin >> num;
    bin = num;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
    cout << "The decimal equivalent of " << bin << " : " << dec << endl;
    return 0;
}#include <iostream>

using namespace std;

void recurse (float sum, int i ) // Each call gets its own count
{
    int num = 0;

    cout<<"Enter another positive integer: ";
    cin>>num;

    if(num < 0){

        cout<<"ERROR\n";
        recurse (sum, i ); //First function call, so it starts at one

    }
     else if(num == 0){

        if(sum == 0){
            cout<<"NO AVERAGE";
        }
        else {
            cout<<"\nThe Average of Positive Integers is "<<(sum/i)<<"\n";
        }

    }
    else {

        sum = sum + num;
        i++;
        recurse (sum, i );
    }
}

int main()
{

    float num;
    float sum = 0;
    int i = 0;

    cout<<"Enter a positive integer: ";
    cin>>num;

    if(num < 0){

        cout<<"ERROR\n";
        recurse (sum, i ); //First function call, so it starts at one

    }
    else if(num == 0){

        cout<<"NO AVERAGE";

    }
    else {

        sum = sum + num;
        i++;
        recurse (sum, i );
    }


  return(0);
}



#include<iostream>
using namespace std;

int main()
{
    int n;
    double average(0);
    cout<<"Enter the number of values : ";
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int value;
        cin >> value;
        average += value;
    }
    average /= n;
    cout<<"Average is "<<average;
    return 0;
}#include <iostream>
using namespace std;
int main()
{
 int n, n1, rem, num=0;
	
 cout<<"Enter a positive integer: ";
 cin>>n;
 n1 = n;
	
 while(n1!=0)
 {
  rem=n1%10;
  num+=rem*rem*rem;
  n1/=10;
 }
	
 if(num==n)
 {
  cout << n << " is an Armstrong number.";
 }
 else
 {
  cout << n << " is not an Armstrong number.";
 }
	
 return 0;
}



#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
struct complex
{
 float rel;
 float img;
}s1,s2;

int main()
{

 float a,b;
 cout<<"Enter real and imaginary part of 1st complex number:";
 cin>>s1.rel>>s1.img;
 cout<<"Enter real and imaginary part of 2nd complex number:";
 cin>>s2.rel>>s2.img;

  //Addition
 a=(s1.rel)+(s2.rel);
 b=(s1.img)+(s2.img);
 cout<<"\nAddition: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

  //Subtraction
 a=(s1.rel)-(s2.rel);
 b=(s1.img)-(s2.img);
 cout<<"\nSubtraction: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

  //Multiplication
 a=((s1.rel)*(s2.rel))-((s1.img)*(s2.img));
 b=((s1.rel)*(s2.img))+((s2.rel)*(s1.img));
 cout<<"\nMultiplication: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

  //Division
 a=(((s1.rel)*(s2.rel))+((s1.img)*(s2.img)))/(pow(s2.rel,2)+pow(s2.img,2));
 b=(((s2.rel)*(s1.img))-((s1.rel)*(s2.img)))/(pow(s2.rel,2)+pow(s2.img,2));
 cout<<"\nDivision: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";
 return 0;
}



#include<iostream>
using namespace std;
int main()
{
    //variable declaration
    int s,c,p,n,i,t;

    //take user input
    cout<<"Enter a number : ";
    cin>>n;

    s=n*n;
    c=0;
    p=1;
    t=n;

    while(n!=0)
    {
        c++;
        n=n/10;
    }

    for(i=1;i<=c;i++)
    {
        p=p*10;
    }

    if(s%p==t)
    {
        cout<<"Number is automorphic.";
    }

    else
    {
        cout<<"Number is not automorphic.";
    }
}