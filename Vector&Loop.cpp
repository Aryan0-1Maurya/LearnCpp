#include <iostream>

using namespace std;

int main()
{

    int i = 1;


    while (i <= 10)
    {
        cout << "value of i: " << i << endl;
        i++;
    }

    return 0;
}



#include <iostream>

using namespace std;

int main()
{
    // for loop execution
    for (int i = 0; i <= 10; i++)
    {
        cout << "value of i: " << i << endl;
    }

    return 0;
}#include <iostream>

using namespace std;

int main()
{

    int i = 1;

    do
    {
        cout << "value of i: " << i << endl;
        i++;
    }
    while (i <= 10);

    return 0;
}



#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Vector to store integers
    vector<int> vex;
    cout << "added value in vector :\n";

    //add value in vector
    vex.push_back(130);
    vex.push_back(500);
    vex.push_back(353);

    for (int x = 0; x < vex.size(); x++)
    {
        //Should output 130 500 353
        cout << vex[x] << " ";
    }

    //Checks if empty
    if (!vex.empty())
    {
        //Clears vector
        vex.clear();
    }

    vector<int> another_vector;
    another_vector.push_back(10);
    vex.push_back(10);

    if (vex == another_vector)
    {
        vex.push_back(20);
    }

    for (int y = 0; y < vex.size(); y++)
    {
        //Should output 10 20
        cout << vex[y] << " ";
    }
    return 0;
}