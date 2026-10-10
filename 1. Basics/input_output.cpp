#include <iostream>
#include <string>

using namespace std;
int main() {
    string name;
    string kelas;

    cout << "Masukkan nama anda ";
    getline (cin, name);
    
    cout << "Masukkan kelas ";
    getline (cin, kelas);

    cout << "Halo " << name << endl;
    cout << "Kelas " << kelas << endl;

    return 0;

}