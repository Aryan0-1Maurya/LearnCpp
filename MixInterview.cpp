#include<iostream>
using namespace std;


int main()
{
 float num;
 cout<<"Enter any number:";
 cin>>num;

 if(num>0)
    {
         cout<<"The absolute value of number is:"<<num;
    }
 else
    {
         cout<<"The absolute value of number is:"<<-(num);
    }


    return 0;
}



#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string generate(int n, char left = '[', char right = ']')
{
    string str(std::string(n, left) + std::string(n, right));
    random_shuffle(str.begin(), str.end());
    return str;
}

bool balanced(const string &str, char left = '[', char right = ']')
{
    int count = 0;
    for (string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if (*it == left)
            count++;
        else if (*it == right)
            if (--count < 0) return false;
    }
    return count == 0;
}

int main()
{
    srand(time(NULL)); // seed rng
    for (int i = 0; i < 9; ++i)
    {
        string s(generate(i));
        cout << (balanced(s) ? " ok: " : "bad: ") << s << "\n";
    }
}



#include <iostream>
using namespace std;
int main()
{
    char operation;
    float num1,num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> operation;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch(operation) {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            cout << "Error! operator is not correct";
            break;
    }
    return 0;
}# include <iostream>
using namespace std;
int main()
{
    char operation;
    float num1,num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> operation;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch(operation) {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            cout << "Error! operator is not correct";
            break;
    }
    return 0;
}




#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Calendar
{
 private:
  int month;
  int year;
  int firstday;
	
 public:
  Calendar(int =03, int =2016);
  void setFirstDay();
  void print();
};

Calendar :: Calendar (int _month, int _year)
{
 month = _month;
 year = _year;
}
	
void Calendar :: setFirstDay()
{
    //This part determines which day will be the first day of that year (0 for Sunday, 1 for Monday, etc.)
 int day=1;
 int y = year - (14-month)/12;
 int m = month +12 * ((14-month) / 12) -2;
 firstday= (day + y + y / 4 - y / 100 + y / 400 + (31 * m / 12)) % 7;
}

void Calendar :: print()
{
 int NumberOfDaysInMonth;
 int FirstDayOfMonth = 0;
 int DayOfWeekCounter = 0;
 int DateCounter = 1;

 switch (month)
 {
   case 1:
  cout<<setw(21)<<"January "<<year;
  NumberOfDaysInMonth = 31;
   break;

   case 2:
  cout<<setw(21)<<"February "<<year;
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    NumberOfDaysInMonth = 29;
  else
    NumberOfDaysInMonth = 28;
    break;

   case 3:
  cout<<setw(21)<<"March "<<year;
  NumberOfDaysInMonth = 31;
    break;

   case 4:
  cout<<setw(21)<<"April "<<year;
  NumberOfDaysInMonth = 30;
    break;

   case 5:
  cout<<setw(21)<<"May "<<year;
  NumberOfDaysInMonth = 31;
    break;

   case 6:
  cout<<setw(21)<<"June "<<year;
  NumberOfDaysInMonth = 30;
    break;

   case 7:
  cout<<setw(21)<<"July "<<year;
  NumberOfDaysInMonth = 31;
    break;

   case 8:
  cout<<setw(21)<<"August "<<year;
NumberOfDaysInMonth = 31;
    break;

   case 9:
  cout<<setw(21)<<"September "<<year;
  NumberOfDaysInMonth = 30;
    break;

   case 10:
  cout<<setw(21)<<"October "<<year;
  NumberOfDaysInMonth = 31;
    break;

   case 11:
  cout<<setw(21)<<"November "<<year;
  NumberOfDaysInMonth = 30;
    break;

   case 12:
  cout<<setw(21)<<"December "<<year;
  NumberOfDaysInMonth = 31;
    break;

 }

   //Display the days at the top of each month

 cout<<"\nSun Mon Tue Wed Thu Fri Sat";
 cout<<"\n\n"<<setw(2);

 //Determine where the first day begins

 for (FirstDayOfMonth; FirstDayOfMonth < firstday; ++FirstDayOfMonth)
 {

  cout<<setw(14);
 }

 int tempfirstday=firstday;
 DateCounter = 1;
 DayOfWeekCounter = tempfirstday;for (DateCounter; DateCounter <= NumberOfDaysInMonth; ++DateCounter)
 {
  cout<<DateCounter<<setw(6);
  ++DayOfWeekCounter;
  if (DayOfWeekCounter > 6)
  {
   cout<<"\n\n"<<setw(2);
   DayOfWeekCounter = 0;
  }
 }
 cout << " \n" ;

 tempfirstday = DayOfWeekCounter + 1;
}

int main()
{
 Calendar c;
 c.setFirstDay();
 c.print();
 return 0;
}
#include<iostream>
using namespace std;

int main()
{
  char ch;

  cout<<"Input a character : ";
  cin>>ch;

  switch(ch)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      cout<<ch<<" is a vowel.";
      break;
    default:
      cout<<ch<<" is not a vowel.";
  }

  return 0;
}




#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    //variable declaration
    char str[150];
    int i,vowel,cons,ch,digit,space,o;
    o=vowel=cons=ch=digit=space=0;

    //take input from user
    cout << "Enter a string : " << endl;
    cin.getline(str, 150);

    //logic for checking vowels,consonants,digit and blank spaces
    for(i=0;str[i]!='\0';++i)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'
           || str[i]=='O'|| str[i]=='U')
        {
            ++vowel;
        }
        else if((str[i]>='a'&& str[i]<='z')|| (str[i]>='A'&& str[i]<='Z'))
        {
            ++cons;
        }

        else if(str[i]>='0'&&cons<='9')
        {
            ++digit;
        }
        else if (str[i]==' ')
        {
            ++space;
        }

    }

    //display output
    cout << "\nNumbers of Vowels : " << vowel << endl;
    cout << "Numbers of Consonants : " << cons << endl;
    cout << "Numbers of Digits : " << digit << endl;
    cout << "Numbers of White Spaces : " << space << endl;

    return 0;
}// Display the current date in the formats of "2007-11-10"
// and "Sunday, November 10, 2007".

#include <vector>
#include <string>
#include <iostream>
#include <ctime>

class Date
{
 struct tm ltime;

 public:
	
 /// Default constructor.
 Date()
 {
  time_t t = time(0);
  localtime_r(&t, &ltime);
 }

 std::string getDate(const char* fmt)
 {
  char out[200];
  size_t result = strftime(out, sizeof out, fmt, &ltime);
  return std::string(out, out + result);
 }

 std::string getISODate() {return getDate("%F");}

 std::string getTextDate() {return getDate("%A, %B %d, %Y");}
};

int main()
{
 Date d;
 std::cout << d.getISODate() << std::endl;
 std::cout << d.getTextDate() << std::endl;
 return 0;
}



#include <iostream>
#include <ctime>

using namespace std;

int main( )
{
   // current date/time based on your system
   time_t nowuptime = time(0);

   // convert current time to string format
   char* date = ctime(&nowuptime);


   //print the value
   cout << "The localhost date and time is : " <<"\n";
   cout<<date << endl;

}




#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%15==0)
        {
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%3==0)
        {
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0)
        {
            cout<<"Buzz"<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
    return 0;
}




#include<iostream>
 
using namespace std;
 
int main()
{
 cout << "Hello World\n";
 return 0;
}




#include<iostream>
 
using namespace std;
 
// Creating class
 
class Message
{
  public:
 
    void display() {
      cout << "Hello World\n";
    }
};
 
int main()
{
 Message c; // Creating object
 c.display(); // Calling function
 
 return 0;
}




#include<iostream>
#include<string.h>

using namespace std;

class Student
{
    int maximum;
    char subject[30];

    public:
    void get_data()
    {
        int size,i;

        cout<<"\nEnter no of Subjects: ";
        cin>>size;

        char names[size][30];

        cout <<"\nEnter "<<size<<" Subjects names...\n";

        for(i=1;i<=size;i++)
        {
            cout<<"\n"<<i<<". ";
            cin>>names[i-1];
        }

        int array[size];

        for(i=0;i<size;i++)
        {
            cout<<"\nEnter marks for "<<names[i]<<": ";
            cin>>array[i];
        }

        maximum = array[0];

        for(i=0;i<size;i++)
        {
            if(array[i] > maximum)
            {
                maximum = array[i];
                strcpy(subject,names[i]);
            }
        }
    }
    void display()
    {
        cout<<"\nMaximum Marks: ";
        cout<<"\nYou Had Scored "<<maximum<<" marks in "<<subject;
    }
};

int main()
{
    Student s1;

    s1.get_data();
    s1.display();

    return 0;
}



#include <iostream>
#include <queue>
#include <map>
// for CHAR_BIT
#include <climits> 
#include <iterator>
#include <algorithm>

const int UniqueSymbols = 1 << CHAR_BIT;
const char* SampleString = "this is an example for huffman encoding";

typedef std::vector<bool> HuffCode;
typedef std::map<char, HuffCode> HuffCodeMap;

class INode
{
public:
    const int f;

    virtual ~INode() {}

protected:
    INode(int f) : f(f) {}
};

class InternalNode : public INode
{
public:
    INode *const left;
    INode *const right;

    InternalNode(INode* c0, INode* c1) : INode(c0->f + c1->f), left(c0), right(c1) {}
    ~InternalNode()
    {
        delete left;
        delete right;
    }
};

class LeafNode : public INode
{
public:
    const char c;

    LeafNode(int f, char c) : INode(f), c(c) {}
};

struct NodeCmp
{
    bool operator()(const INode* lhs, const INode* rhs) const { return lhs->f > rhs->f; }
};

INode* BuildTree(const int (&frequencies)[UniqueSymbols])
{
    std::priority_queue<INode*, std::vector<INode*>, NodeCmp> trees;

    for (int i = 0; i < UniqueSymbols; ++i)
    {
        if(frequencies[i] != 0)
            trees.push(new LeafNode(frequencies[i], (char)i));
    }
    while (trees.size() > 1)
    {
        INode* childR = trees.top();
        trees.pop();

        INode* childL = trees.top();
        trees.pop();

        INode* parent = new InternalNode(childR, childL);
        trees.push(parent);
    }
    return trees.top();
}

void GenerateCodes(const INode* node, const HuffCode& prefix, HuffCodeMap& outCodes)
{
    if (const LeafNode* lf = dynamic_cast<const LeafNode*>(node))
    {
        outCodes[lf->c] = prefix;
    }
    else if (const InternalNode* in = dynamic_cast<const InternalNode*>(node))
    {
        HuffCode leftPrefix = prefix;
        leftPrefix.push_back(false);
        GenerateCodes(in->left, leftPrefix, outCodes);

        HuffCode rightPrefix = prefix;
        rightPrefix.push_back(true);
        GenerateCodes(in->right, rightPrefix, outCodes);
    }
}

int main()
{
    // Build frequency table
    int frequencies[UniqueSymbols] = {0};
    const char* ptr = SampleString;
    while (*ptr != '\0')
        ++frequencies[*ptr++];

    INode* root = BuildTree(frequencies);

    HuffCodeMap codes;
    GenerateCodes(root, HuffCode(), codes);
    delete root;

    for (HuffCodeMap::const_iterator it = codes.begin(); it != codes.end(); ++it)
    {
        std::cout << it->first << " ";
        std::copy(it->second.begin(), it->second.end(),
                  std::ostream_iterator<bool>(std::cout));
        std::cout << std::endl;
    }
    return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,num;

    cout<<"Enter how many elements : ";
    cin>>num;

    int vec[num],large,small;

    cout<<"Enter values in the vector";
    cout<<endl;

    for(i=0;i<num;i++)
    {
        cin>>vec[i];
    }

    large=vec[1];
    small=vec[1];

    for(i=0;i<num;i++)
    {
        if(vec[i]>large)
        {
            large=vec[i];
        }

        else
        {
            if(vec[i]<small)
            {
                small=vec[i];
            }

        }

    }

    cout<<endl<<"Largest element = "<<large;
    cout<<endl<<"Smallest element = "<<small;
}




#include<iostream>
#include<conio.h>
using namespace std;


int main()
{

   //declare variable
   int year;

   //take user input for year
   cout<<"Enter year : ";
   cin>>year;

   if(year%4==0 || year%400==0 || year%100==0)
   cout<<"This is a leap year"<<endl;

   else
   cout<<"This is not a leap year"<<endl;

   return 0;
}




#include<iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Enter number to find multiplication table : ";
    cin>>num;

    for(int a=1;a<=10;a++)
        cout<<num<<" * "<<a<<" = "<<num*a<<endl;

    return 0;
}



#include<iostream>
#include<conio.h>

using namespace std;

int main()
{



   int hours,mins,seconds,x;

   cout<<"Enter hours=";

   cin>>hours;

   cout<<"\nEnter minutes=";

   cin>>mins;

   cout<<"\nEnter seconds=";

   cin>>seconds;

   if(hours > 24)

    {

     cout<<"Invalid Entery";

   }

   else

   {

       cout<<"\n24 Hours Format\n";

cout<<"Hours : Mins : Seconds\n"<<" "<<hours<<" : "<<mins<<" : "<<seconds<<"\n";


  if(hours > 12)

{

  hours=hours-12;

  cout<<"12 Hours Format\n";

cout<<"Hours : Mins : Seconds\n"<<" "<<hours<<" : "<<mins<<" : "<<seconds;

  }

       else

  {

 cout<<"12 Hours Format\n";

 cout<<"Hours : Mins : Seconds\n"<<" "<<hours<<": "<<mins<<" : "<<seconds;

  }

   }

} // end of main




#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
char mychar[100];
int i = 0;
//while the character is not a new line
while((mychar[i] = cin.get()) != '\n')
i++;

mychar[i] = NULL;
//display characters
cout<<mychar<<endl;

return 0;
}



#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define NULL 0

int size=0;
void Insert();
void Display();
void Delete();
int Search(char lab[]);
void Modify();
struct SymbTab
{
    char label[10],symbol[10];
    int addr;
    struct SymbTab *next;};
    struct SymbTab *first,*last;
    
    void main()
    {
        int op,y;
        char la[10];

        do
        {
            printf("\n\tSYMBOL TABLE IMPLEMENTATION\n");
            printf("\n\t1.INSERT\n\t2.DISPLAY\n\t3.DELETE\n\t4.SEARCH\n\t5.MODIFY\n\t6.END\n");

            printf("\n\tEnter your option : ");
            scanf("%d",&op);

            switch(op)
            {
                case 1:
                Insert();
                break;

                case 2:
                Display();
                break;

                case 3:
                Delete();
                break;

                case 4:
                printf("\n\tEnter the label to be searched : ");
                scanf("%s",la);

                y=Search(la);
                printf("\n\tSearch Result:");
if(y==1)
                printf("\n\tThe label is present in the symbol table\n");
                else
                printf("\n\tThe label is not present in the symbol table\n");
                break;

                case 5:
                Modify();
                break;

                case 6:
                exit(0);
            }
        }
        while(op<6);
        getch();
    }

    void Insert()
    {
      int n;
      char l[10];

      printf("\n\tEnter the label : ");
      scanf("%s",l);

      n=Search(l);
      if(n==1)
      {
          printf("\n\tThe label exists already in the symbol table\n\tDuplicate can't be inserted");
      }
      
      else
      {
        struct SymbTab *p;
        p=malloc(sizeof(struct SymbTab));
        strcpy(p->label,l);
        printf("\n\tEnter the symbol : ");
        scanf("%s",p->symbol);
        printf("\n\tEnter the address : ");
        scanf("%d",&p->addr);
        p->next=NULL;if(size==0)
        {
          first=p;
          last=p;
        }
        else
        {
          last->next=p;
          last=p;
        }
        size++;
       }
       printf("\n\tLabel inserted\n");
    }


void Display()
{
  int i;
  struct SymbTab *p;
  p=first;
  
  printf("\n\tLABEL\t\tSYMBOL\t\tADDRESS\n");
  
  for(i=0;i<size;i++)
  {
    printf("\t%s\t\t%s\t\t%d\n",p->label,p->symbol,p->addr);
    p=p->next;
  }
}

int Search(char lab[])
{
    int i,flag=0;
    struct SymbTab *p;
    p=first;
 
    for(i=0;i<size;i++)
    {
        if(strcmp(p->label,lab)==0)
        flag=1;
        p=p->next;
    }
 return flag;
}void Modify()
{
    char l[10],nl[10];
      int add,choice,i,s;
      struct SymbTab *p;
      p=first;
      printf("\n\tWhat do you want to modify?\n");
      printf("\n\t1.Only the label\n\t2.Only the address\n\t3.Both the label and address\n");
      printf("\tEnter your choice : ");
      scanf("%d",&choice);
    switch(choice)
    {
     case 1:
       printf("\n\tEnter the old label : ");
       scanf("%s",l);
       s=Search(l);
       if(s==0)
       {
           printf("\n\tLabel not found\n");
       }
       else
       {
         printf("\n\tEnter the new label : ");
         scanf("%s",nl);
         for(i=0;i<size;i++)
         {
             
            if(strcmp(p->label,l)==0)
            {
                strcpy(p->label,nl);
                p=p->next;
            }
     
            printf("\n\tAfter Modification:\n");
            Display();
        }
        
    break;
    case 2:
        printf("\n\tEnter the label where the address is to be modified : ");
        scanf("%s",l);
        s=Search(l);
        
        if(s==0)
        {
            printf("\n\tLabel not found\n");
        }
        else{
            printf("\n\tEnter the new address : ");
            scanf("%d",&add);
            for(i=0;i<size;i++)
            {
                if(strcmp(p->label,l)==0)
                {
                    p->addr=add;
                    p=p->next;
                }
            }
            
            printf("\n\tAfter Modification:\n");
            Display();
        }
    break;
        
    case 3:
       printf("\n\tEnter the old label : ");
       scanf("%s",l);
       s=Search(l);
       
       if(s==0)
       {
           printf("\n\tLabel not found\n");
       }
       else
       {
           printf("\n\tEnter the new label : ");
           scanf("%s",nl);
           printf("\n\tEnter the new address : ");
           scanf("%d",&add);
     
           for(i=0;i<size;i++)
           {
              if(strcmp(p->label,l)==0)
              {
                 strcpy(p->label,nl);
                 p->addr=add;
              }
              
              p=p->next;
           }
           
           printf("\n\tAfter Modification:\n");
           Display();
       }   
    break;
    }
}


void Delete()
{
  int a;
  char l[10];
  struct SymbTab *p,*q;
  p=first;
  
  printf("\n\tEnter the label to be deleted : ");
  scanf("%s",l);
  a=Search(l);if(a==0)
  {
      printf("\n\tLabel not found\n");
  }
  else
   {
    if(strcmp(first->label,l)==0)
    {
        first=first->next;
    }
    else if(strcmp(last->label,l)==0)
     {
        q=p->next;
        
        while(strcmp(q->label,l)!=0)
        {
           p=p->next;
           q=q->next;
        }
        
        p->next=NULL;
        last=p;
     }
    else
    {
        q=p->next;
        
        while(strcmp(q->label,l)!=0)
        {
           p=p->next;
           q=q->next;
        }
        
        p->next=q->next;
    }
    size--;
    
    printf("\n\tAfter Deletion:\n");
    Display();
   }
}