#include <bits/stdc++.h>
#include <fstream>

using namespace std;
#define n 100
class mystack
{
private:
    int *arr;
    int top;

public:
    mystack()
    {
        arr = new int[n];
        top = 0;
    }

    void mypush(int x)
    {
        if (top == n - 1)
        {
            cout << "Overflown" << endl;
            return;
        }
        top++;
        arr[top] = x;
        // cout << arr[top] << " " << top << endl;
    }

    void mypop()
    {
        if (top == -1)
        {
            cout << "Underflown" << endl;
            return;
        }
        top--;
    }
    void display()
    {
        if (top > 0)
        {
            for (int i = top; i > 0; i--)
            {
                cout << arr[i] << " ";
                // cout << i << endl;
            }
            cout << endl;
            // cout << "Ended here" << endl;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }

        return false;
    }

    int sizeCount()
    {
        int count = 0;
        for(int i = top;i>0;i--)
        {
            count++;
        }
        return count;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mystack s;
    s.mypush(4);
    s.mypush(5);
    s.mypush(6);
    s.mypush(7);
    s.mypush(8);
    s.display();
    int size = s.sizeCount();
    cout<<size<<endl;
    s.mypop();
    s.display();
    cout<<"The size of the stack is; ";
    size = s.sizeCount();
    cout<<size<<endl;
    if(s.isempty())
    {
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The stack is not empty";
    }
    return 0;
}