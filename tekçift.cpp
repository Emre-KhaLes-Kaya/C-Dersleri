#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish"); 
   int sayi;
   cout<<"Say�y� Girin : ";
   cin>>sayi;
   if(sayi%2==0)
   {
   	cout<<"Girilen say� �ift";
   }
   else
   {
   	cout<<"Girilen say� tek";
   }
}
