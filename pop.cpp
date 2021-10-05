#include <iostream>
#include <conio.h>
#define size 2
using namespace std;
class lifo
{
    int top;
    int stk[size];

public:
    lifo()
    {

        top = -1;
    }
    void push(int item)
    {

        if (top == size - 1)
        {
            cout << "Overflow" << endl;
        }
        else
        {
            top++;

            stk[top] = item;
        }
        display();
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            top--;
            cout << "Element deleted: " << stk[top];
            cout << endl;
        }
        display();
    }
    void display()
    {
        cout << "Stack contain" << endl;

        for(int i = top;i>= 0; i--)
        {
            cout << stk[i] << " " << endl;
        }
    }
};

int main()
{
    lifo st;

    int ch = 1, item, y;
    

toop:

    cout << "....STACK MENU...." << endl;
    cout << "1.PUSH" << endl;
    cout << "2.POP" << endl;
    cout << "Enter your chooic: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter the Element to push in stk: ";
        cin >> item;
        st.push(item);
        break;

    case 2:
        st.pop();
        break;

    default:
        cout << "wrong value";
        break;
    }

    cout << "do you want to again PRESS 1: ";
    cin >> y;
    while (y != 0)
    {
        goto toop;
    }

    return 0;
}