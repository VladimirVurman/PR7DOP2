#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int k = 12;

void zapolnenie(int arr[k][k]) 
{
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            arr[i][j] = rand() % 15;


        }
    }
}
void swap(int arr[k][k]) {

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < k; j++)
        {
            int x = 0;
            x = arr[i][j];
            arr[i][j] = arr[k - i - 1][j];
            arr[k - i - 1][j] = x;
        }
    }

}
void Risovka(int arr[k][k]) {
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int arr[k][k];
    zapolnenie(arr);
    Risovka(arr);
    swap(arr);
    cout << endl << endl;
    Risovka(arr);
}