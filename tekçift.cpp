#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish"); 
   int sayi;
   cout<<"Sayýyý Girin : ";
   cin>>sayi;
   if(sayi%2==0)
   {
   	cout<<"Girilen sayý çift";
   }
   else
   {
   	cout<<"Girilen sayý tek";
   }
}
