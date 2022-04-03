#include <iostream>

using namespace std;

int main(){

  int sayi = 1453;
  cout << "Degisken degeri: " << sayi << endl;
  cout << "Degisken adresi: " << &sayi << endl;

  cout << endl;

  int *ptr = &sayi;
  cout << "Pointer'in gosterdigi adres: " << ptr << endl;
  cout << "Pointer'in gosterdigi adres degeri: " << *ptr << endl;
  cout << "Pointer adresi: " << &ptr;

  return 0;
}
