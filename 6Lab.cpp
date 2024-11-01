#include <iostream>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
        int arr[5] = { 1, 2, 3, 4, 5}; 
        int sum = 0;
        int* ptr = arr; 
        for (int i = 0; i < 5; i++) {
            sum += *(ptr + i); 
        }
        cout << "Сумма елементів масиву: " << sum << endl;
        return 0;
    }

    



    

    

   

    

    

        

