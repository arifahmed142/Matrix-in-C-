#include<iostream>
using namespace std;

int main ()
{
    int a1, b1, a2, b2, num1[10][10], num2[10][10];

    // First Matrix Input

    cout << "Enter First Matrix Row and Column: \n" ;
    cin >> a1 >> b1;
    for (int i = 1; i <= a1; i++) {
        for (int j = 1; j <= b1; j++) {
            cout << "num[" << i-1 << "][" << j-1 << "]" ;
            cin >> num1[i][j];
        }
    }

    cout << "\n" ;


    // Second Matrix Input

    cout << "Enter Second Matrix Row and Column:\n" ;
    cin >> a2 >> b2;
    for (int i = 1; i <= a2; i++) {
        for (int j = 1; j <= b2; j++) {
            cout << "num[" << i-1 << "][" << j-1 << "]" ;
            cin >> num2[i][j];
        }
    }

    cout << "\n" ;

    // OUTPUT Session

        //First

    for (int i = 1; i <= a1; i++) {
        for (int j = 1; j <= b1; j++) {
            cout << num1[i][j] << "\t" ;
        }
        cout << "\n";
    }


    cout << "\n\n" ;
        //Second

    for (int i = 1; i <= a2; i++) {
        for (int j = 1; j <= b2; j++) {
            cout << num2[i][j] << "\t" ;
        }
        cout << "\n";
    }
}
