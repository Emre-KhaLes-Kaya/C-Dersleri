
#include <iostream>
 
using namespace std;
int main()
{
float fiyat,kdv_fiyat;
cout<<"Fiyati Girin : ";
cin>>fiyat;
kdv_fiyat=fiyat+(fiyat*18/100);
cout<<"KDV' li Fiyat : "<<kdv_fiyat;
}
