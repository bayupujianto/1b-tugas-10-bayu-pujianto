#include <iostream>
using namespace std;

int search(int array[], int n, int x) {
     for (int i = 0; i < n; i++)
     if (array[i] == x)
     return i;
     return -1;
}
int main () {
    int n,x;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    int nilai[n];
    for (int i=0; i<n; ++i)
        cin >> nilai[i];
    cout << "Masukkan data yang dicari: ";
    cin >> x;
    int result= search(nilai, n, x);
    (result == -1) ? cout << "Tidak Ditemukan": cout << "Elemen ditemukan di index ke " << result;
}
