#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    char data[1000];

    //in write mode.
    ofstream outfile;
    outfile.open("file.txt");

    cout << "Writing content to the text file" << endl;
    cout << "Enter your name : ";
    cin.getline(data, 1000);

    // write data into the file.
    outfile << data << endl;

    cout << "Enter your age : ";
    cin >> data;
    cin.ignore();

    // again write inputted data into the file.
    outfile << data << endl;

    cout << "successfully inserted data into file";
    // close the opened file.
    outfile.close();
    return 0;
}


#include <fstream>
#include <iostream>

using namespace std;

//main method declaration
int main()
{

    char data[1000];

    // open a file in read mode.
    ifstream infile;
    infile.open("file.cpp");

    cout << "Reading content from the file" << endl;
    infile >> data;

    // write the data
    cout << data << endl;

    //read the data from the file and display it.
    infile >> data;
    cout << data << endl;

    // close the opened file.
    infile.close();

    return 0;
}

#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

int main()
{
    //variable declaration
    ofstream outfile;
    ifstream infile;
    char fname1[10], fname2[20];
    char ch, uch;

    //user Input
    cout << "Enter a file name to be copied ";
    cin >> fname1;
    cout << "Enter new file name";
    cin >> fname2;
    infile.open(fname1);

    if (infile.fail())
    {
        cerr << " No such a file Exit";
        return 0;
    }
    outfile.open(fname2);
    if (outfile.fail())
    {
        cerr << "Unable to create a file";
        return 0;
    }
    while (!infile.eof())
    {
        ch = (char) infile.get();
        uch = (char) toupper(ch);
        outfile.put(uch);
    }
    infile.close();
    outfile.close();

    return 0;
}#include <iostream>

using namespace std;

double divisionby(int num1, int num2)
{
    if (num2 == 0)
    {
        throw "Division by zero condition!";
    }
    cout << "answer = ";
    return (num1 / num2);
}

int main()
{
    int n1, n2;
    cout << "enter two numbers for division operation : ";
    cin >> n1 >> n2;
    double n3 = 0;

    //try catch to handle run time error
    try
    {
        n3 = divisionby(n1, n2);
        cout << n3 << endl;
    }
    catch (const char *msg)
    {
        //it will display error msg
        cout << msg << endl;
    }

    return 0;
}//program to show how exception handling work

#include <iostream>
using namespace std;

//method definition
double divisionby(int num1, int num2)
{
    if( num2 == 0 )
    {
        throw "Division by zero condition!";
    }
    cout<<"answer = ";
    return (num1/num2);
}

int main ()
{
    //variable declaration
    int n1,n2;

    //take user input
    cout<<"enter two numbers for division operation : ";
    cin>>n1>>n2;
    double n3 = 0;

    //try catch to handle run time error
    try
    {
        n3 = divisionby(n1, n2);
        cout << n3 << endl;
    }
    catch (const char* msg)
    {
        //it will display error msg
        cout << msg << endl;
    }

   return 0;
}