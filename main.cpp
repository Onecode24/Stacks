#include <iostream>
#include "Stacks.h"

using namespace std;

int main(){

    int n,val;

    Stacks my_stack;

    cout << "Welcome this is my Stacks list "<<endl;
    cout <<"1. To add element at Top"<<endl;
    cout <<"2. To remove element at Top"<<endl;    
    cout <<"3. To get element at Top"<<endl;
    cout <<"4. To exit this program"<<endl;
    while (true)
    {
        cout << "Your choice : ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter number to add : ";cin >> val;
            my_stack.addTop(val);
            break;
        case 2:
            my_stack.removeTop();
            break;
        case 3:
            cout << my_stack.getTop()<<endl;
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "Invalid choice"<<endl;
            break;
        }

    }

    return 0;
}