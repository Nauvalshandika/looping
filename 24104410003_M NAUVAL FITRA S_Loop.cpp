// 24104410003_M NAUVAL FITRA S_Loop.cpp
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Masukkan jumlah data: ";
    int a; "Masukkan jumlah data: ";
    cin >> a;

    int jumlahGanjil = 0;
    int jumlahGenap = 0;

    for (int i = 1; i < a; i++) {
        if (i % 2 == 1) {
            jumlahGanjil += i;
        }
        else {
            jumlahGenap += i;
        }
    }
    cout << "Jumlah total bilangan ganjil: " << jumlahGanjil << endl;
    cout << "Jumlah total bilangan genap: " << jumlahGenap << endl;
}
