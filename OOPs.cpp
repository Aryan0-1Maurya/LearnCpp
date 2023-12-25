#include<iostream>
 
using namespace std;
 
class programming
{
   private:
      int variable;
 
   public:
 
      void input_value()
      {
         cout << "In function input_value, Enter an integer\n";
         cin >> variable;
      }
 
      void output_value()
      {
         cout << "Variable entered is ";
         cout << variable << "\n";
      }
};
 
int main()
{
   programming object;
 
   object.input_value();
   object.output_value();
 
   //object.variable; Will produce an error because variable is private
 
   return 0;
}



#include<iostream>
using namespace std;

//class creation
class CubeDemo
{
    //member variable and member function declaration
    public:
        int side;

        //constructor declaration
        CubeDemo()
         {
          side=8;
         }
        //destructor declaration
        ~CubeDemo()
         {
          cout<<"\nDestructor called...";
         }

};

//declaration of main method

int main()
{
    //object creation
    CubeDemo cdemoobj;
    cout<<"";
    cout << cdemoobj.side;

}#include <iostream>
using namespace std;
class Area
{
    private:
       int length;
       int breadth;

    public:
        // Constructor without argument
       Area(): length(5), breadth(2)
       {
       }
       // Constructor with two argument
       Area(int l, int b): length(l), breadth(b)
       { }
       void GetLength()
       {
           cout<<"Enter length and breadth : ";
           cin>>length>>breadth;
       }
       int AreaCalculation()
        {
           return (length*breadth);
        }
       void DisplayArea(int temp)
       {
           cout<<"Area is : "<<temp<<endl;
       }
};
int main()
{
    Area objarea1,objarea2(24,2);
    int temp;
    objarea1.GetLength();
    cout<<"Area when default constructor is called."<<endl;
    temp=objarea1.AreaCalculation();
    objarea1.DisplayArea(temp);
    cout<<"Area when (parameterized constructor is called."<<endl;
    temp=objarea2.AreaCalculation();
    objarea2.DisplayArea(temp);
    return 0;
}



#include<iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int x1, int y1) 
    { 
        x = x1; y = y1; 
    }

    // Copy constructor
    Point(const Point &p2)
    {
        x = p2.x;
        y = p2.y;
    }

    int getX()
    {
         return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    // simple constructor is called
    Point objpoint1(53, 13);
    // Copy constructor is called
    Point objpoint2 = objpoint1;
    cout << "objpoint1.x : " << objpoint1.getX() << ", objpoint1.y : " << objpoint1.getY();
    cout << "\nobjpoint2.x : " << objpoint2.getX() << ", objpoint2.y : " << objpoint2.getY();

    return 0;
}/* C++ program to demonstrate the working of friend function.*/
#include <iostream>

using namespace std;

class Distance
{
    private:
        int meter;
    public:
        Distance(): meter(0){ }
        //friend function
        friend int func(Distance);

};

//function definition
int func(Distance d)
{
    //accessing private data from non-member function
    d.meter = 10;
    return d.meter;

}

int main()
{

    Distance D;
    //using friend function
    cout<<"Distace: "<<func(D)<<"\n";
    return 0;

}



#include<iostream>

using namespace std;

class Add
{
    public:
    void add(int a,int b)
    {
        int c;
        c=(a+b);
        cout<<a<<" + "<<b<<" = "<<c<<endl;
    }

    void add(float a,float b)
    {
        float c;
        c=(a+b);
        cout<<a<<" + "<<b<<" = "<<c<<endl;
    }

    void add(int a,int b,int c)
    {
        int d;
        d=(a+b+c);
        cout<<a<<" + "<<b<<" + "<<c<<" = "<<d<<endl;
    }
};

int main()
{
    Add a;
    a.add(5,6);
    a.add(7,8,9);
    a.add(8.0f,9.0f);

    return 0;
}# include<iostream>

using namespace std;

int area(int side)
{
 return side*side;
}

int area(int l , int b)
{
 return l*b;
}

int main()
{

        int (*p1)(int);
        int (*p2)(int,int);

        p1=area;
        p2=area;

        cout<<"Address of area(int)="<<p1<<endl;
        cout<<"Address of area(int,int)="<<p2<<endl;

        cout<<"\n";

        cout<<"Invoking area(int) via p1 "<<p1(20)<<endl;
        cout<<"Invoking area(int,int) via p2 "<<p2(10,20);

        return 0;
}



#include<iostream>

using namespace std;

class Shape
{
protected:
 float width, height;

public:
 void set_data (float a, float b)
 {
  width = a;
  height = b;
 }
};

//inheriting Shape class
class Rectangle: public Shape
{
public:
 float area ()
 {
  return (width * height);
 }
};

//inheriting Shape class
class Triangle: public Shape
{
    public:
        float area ()
        {
            return (width * height / 2);
        }
};

int main ()
{
 Rectangle rect;
 Triangle tri;

 rect.set_data (5,3);
 tri.set_data (2,5);

 cout <<"Area of Rectangle : " <<rect.area() << endl;
 cout <<"Area of Triangle : "<< tri.area() << endl;

 return 0;
}



#include<iostream>

using namespace std;

class A
{
    public:
        int l;
        void len()
        {
           cout<<"Lenght : ";
           cin>>l;
        }
};

class B : public A
{
    public:
        int b,c;
       void l_into_b()
       {
           len();
           cout<<"Breadth : ";
           cin>>b;
           c=b*l;
       }
};

class C
{
    public:
        int h;
        void height()
        {
           cout<<"Height : ";
           cin>>h;
        }
};

//Hybrid Inheritance Level
class D : public B , public C
{
    public:
        int res;
        void result()
        {
           l_into_b();
           height();
           res=h*c;

           cout<<"\n";
           cout<<endl<<"Result (l*b*h) : "<<res;
        }
};

int main()
{
    D dObj;
    dObj.result();

    return 0;
}#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct linked_list
{
    int data;
    struct linked_list *next;
}
Linked_list;

//for adding node
int add_node(Linked_list **head, int d)
{
    Linked_list *l = new Linked_list;
    if(l == NULL) return 0;

    Linked_list *t = *head;
    l->data = d;
    l->next = NULL;

    if(*head == NULL)
    {
        *head = l;
        return 1;
    }

    while(t->next != NULL)
    {
        t = t->next;
    }

    t->next = l;

    return 1;
}

//print the value which are there in linked list
void print_list(Linked_list *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void del_list(Linked_list *head)
{
    while(head != NULL)
    {
        Linked_list *t = head ->next;
        delete head;
        head = t;
    }
}

Linked_list * merge_list(Linked_list *l1, Linked_list *l2)
{
    Linked_list *h = l1, *r = l1, t;

    if(l1 == NULL)
    {
        return l2;
    }

    if(l2 == NULL)
    {
        return l1;
    }

    if(l1->data < l2->data)
    {
        h = r = l1;
        l1 = l1->next;
    }
    else
    {
        h = r = l2;
        l2 = l2->next;
    }

    while(l1->next != NULL && l2->next != NULL)
    {
        if(l1->data < l2->data)
        {
            r->next = l1;
            l1 = l1->next;
            r = r->next;
        }
        else
        {
            r->next = l2;
            l2 = l2->next;
            r = r->next;
            r = r->next;
        }
    }

    if(l1->next != NULL)
    {
        r->next = l1;
    }

    if(l2->next != NULL)
    {
        r->next = l2;
    }

    return h;
}

//declaration of main method
int main(int argc, char* argv[])
{
    Linked_list *l1 = NULL;
    Linked_list *l2 = NULL;

    for(int i = 0; i < 10; i ++)
    {
        add_node(&l1, i * 3);
    }

    print_list(l1);//it will print first linked list

    for(int i = 0; i < 10; i ++)
    {
        add_node(&l2, i * 7);
    }

    print_list(l2); //it will print 2nd linked list

    Linked_list *h = merge_list(l1, l2);

    print_list(h);

    del_list(h);

 return 0;
}//program to show how method overloading works

# include<iostream>

using namespace std;

//area method with one parameter
int area(int side)
{
 return side*side;
}

//area method with two parameter
int area(int l , int b)
{
 return l*b;
}

int main()
{

 int (*para1)(int);
 int (*para2)(int,int);

 para1=area;
 para2=area;

 cout<<"Address of area(int) : "<<(unsigned int)para1<<endl;
 cout<<"Address of area(int,int) : "<<(unsigned int)para2<<endl;

 cout<<"Invoking area(int) via para1 : "<<para1(20)<<endl;
 cout<<"Invoking area(int,int) via para2 : "<<para2(10,20);
}
#include<iostream>

using namespace std;

class MinusOperatorOverloading
{
    int x,y,z;

    public:
    void get_data(int a,int b,int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void operator -()
    {
        x = x - 10;
        y = y - 10;
        z = z - 10;
    }

    void display()
    {
        cout<<"\nx: "<<x;
        cout<<"\ny: "<<y;
        cout<<"\nz: "<<z;
    }
};

int main()
{
    MinusOperatorOverloading oo;
    oo.get_data(53,73,93);
    cout<<"Before overloading:";
    oo.display();

    -oo;

    cout<<"\n\n";
    cout<<"After overloading:";

    oo.display();

    return 0;
}



#include<iostream>
#include<string.h>

using namespace std;

class student
{
    private:
      int rl;
      char nm[20];

    public:
       void read();
       void display();
};

class marks : public student
{
    protected:
      int s1;
      int s2;
      int s3;

    public:
       void getmarks();
       void putmarks();
};

class result : public marks
{
    private:
      int t;
      float p;
      char div[10];

    public:
       void process();
       void printresult();
};

void student::read()
{
    cout<<"Enter Roll no. : ";
    cin>>rl;

    cout<<"Enter Name : ";
    cin>>nm;
}

void student:: display()
{
    cout <<"\nRoll no. : "<<rl<<endl;
    cout<<"Name : "<<nm<<endl;

    cout<<"\n";
}void marks ::getmarks()
{
    cout<<"Enter marks for 3 subjects : "<<endl;
    cin>>s1>>s2>>s3;
}

void marks ::putmarks()
{
    cout<<"Subject 1 :"<<s1<<endl;
    cout<<"Subject 2 : "<<s2<<endl;
    cout<<"Subject 3 : "<<s3<<endl;
}

void result::process()
{
    t= s1+s2+s3;
    p = t/3.0;
    p>=60?strcpy(div,"First"):p>=50?strcpy(div, "Second"): strcpy(div,"Third");
}

void result::printresult()
{
    cout<<"Total = "<<t<<endl;

    cout<<"\n";

    cout<<"Percentage = "<<p<<endl;
    cout<<"Division = "<<div<<endl;
}

int main()
{
    result x;

    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();

    return 0;
}#include <iostream>

using namespace std;

class Area
{
    public:
    float area_calc(float l,float b)
    {
        return l*b;
    }
};

class Perimeter
{
    public:
    float peri_calc(float l,float b)
    {
        return 2*(l+b);
    }
};

//Rectangle class is derived from classes Area and Perimeter.
class Rectangle : private Area, private Perimeter
{
    private:
    float length, breadth;

    public:
    Rectangle() : length(0.0), breadth(0.0) { }

    void get_data( )
    {
        cout<<"Enter length: ";
        cin>>length;

        cout<<"Enter breadth: ";
        cin>>breadth;
    }

    float area_calc()
    {
        //Calls area_calc() of class Area and returns it.
        return Area::area_calc(length,breadth);
    }

    float peri_calc()
    {
        //Calls peri_calc() function of class Perimeter and returns it.
        return Perimeter::peri_calc(length,breadth);
    }
};

int main()
{
    Rectangle r;
    r.get_data();

    cout<<"\n\n";

    cout<<"Area = "<<r.area_calc();
    cout<<"\nPerimeter = "<<r.peri_calc();

    return 0;
}#include <iostream>
using namespace std;

//define class
class operations
{
    //member variables
    public:
        int num1,num2;

    //member function or methods
    public:
       void add()
       {
           cout<<"enter two number for addition : ";
           cin>>num1>>num2;
           cout<<"addition = "<<num1+num2;
           cout<<"\n";
       }

        void sub()
       {
           cout<<"enter two number for subtraction : ";
           cin>>num1>>num2;
           cout<<"addition = "<<num1-num2;
           cout<<"\n";
       }

        void mul()
       {
           cout<<"enter two number for multiplication : ";
           cin>>num1>>num2;
           cout<<"addition = "<<num1*num2;
           cout<<"\n";
       }

        void div()
       {
           cout<<"enter two number for division : ";
           cin>>num1>>num2;
           cout<<"addition = "<<(float)num1/num2;
           cout<<"\n";
       }
};
 int main()
 {
     //creation of object
      operations op1;
      op1.add();
      op1.sub();
      op1.mul();
      op1.div();
      return 0;
 }#include <iostream>
using namespace std;

class Box
{
   public:

      double getVolume(void)
      {
         return length * breadth * height;
      }
      void setLength( double len )
      {
          length = len;
      }

      void setBreadth( double bre )
      {
          breadth = bre;
      }

      void setHeight( double hei )
      {
          height = hei;
      }
      // Overload + operator to add two Box objects.
      Box operator+(const Box& b)
      {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
   private:
      double length; // Length of a box
      double breadth; // Breadth of a box
      double height; // Height of a box
};
// Main function for the program
int main( )
{
   Box Box1; // Declare Box1 of type Box
   Box Box2; // Declare Box2 of type Box
   Box Box3; // Declare Box3 of type Box
   double volume = 0.0; // Store the volume of a box here

   // box 1 specification
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // Add two object as follows:
   Box3 = Box1 + Box2;

   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}#include <iostream>
#include <iomanip>
using namespace std;

int main ( )
{
    char empname [100];
    cout<<"Enter a employee name : ";

    //ws is use to add white spaces
    cin>>ws;
    cin>>empname;
    cout<<"\n";
    cout<<"Employee name = "<<empname;
}//program to show how call by value works

#include<iostream>
using namespace std;

//function definition
void swap(int x, int y)
{
    int z;
    z = x;
    x = y;
    y = z;
    cout<<"Swapped value of a is : "<< x<<endl;
    cout<<"Swapped value of b is : "<<y<<endl;
}

int main (int argc, char *argv[])
{
    //variable declaration
    int a ,b;

    //take user input
    cout<<"Enter Two numbers : ";
    cin>>a>>b;

    cout<<"Original values of a and b are : "<<endl;
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;

    //call to swap function
    swap(a, b);
}//program to add N integers using function
#include<iostream>
using namespace std;

//function declaration
int add(int num);

//main method
int main()
{
    //variable declaration
    int num;

    //take input from user
    cout << "Enter a positive integer : ";
    cin >> num;

    //calling add function
    cout << "Sum of n integer is : " << add(num);
    return 0;
}

//method definition
int add(int num)
{
    if(num!=0)
    {
        return num+add(num-1);
    }
}#include <iostream>

using namespace std;

class Value
{
    protected:
        int val;

    public:
        void set_values (int a)
        {
            val=a;
        }
};

class Cube: public Value
{
    public:
        int cube()
        {
            return (val*val*val);
        }
};

int main()
{
    Cube cub;
    cub.set_values (5);

    cout << "The Cube of 5 is : " << cub.cube() << endl;

    return 0;
}# include<iostream>
# include<math.h>

using namespace std;

class point
{
 int x,y,z;

public:
  point()
 {
         x=y=z=0;
 }

  point(int i,int j,int k)
 {
  x=i;
  y=j;
  z=k;
 }

  point(point &a)
 {
  x=a.x;
  y=a.y;
  z=a.z;
 }

    void negate()
 {
  x=-x;
  y=-y;
  z=-z;
 }

 void print()
 {
  cout<<"("<<x<<","<<y<<","<<z<<")\n";
 }

 int norm()
 {
  return(sqrt(x*x+y*y+z*z));
 }
};

int main()
{
      point p(2,3,4),p1(p);

      cout<<"The point has the coordinates\n";
      p.print();
      cout<<"The point coordinates after negation\n";

      p.negate();
      p.print();

      cout<<"Normal Distance of the point from (0,0,0) is \n"<<p.norm()<<"\n";
      cout<<"The coordinates of the point p1 after copy constructor is \n";

      p1.print();

      return 0;
}//using setprecision manipulator
 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main ()
 {
    float num1,num2,result;
    num1=20;
    num2=3;
    result=num1/num2;

    //use while displaying a floating point value
    cout << setprecision (1) << result << endl;
    cout << setprecision (2) << result << endl;
    cout << setprecision (3) << result << endl;
    cout << setprecision (4) << result << endl;

}



#include<iostream>
using namespace std;

//Abstract base class
class Base
{
 public:
    //Pure Virtual Function
    virtual void show() = 0;
};


class Derived:public Base
{
 public:
    void show()
    {
        cout << "Implementation of Virtual Function in Derived class";
    }
};

int main()
{
 Base *b;

 Derived d;
 b = &d;
 b->show();
}



#include<iostream>
#include<conio.h>
using namespace std;

class prime
{
    int num,k,i;

    public:prime(int x) //declaration of constructor
    {
        num=x;
    }

    void check()
    {
        k=1;
        {
            for(i=2;i<=num/2;i++)
            {
                if(num%i==0)
                {
                    k=0;
                    break;
                }
                else
                {
                    k=1;
                }
            }

        }
    }

    void show()
    {
        if(k==1)
        {
            cout<<"\n"<<num<<" is a prime number.";
        }
        else
        {
            cout<<"\n"<<num<<" is Not a prime number.";
        }
    }
};

//declaration of main function
int main()
{

    int a;
    cout<<"Enter the Number : ";
    cin>>a;
    prime obj(a); //calling constructor
    obj.check();
    obj.show();

}