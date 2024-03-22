// Membandingkan element dari yang terbesar sampai dengan yang terkecil
// Membandigkan elemen dari yang terkecil sampaidengan yang terbesar 
// memisahkan elemen terlebih dahulu menjadi 2 sublist yang sudah terurut dan list yang belum terurut kemudian dibandingkan lalu dimasukkan kedalam sublist tertentu ,jika beberapa data sudah terurut menggunakan algoritma insert tion untuk mengetahui jumlah langkah cukup menggunakan rumus = jumlah data -1 atau n-1

#include <iostream>
#include <string>
using namespace std;

int fera[83];
int n;


void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array :";
        cin >> n;
        if (n <= 83)
            break;
        else {
            cout << "\nArray hanya dapat mempunyai maksimal 20 elemen\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << " Masukan elemen fera" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> fera[i];
    }
}
void BubbleSortArray() {
    int pass = 1;
    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (fera[j] > fera[j + 1]) {
                int temp = fera[j];
                fera[j] = fera[j + 1];
                fera[j + 1] = temp;
            }
        }
        pass = pass + 1;
        cout << "\nPass " << pass - 1 << ":";
        for (int k = 0; k < n; k++) {
            cout << fera[k] << " ";
        }
        cout << endl;
    } while (pass <= n - 1);
}
void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "elemen array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << fera[j];
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    input();
    BubbleSortArray();
    display();

    return 0;
}