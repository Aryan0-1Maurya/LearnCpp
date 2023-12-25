#include <iostream>
#include <string>

using namespace std;

int main ()
{
   string str1 = "Programming";
   string str2 = "Hub";
   string str3;
   int len ;

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total lenghth of str3 after concatenation
   len = str3.size();
   cout << "str3.size() : " << len << endl;

   return 0;
}


#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
void print(const string& item)
{
    cout<< endl << item ;
}

int main()
{
    set<string> sortedItems;
    int size;
    cout<< "How many names you want to sort : ";
    cin>>size;
    for(int i = 1; i <= size; ++i)
    {
        string name;
        cout << i << ". ";
        cin >> name;

        sortedItems.insert(name);
    }
    cout<< "Sorted String -> ";
    for_each(sortedItems.begin(), sortedItems.end(), &print);
    return 0;
}#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char a[100], b[100];

    printf("Enter the string to check if it is a palindrome : ");
    gets(a);

    strcpy(b,a);
    strrev(b);

    if( strcmp(a,b) == 0 )
    printf("Entered string is a palindrome.\n");
    else
    printf("Entered string is not a palindrome.\n");

    return 0;
}


#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{

                char name[40],bubble,temp[40];
                int loop,size,count;
                printf("Enter the word ");
                scanf("%s",name);
                printf("");
                for(loop=0;loop<strlen(name);loop++)
                {
                    temp[loop]=name[loop];
                    printf("%c",temp[loop]);
                }

                for(count=1;count<strlen(name);count++)
                {
                        for(loop=0;loop<(strlen(name));loop++)
                        {
                                if(loop==0)
                                    bubble=temp[0];
                                temp[loop]=temp[loop+1];
                                temp[strlen(name)]=bubble;
                        }
                                printf(" ");
                                for(loop=0;loop<(strlen(name));loop++)
                                                  printf("%c",temp[loop]);
                }
                getch();

}#include<iostream>
#include<stdio.h>

using namespace std;

int main( )
{
 char str[80];
 int temp,l,i,j;
 cout<<"Enter string : ";
 gets(str);

 for(l=0;str[l]!='\0';l++); //finding length of string

 for(i=0,j=l-1;i<l/2;i++,j--)
 {
  temp=str[i];
  str[i]=str[j];
  str[j]=temp;
 }

 cout<<"Reverse of String : "<<str;

 return 0;
}#include<iostream>
#include<stdio.h>

using namespace std;

int main( )
{
 char str[80];
 int i = 0;
 cout<<"Enter a string : ";
 gets(str);

 for(i=0;str[i]!='\0';i++);

 cout<<"Length of string is : "<<i;
 return 0;
}#include<iostream>
#include<stdio.h>

using namespace std;

int main( )
{
 char str[80];
 cout<<"Enter a string : ";
 gets(str);

 for(int i=0;str[i]!='\0';i++)
  str[i] = (str[i]>='a' && str[i]<='z')?(str[i]-32):str[i];

 cout<<str;

 return 0;
}#include<iostream>
#include<stdio.h>

using namespace std;

int main( )
{
 char str[80];
 cout<<"Enter a string : ";
 gets(str);

 for(int i=0;str[i]!='\0';i++)
  str[i] = (str[i]>='A' && str[i]<='Z')?(str[i]+32):str[i];

 cout<<str;

 return 0;
}


#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    string tmp = "C Plus Plus";

    cout<<"String : "<<tmp<<endl;

    cout<<"Converting string to char array : ";

    char charArray[1024];
    strncpy(charArray, tmp.c_str(), sizeof(charArray));
    charArray[sizeof(charArray) - 1] = 0;

    for(int i = 0;charArray[i]!=0;i++)
    {
        cout<<endl<<"charArray["<<i<<"] :\t"<<charArray[i];
    }

    return 0;
}