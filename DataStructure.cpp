#include<iostream>

using namespace std;

int main()
{
    int a[100], n, i, beg, end, mid, item;

    cout << "\n------------ BINARY SEARCH ------------ \n\n";
    cout << "Enter No. of Elements= ";
    cin >> n;

    cout << "\nEnter Elements in Sorted Order=\n";
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    cout << "\nEnter Item you want to Search= ";
    cin >> item;

    beg = 1;
    end = n;

    mid = (beg + end) / 2;

    while (beg <= end && a[mid] != item)
    {
        if (a[mid] < item)
            beg = mid + 1;
        else
            end = mid - 1;

        mid = (beg + end) / 2;
    }

    if (a[mid] == item)
    {
        cout << "\nElement found at location : " << mid;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}



#include <iostream>
#include <cstdlib>

using namespace std;

class BinarySearchTree {
private:
    struct tree_node {
        tree_node *left;
        tree_node *right;
        int data;
    };

    tree_node *root;

public:
    BinarySearchTree()
    {
        root = NULL;
    }

    bool isEmpty() const
    { return root == NULL; }

    void print_inorder();

    void inorder(tree_node *);

    void print_preorder();

    void preorder(tree_node *);

    void print_postorder();

    void postorder(tree_node *);

    void insert(int);

    void remove(int);

};

// Smaller elements go left
// larger elements go right
void BinarySearchTree::insert(int d)
{
    tree_node *t = new tree_node;
    tree_node *parent;
    t->data = d;
    t->left = NULL;
    t->right = NULL;
    parent = NULL;
    // is this a new tree?
    if (isEmpty()) root = t;
    else
    {
        //Note: ALL insertions are as leaf nodes
        tree_node *curr;
        curr = root;
        // Find the Node's parent
        while (curr)
        {
            parent = curr;
            if (t->data > curr->data) curr = curr->right;
            else curr = curr->left;
        }if (t->data < parent->data)
            parent->left = t;
        else
            parent->right = t;
    }
}

void BinarySearchTree::remove(int d)
{
    //Locate the element
    bool found = false;
    if (isEmpty())
    {
        cout << " This Tree is empty! " << endl;
        return;
    }
    tree_node *curr;
    tree_node *parent;
    curr = root;
    while (curr != NULL)
    {
        if (curr->data == d)
        {
            found = true;
            break;
        }
        else
        {
            parent = curr;
            if (d > curr->data) curr = curr->right;
            else curr = curr->left;
        }
    }
    if (!found)
    {
        cout << " Data not found! " << endl;
        return;
    }if ((curr->left == NULL && curr->right != NULL) || (curr->left != NULL
                                                        && curr->right == NULL))
    {
        if (curr->left == NULL && curr->right != NULL)
        {
            if (parent->left == curr)
            {
                parent->left = curr->right;
                delete curr;
            }
            else
            {
                parent->right = curr->right;
                delete curr;
            }
        }
        else // left child present, no right child
        {
            if (parent->left == curr)
            {
                parent->left = curr->left;
                delete curr;
            }
            else
            {
                parent->right = curr->left;
                delete curr;
            }
        }
        return;
    }

    //We're looking at a leaf node
    if (curr->left == NULL && curr->right == NULL)
    {
        if (parent->left == curr) parent->left = NULL;
        else parent->right = NULL;
        delete curr;
        return;
    }


    //Node with 2 children
    // replace node with smallest value in right subtree
    if (curr->left != NULL && curr->right != NULL)
    {
        tree_node *chkr;
        chkr = curr->right;
        if ((chkr->left == NULL) && (chkr->right == NULL))
        {
            curr = chkr;
            delete chkr;
            curr->right = NULL;
        }
        else // right child has children
        {if ((curr->right)->left != NULL)
            {
                tree_node *lcurr;
                tree_node *lcurrp;
                lcurrp = curr->right;
                lcurr = (curr->right)->left;
                while (lcurr->left != NULL)
                {
                    lcurrp = lcurr;
                    lcurr = lcurr->left;
                }
                curr->data = lcurr->data;
                delete lcurr;
                lcurrp->left = NULL;
            }
            else
            {
                tree_node *tmp;
                tmp = curr->right;
                curr->data = tmp->data;
                curr->right = tmp->right;
                delete tmp;
            }

        }
        return;
    }

}

void BinarySearchTree::print_inorder()
{
    inorder(root);
}

void BinarySearchTree::inorder(tree_node *p)
{
    if (p != NULL)
    {
        if (p->left) inorder(p->left);
        cout << " " << p->data << " ";
        if (p->right) inorder(p->right);
    }
    else return;
}void BinarySearchTree::print_preorder()
{
    preorder(root);
}

void BinarySearchTree::preorder(tree_node *p)
{
    if (p != NULL)
    {
        cout << " " << p->data << " ";
        if (p->left) preorder(p->left);
        if (p->right) preorder(p->right);
    }
    else return;
}

void BinarySearchTree::print_postorder()
{
    postorder(root);
}

void BinarySearchTree::postorder(tree_node *p)
{
    if (p != NULL)
    {
        if (p->left) postorder(p->left);
        if (p->right) postorder(p->right);
        cout << " " << p->data << " ";
    }
    else return;
}

int main()
{
    BinarySearchTree b;
    int ch, tmp, tmp1;

    cout << " Binary Search Tree Operations " << endl;
    cout << " ----------------------------- " << endl;
    cout << " 1. Insertion/Creation " << endl;
    cout << " 2. In-Order Traversal " << endl;
    cout << " 3. Pre-Order Traversal " << endl;
    cout << " 4. Post-Order Traversal " << endl;
    cout << " 5. Removal " << endl;
    cout << " 6. Exit " << endl;
while (1)
    {
        cout << " Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
            case 1 :
                cout << " Enter Number to be inserted : ";
                cin >> tmp;
                b.insert(tmp);
                break;
            case 2 :
                cout << endl;
                cout << " In-Order Traversal " << endl;
                cout << " -------------------" << endl;
                b.print_inorder();
                break;
            case 3 :
                cout << endl;
                cout << " Pre-Order Traversal " << endl;
                cout << " -------------------" << endl;
                b.print_preorder();
                break;
            case 4 :
                cout << endl;
                cout << " Post-Order Traversal " << endl;
                cout << " --------------------" << endl;
                b.print_postorder();
                break;
            case 5 :
                cout << " Enter data to be deleted : ";
                cin >> tmp1;
                b.remove(tmp1);
                break;
            case 6 :
                return 0;
        }
    }
}



#include <iostream>

#define MAX 5
using namespace std;

class Circular_Queue
{
    
private:
    int *cqueue_arr;
    int front, rear;
    
public:
    Circular_Queue()
    {
        cqueue_arr = new int[MAX];
        rear = front = -1;
    }

    void insert(int item)
    {
        if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
        {
            cout << "Queue Overflow \n";
            return;
        }
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            if (rear == MAX - 1)
                rear = 0;
            else
                rear = rear + 1;
        }
        cqueue_arr[rear] = item;
    }

    void del()
    {
        if (front == -1)
        {
            cout << "Queue Underflow\n";
            return;
        }
        cout << "Element deleted from queue is : " << cqueue_arr[front] << endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            if (front == MAX - 1)
                front = 0;
            else
                front = front + 1;
        }
    }void display()
    {
        int front_pos = front, rear_pos = rear;
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements :\n";
        if (front_pos <= rear_pos)
        {
            while (front_pos <= rear_pos)
            {
                cout << cqueue_arr[front_pos] << " ";
                front_pos++;
            }
        }
        else
        {
            while (front_pos <= MAX - 1)
            {
                cout << cqueue_arr[front_pos] << " ";
                front_pos++;
            }
            front_pos = 0;
            while (front_pos <= rear_pos)
            {
                cout << cqueue_arr[front_pos] << " ";
                front_pos++;
            }
        }
        cout << endl;
    }
};

int main()
{
    int choice, item;
    Circular_Queue cq;
    cout << "1.Insert\n";
    cout << "2.Delete\n";
    cout << "3.Display\n";
    cout << "4.Quit\n";do
    {
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Input the element for insertion in queue : ";
                cin >> item;
                cq.insert(item);
                break;
            case 2:
                cq.del();
                break;
            case 3:
                cq.display();
                break;
            case 4:
                break;
            default:
                cout << "Wrong choice\n";
        }
    }
    while (choice != 4);
    
    return 0;
}

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void push1(int);
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
void create();

int st1[100], st2[100];
int top1 = -1, top2 = -1;
int count = 0;

int main()
{
    int ch;

    cout<<"1-enter element into queue ";
    // printf("\n2 - Dequeu element from queue");
    cout<<"\n2-display elements ";
    cout<<"\n3-exit from execution";
    create();
    while (1)
    {
        cout<<"\n\nenter your choice :";
        cin>>ch;

        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        default:
            cout<<"wrong choice";
        }
    }
}

/*Function to create a queue*/
void create()
{
    top1 = top2 = -1;
}void push1(int data)
{
    st1[++top1] = data;
}

/*Function to pop the element from the stack*/
int pop1()
{
    return(st1[top1--]);
}

/*Function to push an element on to stack*/
void push2(int data)
{
    st2[++top2] = data;
}

/*Function to pop an element from the stack*/

int pop2()
{
    return(st2[top2--]);
}

/*Function to add an element into the queue using stack*/
void enqueue()
{
    int data, i;

    cout<<"enter data into queue :";
    cin>>data;
    push1(data);
    count++;
}

/*Function to display the elements in the stack*/

void display()
{
    int i;

    for (i = 0;i <= top1;i++)
    {
        cout<<st1[i]<<"\t";

    }
}#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct node
{
    int info;
    struct node *next;
}*start;

class single_llist
{
    public:
        node* create_node(int);
        void insert_begin();
        void insert_pos();
        void insert_last();
        void delete_pos();
        void sort();
        void search();
        void update();
        void reverse();
        void display();
        single_llist()
        {
            start = NULL;
        }
};

main()
{
    int choice, nodes, element, position, i;
    single_llist sl;
    start = NULL;
    while (1)
    {
        cout<<endl<<"---------------------------------"<<endl;
        cout<<endl<<"Operations on singly linked list"<<endl;
        cout<<endl<<"---------------------------------"<<endl;
        cout<<"1.Insert Node at beginning"<<endl;
        cout<<"2.Insert node at last"<<endl;
        cout<<"3.Insert node at position"<<endl;
        cout<<"4.Sort Link List"<<endl;
        cout<<"5.Delete a Particular Node"<<endl;
        cout<<"6.Update Node Value"<<endl;
        cout<<"7.Search Element"<<endl;
        cout<<"8.Display Linked List"<<endl;
        cout<<"9.Reverse Linked List "<<endl;
        cout<<"10.Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;switch(choice)
        {
        case 1:
            cout<<"Inserting Node at Beginning: "<<endl;
            sl.insert_begin();
            cout<<endl;
            break;
        case 2:
            cout<<"Inserting Node at Last: "<<endl;
            sl.insert_last();
            cout<<endl;
            break;
        case 3:
            cout<<"Inserting Node at a given position:"<<endl;
            sl.insert_pos();
            cout<<endl;
            break;
        case 4:
            cout<<"Sort Link List: "<<endl;
            sl.sort();
            cout<<endl;
            break;
        case 5:
            cout<<"Delete a particular node: "<<endl;
            sl.delete_pos();
            break;
        case 6:
            cout<<"Update Node Value:"<<endl;
            sl.update();
            cout<<endl;
            break;
        case 7:
            cout<<"Search element in Link List: "<<endl;
            sl.search();
            cout<<endl;
            break;
        case 8:
            cout<<"Display elements of link list"<<endl;
            sl.display();
            cout<<endl;
            break;
        case 9:
            cout<<"Reverse elements of Link List"<<endl;
            sl.reverse();
            cout<<endl;
            break;
        case 10:
            cout<<"Exiting..."<<endl;
            exit(1);
            break;
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
}node *single_llist::create_node(int value)
{
    struct node *temp, *s;
    temp = new(struct node);
    if (temp == NULL)
    {
        cout<<"Memory not allocated "<<endl;
        return 0;
    }
    else
    {
        temp->info = value;
        temp->next = NULL;
        return temp;
    }
}

void single_llist::insert_begin()
{
    int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    struct node *temp, *p;
    temp = create_node(value);
    if (start == NULL)
    {
        start = temp;
        start->next = NULL;
    }
    else
    {
        p = start;
        start = temp;
        start->next = p;
    }
    cout<<"Element Inserted at beginning"<<endl;
}

void single_llist::insert_last()
{
    int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    struct node *temp, *s;
    temp = create_node(value);
    s = start;
    while (s->next != NULL)
    {
        s = s->next;
    }
    temp->next = NULL;
    s->next = temp;
    cout<<"Element Inserted at last"<<endl;
}void single_llist::insert_pos()
{
    int value, pos, counter = 0;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    struct node *temp, *s, *ptr;
    temp = create_node(value);
    cout<<"Enter the postion at which node to be inserted: ";
    cin>>pos;
    int i;
    s = start;
    while (s != NULL)
    {
        s = s->next;
        counter++;
    }
    if (pos == 1)
    {
        if (start == NULL)
        {
            start = temp;
            start->next = NULL;
        }
        else
        {
            ptr = start;
            start = temp;
            start->next = ptr;
        }
    }
    else if (pos > 1 && pos <= counter)
    {
        s = start;
        for (i = 1; i < pos; i++)
        {
            ptr = s;
            s = s->next;
        }
        ptr->next = temp;
        temp->next = s;
    }
    else
    {
        cout<<"Positon out of range"<<endl;
    }
}

void single_llist::sort()
{
    struct node *ptr, *s;
    int value;
    if (start == NULL)
    {
        cout<<"The List is empty"<<endl;
        return;
    }
    ptr = start;while (ptr != NULL)
    {
        for (s = ptr->next;s !=NULL;s = s->next)
        {
            if (ptr->info > s->info)
            {
                value = ptr->info;
                ptr->info = s->info;
                s->info = value;
            }
        }
        ptr = ptr->next;
    }
}

void single_llist::delete_pos()
{
    int pos, i, counter = 0;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the position of value to be deleted: ";
    cin>>pos;
    struct node *s, *ptr;
    s = start;
    if (pos == 1)
    {
        start = s->next;
    }
    else
    {
        while (s != NULL)
        {
            s = s->next;
            counter++;
        }
        if (pos > 0 && pos <= counter)
        {
            s = start;
            for (i = 1;i < pos;i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
        }
        else
        {
            cout<<"Position out of range"<<endl;
        }
        free(s);
        cout<<"Element Deleted"<<endl;
    }
}

void single_llist::update()
{
    int value, pos, i;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }cout<<"Enter the node postion to be updated: ";
    cin>>pos;
    cout<<"Enter the new value: ";
    cin>>value;
    struct node *s, *ptr;
    s = start;
    if (pos == 1)
    {
        start->info = value;
    }
    else
    {
        for (i = 0;i < pos - 1;i++)
        {
            if (s == NULL)
            {
                cout<<"There are less than "<<pos<<" elements";
                return;
            }
            s = s->next;
        }
        s->info = value;
    }
    cout<<"Node Updated"<<endl;
}

void single_llist::search()
{
    int value, pos = 0;
    bool flag = false;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the value to be searched: ";
    cin>>value;
    struct node *s;
    s = start;
    while (s != NULL)
    {
        pos++;
        if (s->info == value)
        {
            flag = true;
            cout<<"Element "<<value<<" is found at position "<<pos<<endl;
        }
        s = s->next;
    }
    if (!flag)
        cout<<"Element "<<value<<" not found in the list"<<endl;
}void single_llist::reverse()
{
    struct node *ptr1, *ptr2, *ptr3;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    if (start->next == NULL)
    {
        return;
    }
    ptr1 = start;
    ptr2 = ptr1->next;
    ptr3 = ptr2->next;
    ptr1->next = NULL;
    ptr2->next = ptr1;
    while (ptr3 != NULL)
    {
        ptr1 = ptr2;
        ptr2 = ptr3;
        ptr3 = ptr3->next;
        ptr2->next = ptr1;
    }
    start = ptr2;
}

void single_llist::display()
{
    struct node *temp;
    if (start == NULL)
    {
        cout<<"The List is Empty"<<endl;
        return;
    }
    temp = start;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}