#include<iostream>
using namespace std;
int main(){
	int arr[100];

    // Setting values
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }

    // Getting values
    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

