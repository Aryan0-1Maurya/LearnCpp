#include <iostream>

using namespace std;

class DequeEmptyException {
public:
    DequeEmptyException()
    {
        cout << "Deque empty" << endl;
    }
};


class Node {
public:
    int data;
    Node *next;
    Node *prev;
};

class Deque {
private:
    Node *front;
    Node *rear;
    int count;

public:
    Deque()
    {
        front = NULL;
        rear = NULL;
        count = 0;
    }

    void InsertFront(int element)
    {
        // Create a new node
        Node *tmp = new Node();
        tmp->data = element;
        tmp->next = NULL;
        tmp->prev = NULL;

        if (isEmpty())
        {
            // Add the first element
            front = rear = tmp;
        }
        else
        {
            // Prepend to the list and fix links
            tmp->next = front;
            front->prev = tmp;
            front = tmp;
        }

        count++;
    }int RemoveFront()
    {
        if (isEmpty())
        {
            throw new DequeEmptyException();
        }

        // Data in the front node
        int ret = front->data;

        // Delete the front node and fix the links
        Node *tmp = front;
        if (front->next != NULL)
        {
            front = front->next;
            front->prev = NULL;
        }
        else
        {
            front = NULL;
        }
        count--;
        delete tmp;

        return ret;
    }

    void InsertBack(int element)
    {
        // Create a new node
        Node *tmp = new Node();
        tmp->data = element;
        tmp->next = NULL;
        tmp->prev = NULL;

        if (isEmpty())
        {
            // Add the first element
            front = rear = tmp;
        }
        else
        {
            // Append to the list and fix links
            rear->next = tmp;
            tmp->prev = rear;
            rear = tmp;
        }

        count++;
    }

    int RemoveBack()
    {
        if (isEmpty())
        {
            throw new DequeEmptyException();
        }

        // Data in the rear node
        int ret = rear->data;Node *tmp = rear;
        if (rear->prev != NULL)
        {
            rear = rear->prev;
            rear->next = NULL;
        }
        else
        {
            rear = NULL;
        }
        count--;
        delete tmp;

        return ret;
    }

    int Front()
    {
        if (isEmpty())
            throw new DequeEmptyException();

        return front->data;
    }

    int Back()
    {
        if (isEmpty())
            throw new DequeEmptyException();

        return rear->data;
    }

    int Size()
    {
        return count;
    }

    bool isEmpty()
    {
        return count == 0 ? true : false;
    }
};

int main()
{
    // Stack behavior using a general dequeue
    Deque qu;
    try{
        if (qu.isEmpty())
        {
            cout << "Deque is empty" << endl;
        }

        // Push elements
        qu.InsertBack(1500);
        qu.InsertBack(2020);
        qu.InsertBack(1300);
        qu.InsertBack(100);
        qu.InsertBack(900);
        qu.InsertBack(10);

        // Size of queue
        cout << "Size of dequeue = " << qu.Size() << endl;

        // Pop elements
        cout << qu.RemoveBack() << endl;
        cout << qu.RemoveBack() << endl;
        cout << qu.RemoveBack() << endl;
    }
    catch (...)
    {
        cout << "Some exception occured" << endl;
    }

    // Queue behavior using a general dequeue
    Deque dq1;
    try
    {
        if (dq1.isEmpty())
        {
            cout << "Deque is empty" << endl;
        }

        // Push elements
        dq1.InsertBack(4100);
        dq1.InsertBack(2400);
        dq1.InsertBack(3050);
        dq1.InsertBack(100);
        dq1.InsertBack(900);
        dq1.InsertBack(10);
        // Size of queue
        cout << "Size of dequeue = " << dq1.Size() << endl;

        // Pop elements
        cout << dq1.RemoveFront() << endl;
        cout << dq1.RemoveFront() << endl;
        cout << dq1.RemoveFront() << endl;
    }
    catch (...)
    {
        cout << "Some exception occured" << endl;
    }

    return 0;
}


#include<iostream>

using namespace std;

class nodecreation {
public:
    int data;

    class nodecreation *next;

    class nodecreation *prev;
};

class dqueueoperation : public nodecreation {
    nodecreation *head, *tail;
    int top1, top2;

public:
    dqueueoperation()
    {
        top1 = 0;
        top2 = 0;
        head = NULL;
        tail = NULL;
    }

    void push(int x)
    {
        nodecreation *temp;
        int ch;
        if (top1 + top2 >= 5)
        {
            cout << "\ndqueue overflow!!!";
            return;
        }
        if (top1 + top2 == 0)
        {
            head = new nodecreation;
            head->data = x;
            head->next = NULL;
            head->prev = NULL;
            tail = head;
            top1++;
        }
        else
        {
            cout << "\nAdd element 1.FIRST 2.LAST\nEnter your choice : ";
            cin >> ch;

            if (ch == 1)
            {
                top1++;
                temp = new nodecreation;
                temp->data = x;
                temp->next = head;
                temp->prev = NULL;
                head->prev = temp;
                head = temp;
            }
            else
            {
                top2++;
                temp = new nodecreation;
                temp->data = x;
                temp->next = NULL;
                temp->prev = tail;
                tail->next = temp;
                tail = temp;
            }
        }
    }void pop()
    {
        int ch;
        cout << "\nDelete \n1.First Node \n2.Last Node\nEnter your choice : ";
        cin >> ch;
        if (top1 + top2 <= 0)
        {
            cout << "\nDqueue under flow!!!!";
            return;
        }
        if (ch == 1)
        {
            head = head->next;
            head->prev = NULL;
            top1--;
        }
        else
        {
            top2--;
            tail = tail->prev;
            tail->next = NULL;
        }
    }

    void display()
    {
        int ch;
        nodecreation *temp;
        cout << "\nDisplay from \n1.Staring \n2.Ending \nEnter your choice : ";
        cin >> ch;
        if (top1 + top2 <= 0)
        {
            cout << "\nunder flow";
            return;
        }
        if (ch == 1)
        {
            temp = head;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
        else
        {temp = tail;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->prev;
            }
        }
    }
};

int main()
{
    dqueueoperation d1;
    int ch;
    cout << "Enter Dequeue Operation you want to perform" << endl;
    cout << "1. Insert" << endl;
    cout << "2. Delete" << endl;
    cout << "3. Display" << endl;
    cout << "4. Exit" << endl;
    while (1)
    {

        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
            case 1:
                cout << "\nEnter element : ";
                cin >> ch;
                d1.push(ch);
                break;

            case 2:
                d1.pop();
                break;

            case 3:
                d1.display();
                break;
            case 4:
                return 0;
        }
    }
}

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

// Node Declaration
struct node
{
    int info;
    struct node *next;
    struct node *prev;
}*start;

class double_llist
{
    public:
        void create_list(int value);
        void add_begin(int value);
        void add_after(int value, int position);
        void delete_element(int value);
        void search_element(int value);
        void display_dlist();
        void count();
        void reverse();
        double_llist()
        {
            start = NULL;
        }
};

int main()
{
    int choice, element, position;
    double_llist dl;

    cout<<endl<<"Operations on Doubly linked list"<<endl;
    cout<<"1.Create Node"<<endl;
    cout<<"2.Add at begining"<<endl;
    cout<<"3.Add after position"<<endl;
    cout<<"4.Delete"<<endl;
    cout<<"5.Display"<<endl;
    cout<<"6.Count"<<endl;
    cout<<"7.Reverse"<<endl;
    cout<<"8.Quit"<<endl;
    while (1)
    {
        cout<<"Enter your choice : ";
        cin>>choice;
        switch ( choice )
        {
        case 1:
            cout<<"Enter the element: ";
            cin>>element;
            dl.create_list(element);
            cout<<endl;
            break;
        case 2:cout<<"Enter the element: ";
            cin>>element;
            dl.add_begin(element);
            cout<<endl;
            break;
        case 3:
            cout<<"Enter the element: ";
            cin>>element;
            cout<<"Insert Element after postion: ";
            cin>>position;
            dl.add_after(element, position);
            cout<<endl;
            break;
        case 4:
            if (start == NULL)
            {
                cout<<"List empty,nothing to delete"<<endl;
                break;
            }
            cout<<"Enter the element for deletion: ";
            cin>>element;
            dl.delete_element(element);
            cout<<endl;
            break;
        case 5:
            dl.display_dlist();
            cout<<endl;
            break;
        case 6:
            dl.count();
            break;
        case 7:
            if (start == NULL)
            {
                cout<<"List empty,nothing to reverse"<<endl;
                break;
            }
            dl.reverse();
            cout<<endl;
            break;
        case 8:
            exit(1);
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
    return 0;
}

void double_llist::create_list(int value)
{
    struct node *s, *temp;
    temp = new(struct node);
    temp->info = value;
    temp->next = NULL;
    if (start == NULL)
    {
        temp->prev = NULL;
        start = temp;
    }else
    {
        s = start;
        while (s->next != NULL)
            s = s->next;
        s->next = temp;
        temp->prev = s;
    }
}

void double_llist::add_begin(int value)
{
    if (start == NULL)
    {
        cout<<"First Create the list."<<endl;
        return;
    }
    struct node *temp;
    temp = new(struct node);
    temp->prev = NULL;
    temp->info = value;
    temp->next = start;
    start->prev = temp;
    start = temp;
    cout<<"Element Inserted"<<endl;
}

void double_llist::add_after(int value, int pos)
{
    if (start == NULL)
    {
        cout<<"First Create the list."<<endl;
        return;
    }
    struct node *tmp, *q;
    int i;
    q = start;
    for (i = 0;i < pos - 1;i++)
    {
        q = q->next;
        if (q == NULL)
        {
            cout<<"There are less than ";
            cout<<pos<<" elements."<<endl;
            return;
        }
    }
    tmp = new(struct node);
    tmp->info = value;
    if (q->next == NULL)
    {
        q->next = tmp;
        tmp->next = NULL;
        tmp->prev = q;
    }
    else
    {
        tmp->next = q->next;
        tmp->next->prev = tmp;
        q->next = tmp;
        tmp->prev = q;
    }cout<<"Element Inserted"<<endl;
}

void double_llist::delete_element(int value)
{
    struct node *tmp, *q;
     /*first element deletion*/
    if (start->info == value)
    {
        tmp = start;
        start = start->next;
        start->prev = NULL;
        cout<<"Element Deleted"<<endl;
        free(tmp);
        return;
    }
    q = start;
    while (q->next->next != NULL)
    {
        /*Element deleted in between*/
        if (q->next->info == value)
        {
            tmp = q->next;
            q->next = tmp->next;
            tmp->next->prev = q;
            cout<<"Element Deleted"<<endl;
            free(tmp);
            return;
        }
        q = q->next;
    }
     /*last element deleted*/
    if (q->next->info == value)
    {
        tmp = q->next;
        free(tmp);
        q->next = NULL;
        cout<<"Element Deleted"<<endl;
        return;
    }
    cout<<"Element "<<value<<" not found"<<endl;
}

void double_llist::display_dlist()
{
    struct node *q;
    if (start == NULL)
    {
        cout<<"List empty,nothing to display"<<endl;
        return;
    }
    q = start;
    cout<<"The Doubly Link List is :"<<endl;
    while (q != NULL)
    {
        cout<<q->info<<" <-> ";
        q = q->next;
    }
    cout<<"NULL"<<endl;
}void double_llist::count()
{
    struct node *q = start;
    int cnt = 0;
    while (q != NULL)
    {
        q = q->next;
        cnt++;
    }
    cout<<"Number of elements are: "<<cnt<<endl;
}

void double_llist::reverse()
{
    struct node *p1, *p2;
    p1 = start;
    p2 = p1->next;
    p1->next = NULL;
    p1->prev = p2;
    while (p2 != NULL)
    {
        p2->prev = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p2->prev;
    }
    start = p1;
    cout<<"List Reversed"<<endl;
}

#include <iostream>

using namespace std;

void max_heapify(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
    {
        if (j < n && a[j + 1] > a[j])
            j = j + 1;
        if (temp > a[j])
            break;
        else if (temp <= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j / 2] = temp;
    return;
}

void heapsort(int *a, int n)
{
    int i, temp;
    for (i = n; i >= 2; i--)
    {
        temp = a[i];
        a[i] = a[1];
        a[1] = temp;
        max_heapify(a, 1, i - 1);
    }
}

void build_maxheap(int *a, int n)
{
    int i;
    for (i = n / 2; i >= 1; i--)
    {
        max_heapify(a, i, n);
    }
}

int main()
{
    int n, i, x;
    cout << "Enter no of elements of array : ";
    cin >> n;
    int a[20];
    for (i = 1; i <= n; i++)
    {
        cout << "Enter element " << (i) << " : ";
        cin >> a[i];
    }
    build_maxheap(a, n);
    heapsort(a, n);
    cout << "Heap Sort Output" << endl;
    for (i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a[100], n, i, j, k, temp;
    cout << "Enter no of element of array : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter " << i << " element : ";
        cin >> a[i];
    }
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            if (a[j] < a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
            else
                break;
        }
    }

    cout << "Insertion Sort Output" << endl;
    for (k = 0; k < n; k++)
    {
        cout << a[k] << endl;
    }

    return 0;
}


#include<iostream>

using namespace std;

int main()
{
    int a[100], i, n, item, s = 0;

    cout << "\n------------ LINEAR SEARCH ------------ \n\n";
    cout << "Enter No. of Elements=";
    cin >> n;

    cout << "\nEnter Elements=\n";
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    cout << "\nEnter Element you want to Search=";
    cin >> item;

    for (i = 1; i <= n; i++)
    {
        if (a[i] == item)
        {
            cout << "\nElement is Found at Location : " << i;
            s = 1;
            break;
        }
    }

    if (s == 0)
    {
        cout << "Data is Not Found";
    }
    return 0;
}#include <iostream>

using namespace std;

struct node {
    int fr, to, cost;
} p[6];

int c = 0, dist1 = 0, dist = 0;

void primsalgo(int *ptr, int b[][7], int i, int j)
{
    ptr[i] = 1;
    while (c < 6)
    {
        int min = 999;
        for (int i = 0; i < 7; i++)
        {
            if (ptr[i] == 1)
            {
                for (int j = 0; j < 7;)
                {
                    if (b[i][j] >= min || b[i][j] == 0)
                    {
                        j++;
                    }
                    else if (b[i][j] < min)
                    {
                        min = b[i][j];
                        dist = i;
                        dist1 = j;
                    }
                }
            }
        }
        ptr[dist1] = 1;
        p[c].fr = dist;
        p[c].to = dist1;
        p[c].cost = min;
        c++;
        b[dist][dist1] = b[dist1][dist] = 1000;
    }
    for (int k = 0; k < 6; k++)
    {
        cout << "source node : " << p[k].fr << endl;
        cout << "destination node : " << p[k].to << endl;
        cout << "weight of node : " << p[k].cost << endl;
    }
}

int main()
{
    int a[7];
    for (int i = 0; i < 7; i++)
    {
        a[i] = 0;
    }
    int b[7][7];
    for (int i = 0; i < 7; i++)
    {
        cout << "enter values for " << (i + 1) << " row : " << endl;
        for (int j = 0; j < 7; j++)
        {
            cin >> b[i][j];
        }
    }
    primsalgo(a, b, 0, 0);

    return 0;
}#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;


struct node {
    int priority;
    int info;
    struct node *link;
};

class Priority_Queue {
private:
    node *front;
public:
    Priority_Queue()
    {
        front = NULL;
    }

    void insert(int item, int priority)
    {
        node *tmp, *q;
        tmp = new node;
        tmp->info = item;
        tmp->priority = priority;
        if (front == NULL || priority < front->priority)
        {
            tmp->link = front;
            front = tmp;
        }
        else
        {
            q = front;
            while (q->link != NULL && q->link->priority <= priority)
                q = q->link;
            tmp->link = q->link;
            q->link = tmp;
        }
    }

    void del()
    {
        node *tmp;
        if (front == NULL)
            cout << "Queue Underflow\n";
        else
        {
            tmp = front;
            cout << "Deleted item is: " << tmp->info << endl;
            front = front->link;
            free(tmp);
        }
    }void display()
    {
        node *ptr;
        ptr = front;
        if (front == NULL)
            cout << "Queue is empty\n";
        else
        {
            cout << "Queue is :\n";
            cout << "Priority Item\n";
            while (ptr != NULL)
            {
                cout << ptr->priority << " " << ptr->info << endl;
                ptr = ptr->link;
            }
        }
    }
};

int main()
{
    int choice, item, priority;
    Priority_Queue pq;
    cout << "1.Insert\n";
    cout << "2.Delete\n";
    cout << "3.Display\n";
    cout << "4.Quit\n";
    do
    {
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Input the item value to be added in the queue : ";
                cin >> item;
                cout << "Enter its priority : ";
                cin >> priority;
                pq.insert(item, priority);
                break;
            case 2:
                pq.del();
                break;
            case 3:
                pq.display();
                break;
            case 4:
                break;
            default :
                cout << "Wrong choice\n";
        }
    }
    while (choice != 4);
    return 0;
}
#include<iostream>
#include<cstdlib>

using namespace std;

struct node {
    int info;
    struct node *link;
} *top;


class stack_list {

public:
    node *push(node *, int);

    node *pop(node *);

    void traverse(node *);

    stack_list()
    {
        top = NULL;
    }
};

int main()
{
    int choice, item;
    stack_list sl;

    cout << "Operations on Stack" << endl;
    cout << "\n-------------" << endl;
    cout << "1.Push Element into the Stack" << endl;
    cout << "2.Pop Element from the Stack" << endl;
    cout << "3.Traverse the Stack" << endl;
    cout << "4.Quit" << endl;
    while (1)
    {
        cout << "\nEnter your Choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Enter value to be pushed into the stack: ";
                cin >> item;
                top = sl.push(top, item);
                break;
            case 2:
                top = sl.pop(top);
                break;
case 3:
                sl.traverse(top);
                break;
            case 4:
                exit(1);
            default:
                cout << "Wrong Choice" << endl;
        }
    }
}

node *stack_list::push(node *top, int item)
{
    node *tmp;
    tmp = new (struct node);
    tmp->info = item;
    tmp->link = top;
    top = tmp;
    return top;
}

node *stack_list::pop(node *top)
{
    node *tmp;
    if (top == NULL)
        cout << "Stack is Empty" << endl;
    else
    {
        tmp = top;
        cout << "Element Popped: " << tmp->info << endl;
        top = top->link;
        free(tmp);
    }
    return top;
}

void stack_list::traverse(node *top)
{
    node *ptr;
    ptr = top;
    if (top == NULL)
        cout << "Stack is empty" << endl;
    else
    {
        cout << "Stack elements :" << endl;
        while (ptr != NULL)
        {
            cout << ptr->info << endl;
            ptr = ptr->link;
        }
    }
}