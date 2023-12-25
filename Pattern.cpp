#include <iostream>

using namespace std;

void drawTriangle(char border, char filler, int length)
{
    int start = 2;
    int base = 4;
    int i;
    for (i = start; i <= length; i++)
    {
        for (int sp = 0; sp <= length - i; sp++)
        {
            cout << " ";
        }
        if (i > start)
        {
            cout << border << " ";
        }
        if (i > start)
        {
            for (int b = base; b <= i; b++)
            {
                cout << filler << " ";
            }
        }
        cout << border << " ";
        cout << endl;
    }

    for (int j = base; j < length + base; j++)
    {
        cout << border << " ";
    }
    cout << endl;
}


int main()
{
    int length = 12;
    drawTriangle('*', ' ', length);
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    //variable declaration
    int i, j, rows;

    //take number of rows
    cout << "Enter the number of rows : ";
    cin >> rows;

    for (i = rows; i >= 1; --i)
    {
        for (j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int i, j, rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}#include<iostream>

using namespace std;

int main()
{
    int i, n, j;

    cout << "Enter number of lines for Pattern : ";
    cin >> n;

    for (i = n; i > 0; i--)
    {
        for (j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (j = 2 * i - 1; j > 0; j--)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int i, space, rows, k = 0, count = 0, count1 = 0;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; ++i)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            cout << " ";
            ++count;
        }
        while (k != 2 * i - 1)
        {
            if (count <= rows - 1)
            {
                cout << i + k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << i + k - 2 * count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;
        cout << "\n";
    }
    return 0;
}


#include <iostream>
#include <string>

using namespace std;

void PascalsTriangle(int);

int main()
{
    int n;
    cout << "Enter the number of rows you would like to print for Pascal's Triangle: ";
    cin >> n;
    cout << endl;
    PascalsTriangle(n);
    return 0;
}

int numdigits(int x)
{
    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        ++count;
    }
    return count;
}

void PascalsTriangle(int n)
{
    int i, j, x, y, maxlen;
    string len;
    for (i = 0; i < n; i++)
    {
        x = 1;
        len = string((n - i - 1) * (n / 2), ' ');
        cout << len;
        for (j = 0; j <= i; j++)
        {
            y = x;
            x = x * (i - j) / (j + 1);
            maxlen = numdigits(x) - 1;
            if (n % 2 == 0)
                cout << y << string(n - 1 - maxlen, ' ');
            else
            {
                cout << y << string(n - 2 - maxlen, ' ');
            }
        }
        cout << endl;
    }
}#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    int i, j, k, rows;
    k = 1;

    //user input for rows

    cout << "Enter how many rows you want : ";
    cin >> rows;

    //to generate pattern
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << k++;
        }
        cout << "\n";
    }
    return 0;
}#include<iostream>

using namespace std;

int main()
{
    int num, c, k;

    cout << "Enter number of rows : ";
    cin >> num;
    cout << "\n";

    for (c = 1; c <= num; c++)
    {
        for (k = 1; k <= c; k++)
        {
            cout << c;
        }

        cout << "\n";
    }
}


#include <iostream>

using namespace std;

int main()
{
    int i, j, rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int i, j;
    char input, temp = 'A';
    cout << "Enter uppercase character you want in triange at last row: ";
    cin >> input;
    for (i = 1; i <= (input - 'A' + 1); ++i)
    {
        for (j = 1; j <= i; ++j)
            cout << temp << " ";
        ++temp;
        cout << endl;
    }
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int rows, i, j, k = 0;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; ++j)
            cout << k + j << " ";
        ++k;
        cout << endl;
    }
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int i, j, k, n;
    cout << "Enter the number of lines to be printed: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i - 1); j++)
            cout << " ";
        for (k = 0; k < (2 * i + 1); k++)
            cout << "*";

        cout << endl;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j <= i; j++)
            cout << " ";
        for (k = (2 * n - 2 * i - 3); k > 0; k--)
            cout << "*";
        cout << endl;
    }
    return 0;
}#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    //variable declaration
    int x, y, n;
    char ch;
    cout << "Number of rows : ";
    cin >> n;

    for (x = 1; x <= n; x++)
    {
        cout << "\n";
        ch = 'A';
        for (y = 1; y <= x; y++)
        {
            cout << ch;
            ch++;
        }
    }
    return 0;
}