#include<iostream>
using namespace std;

int main ()
{
    int a1, b1, a2, b2, num1[10][10], num2[10][10], sum = 0;

    // First Matrix Input

    cout << "Enter First Matrix Row and Column: \n" ;
    cin >> a1 >> b1;
    cout << "Enter Second Matrix Row and Column:\n" ;
    cin >> a2 >> b2;

    if ( a1 != a2 && b1 != b2 ) {
        cout << "First Matrix Row and Column Number Must be Same with Second Matrix Row and Column Number.\n\n" ;
        return main();
    }


    for (int i = 1; i <= a1; i++) {
        for (int j = 1; j <= b1; j++) {
            cout << "Matrix1[" << i-1 << "][" << j-1 << "]" ;
            cin >> num1[i][j];
        }
    }

    cout << "\n" ;


    // Second Matrix Input

    for (int i = 1; i <= a2; i++) {
        for (int j = 1; j <= b2; j++) {
            cout << "Matrix2[" << i-1 << "][" << j-1 << "]" ;
            cin >> num2[i][j];
        }
    }

    cout << "\nThe Addition:\n" ;



    for (int i = 1; i <= a1; i++){
        for (int j = 1; j <= b1; j++) {
                sum =num1[i][j]+num2[i][j];
                cout << sum << "\t" ;
                sum = 0;
        }
        cout << "\n" ;
    }
}

