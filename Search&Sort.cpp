#include<iostream>

using namespace std;

int main()
{
    int cost[10][10], i, j, k, vertice, stk[10], top, v, visit[10], visited[10], edge;

    cout << "Enter numbers of vertice : ";
    cin >> vertice;
    cout << "\nEnter numbers of edge : ";
    cin >> edge;
    cout << "\nEDGES \n";

    for (k = 1; k <= edge; k++)
    {
        cin >> i >> j;
        cost[i][j] = 1;
    }

    cout << "\nEnter initial vertex : ";
    cin >> v;
    cout << "\nORDER OF VISITED VERTICES IS : ";
    cout << v << " ";
    visited[v] = 1;
    k = 1;
    while (k < vertice)
    {
        for (j = vertice; j >= 1; j--)
        {
            if (cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1)
            {
                visit[j] = 1;
                stk[top] = j;
                top++;
            }
        }

        v = stk[--top];
        cout << v << " ";
        k++;
        visit[v] = 0;
        visited[v] = 1;
    }

    return 0;
}



#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool myfunction(int i, int j)
{
    return (i < j);
}

struct myclass {
    bool operator()(int i, int j)
    { return (i < j); }
}
        myobject;

int main()
{
    int arr[] = {312, 171, 152, 435, 26, 980, 353, 334};
    vector<int> myvector(arr, arr + 8);

    sort(myvector.begin(), myvector.begin() + 4);

    // using function as comp
    sort(myvector.begin() + 4, myvector.end(), myfunction);

    // using object as comp
    sort(myvector.begin(), myvector.end(), myobject);

    // print out content:

    cout << "sorted matrix contains:";
    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;

    cout << '\n';

    return 0;
}



#include <iostream>

using namespace std;

//Print values
void print_ar(int ar[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

//Shell sort function
void shell_sort(int ar[], int size)
{
    int j;

    //Narrow the array by 2 everytime
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; ++i)
        {
            int temp = ar[i];
            for (j = i; j >= gap && temp < ar[j - gap]; j -= gap)
            {
                ar[j] = ar[j - gap];
            }
            ar[j] = temp;
        }
    }
}

int main()
{
    int ar[] = {1, 4, 16, 30, 29, 18, 100, 2, 43, 1};

    cout << "Intial Array : ";
    print_ar(ar, 10);

    shell_sort(ar, 10);

    cout << "Sorted Array : ";
    print_ar(ar, 10);

    return 0;
}


#include<iostream>

using namespace std;

int main()
{
    int a[100], i, n, p, k, min, loc, temp;

    cout << "\n------------ SELECTION SORT ------------ \n\n";
    cout << "Enter No. of Elements=";
    cin >> n;

    cout << "\nEnter Elements=\n";
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (p = 1; p <= n - 1; p++)
    {
        min = a[p];
        loc = p;

        for (k = p + 1; k <= n; k++)
        {
            if (min > a[k])
            {
                min = a[k];
                loc = k;
            }
        }
        temp = a[p];
        a[p] = a[loc];
        a[loc] = temp;
    }

    cout << "\nAfter Sorting : \n";

    for (i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}


#include<iostream>

using namespace std;

// A utility function to get maximum value in arr[]
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}

// A function to do counting sort of arr[] according to
// the digit represented by exp.
void countSort(int arr[], int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = {0};

    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] now contains actual
    // position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// The main function to that sorts arr[] of size n using 
// Radix Sort
void radixsort(int arr[], int n)
{
    // Find the maximum number to know number of digits
    int m = getMax(arr, n);

    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n,exp);
}

// A utility function to print an array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Driver program to test above functions
int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    radixsort(arr, n);
    print(arr, n);
    return 0;
}


#include<iostream>

using namespace std;

int Partition(int a[], int beg, int end)
{
    int p = beg, pivot = a[beg], loc;

    for (loc = beg + 1; loc <= end; loc++)
    {
        if (pivot > a[loc])
        {
            a[p] = a[loc];
            a[loc] = a[p + 1];
            a[p + 1] = pivot;

            p = p + 1;
        }
    }
    return p;
}


void QuickSort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int p = Partition(a, beg, end);
        QuickSort(a, beg, p - 1);
        QuickSort(a, p + 1, end);
    }
}


int main()
{
    int a[100], i, n, beg, end;

    cout << "\n------- QUICK SORT -------\n\n";
    cout << "Enter the No. of Elements : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    beg = 1;
    end = n;

    QuickSort(a, beg, end);

    cout << "\nAfter Sorting : \n";
    for (i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}


#include<iostream>

using namespace std;

// A utility function to get maximum value in arr[]
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}

// A function to do counting sort of arr[] according to
// the digit represented by exp.
void countSort(int arr[], int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = {0};

    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] now contains actual
    // position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// The main function to that sorts arr[] of size n using 
// Radix Sort
void radixsort(int arr[], int n)
{
    // Find the maximum number to know number of digits
    int m = getMax(arr, n);

    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n,exp);
}

// A utility function to print an array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Driver program to test above functions
int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    radixsort(arr, n);
    print(arr, n);
    return 0;
}


#include<iostream>
#include<vector>

using namespace std;

void bubble_sort(vector<int> &a)
{
    for (int i = a.size(); i > 0; i--)
    {
        for (int j = 0, k = 1; k < i; j++, k++)
        {
            if (a[j] > a[k])
            {
                int swap = a[j];
                a[j] = a[k];
                a[k] = swap;
            }
        }
    }
}

int main()
{
    int alen, val;
    vector<int> a;

    cout << "Enter the number of elements : ";
    cin >> alen;
    for (int i = 0; i < alen; i++)
    {
        cin >> val;
        a.push_back(val);
    }

    bubble_sort(a);

    cout << "List of sorted elements: " << endl;
    for (int i = 0; i < alen; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}


#include<iostream>

using namespace std;

int main()
{
    int a[100], i, n, p, ptr, temp;

    cout << "\n------------ INSERTION SORT ------------ \n\n";
    cout << "Enter No. of Elements : ";
    cin >> n;

    cout << "\nEnter Elements : \n";
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    a[0] = 0;

    for (p = 2; p <= n; p++)
    {
        temp = a[p];
        ptr = p - 1;

        while (temp < a[ptr])
        {
            a[ptr + 1] = a[ptr];
            ptr--;
        }

        a[ptr + 1] = temp;
    }

    cout << "\nAfter Sorting : \n";
    for (i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}



#include <iostream>

#define MAXSIZE 100
using namespace std;

class linearsort
{
    int arr[MAXSIZE], n;

public:
    void getdataelements();

    void showdataelements();

    void sortelements();
};

void linearsort::getdataelements()
{
    cout << "How many elements you want : ";
    cin >> n;

    cout << "enter elements :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void linearsort::showdataelements()
{
    cout << "\nDisplay sorted elements\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}

void linearsort::sortelements()
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

//main method
int main()
{
    cout << "\nLinear Sort Method\n\n";
    linearsort obj;
    obj.getdataelements();
    obj.sortelements();
    obj.showdataelements();

    return 0;
}



#include <iostream>

using namespace std;

void merge(int *, int, int, int);

void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, high, mid);
    }
    return;
}

void merge(int *a, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}

int main()
{
    int a[20], i;
    cout << "Enter 5 elements to sort : \n";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    mergesort(a, 0, 4);

    cout << "sorted array : \n";
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}