#include <iostream>

using namespace std;

int main(){

  int sayilar[] = {55, 66, 77, 88, 99, 18};
  int *ptr = sayilar; // &sayilar[0];

  cout << "1.eleman: " << *ptr << endl;
  ptr++;
  cout << "2.eleman: " << *ptr << endl;
  cout << "5.eleman: " << *(ptr + 3) << endl;
  ptr--;
  cout << "1.eleman: " << *ptr << endl;

  return 0;
}
