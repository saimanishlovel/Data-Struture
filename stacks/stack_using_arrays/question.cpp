#include <iostream>

using namespace std;

class Node
{

public:
    int data;

    Node *next;

    Node(int data)
    {

        this->data = data;

        next = NULL;
    }
};

class Stack
{

    Node *head;

    int size;

public:
    Stack()
    {

        head = NULL;

        size = 0;
    }

    int get_size()
    {

        return size;
    }

    void push(int data)
    {

        Node *n = new Node(data);

        n->next = head;

        head = n;

        size++;
    }

    void pop()
    {

        if (head == NULL)
        {

            cout << "Stack is empty. Cannot pop element." << endl;

            return;
        }

        Node *temp = head;

        head = head->next;

        temp->next = NULL;

        delete temp;

        size--;
    }

    int top()
    {

        if (head == NULL)
        {

            cout << "Stack is empty." << endl;

            return -1; // Return a default value or throw an exception to handle this case
        }

        return head->data;
    }

    bool isEmpty()
    {

        return head == NULL;
    }
};

int main()
{

    Stack s1;

    int option;

    do
    {

        cout << "Select an option:" << endl;

        cout << "1. Push" << endl;

        cout << "2. Pop" << endl;

        cout << "3. Top" << endl;

        cout << "4. Is Empty" << endl;

        cout << "5. Exit" << endl;

        cout << "6. display" << endl;

        cin >> option;

        switch (option)
        {

        case 1:

            int data;

            cout << "Enter data to push: ";

            cin >> data;

            s1.push(data);

            break;

        case 2:

            s1.pop();

            cout << "Element is popped" << endl;

            break;

        case 3:

            if (!s1.isEmpty())
            {

                int a = s1.top();

                cout << "Top Element: " << a << endl;
            }

            break;

        case 4:

            cout << "Is Empty: " << s1.isEmpty() << endl;

            break;

        case 5:

            cout << "Exiting..." << endl;

            break;

        case 6:

            while (!s1.isEmpty())
            {

                cout << s1.top() << " ";

                s1.pop();
            }

            cout << "NULL" << endl;

            break;
        }

    } while (option != 5);

    return 0;
}