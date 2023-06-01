#include <iostream>
using namespace std;

int main(){
    
    int i, x, total, angka[100];
    
    cout << "Masukkan banyaknya angka :  ";
    cin >> x;
    cout << endl;
    
    for (i=0; i<x; i++)
        {
           cout << "Angka ke -" << i+1 << " : ";
           cin >> angka[i];
           total += angka[i];
        }
        
    cout << endl;
    cout << "Nilai total elemen dalam array : " << total << endl;

    return 0;
 }
