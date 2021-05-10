
#include <iostream>
using namespace std;
void swap_reference(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void swap_value(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
void inpt(int flag) {
    int x, y;
    cout << "Enter Two Values: \n";
    cout << "A = ";
    cin >> x;
    cout << "B = ";
    cin >> y;
    if (flag == 1) {
        swap_reference(&x, &y);
        cout << "A = " << x << endl;
        cout << "B = " << y << endl;
    }
    else {
        swap_value(x, y);
        cout << "A = " << x << endl;
        cout << "B = " << y << endl;
        cout << "Pass By Value can't change value" << endl;
    }
}

int main() {
    cout << "--Swapping Values--\n";
    int choice;
    do {

        cout << "\n\t   Select One Option Below";
        cout << "\n\t 1 Swapping Through Call By Reference";
        cout << "\n\t 2 Swapping Through Call By Value";
        cout << "\n\t 3 exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            inpt(1);
            break;
        case 2:
            inpt(0);
            break;
        case 3:
            exit(0);
        default:
            cout << "\nEnter Choice";
            break;
        }
    } while (choice != 10);
    return 0;
}
