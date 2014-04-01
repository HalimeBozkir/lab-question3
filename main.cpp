//main fonksiyonuyla programi tamamlayacagim.
#include<iostream>
#include<string>
#include"Student.h"      //header file'imi tekrar cagirdim.
#include"Student.cpp"    //class'imi cagirdim
using namespace std;
int main()
{
  int ptr[SIZE] = {50, 60, 70};           //pointer array tanimladim.
  Student ogr1("Ahmet","YILMAZ","CS",SIZE,4,ptr);
                                          //constructer fonksiyonumla tüm degiskenlere bir deger atadim. 
  ogr1.print();                           //ve bu degerleri yazdirdim.

  Student obj;                            //bir nesne belirledim.

  cout <<"Name:";                         //daha anlasilir bir program icin ciktiya aciklik getirdim.
  string isim;
  cin >> isim;                            //kullanicidan bir isim aldim.
  obj.setName(isim);                      //aldigim ismi  classta olusturdugum setName fonksiyonumun da yardimiyla nesneye atadim.
  cout <<"Surname:";                      //ayni islemleri diger degiskenler icin de uyguladim.
  string soyisim;
  cin >> soyisim;
  obj.setSurname(soyisim);
   cout<<"Department:";
   string bolum;
   cin>> bolum;
   obj.setDepartment(bolum);
   int sayi = SIZE;
   obj.setNumber(sayi);
   cout <<"GPA:";
   double ortalama;
   cin>> ortalama;
   obj.setGpa(ortalama);
   cout <<"Grades:";
   int grades1[SIZE];
   for (int j=0; j<SIZE; j++){
       cin >> grades1[j];}
   obj.setGrades(grades1);

   cout << "Average grade:" << obj.getAverageGrade() <<endl;
   return 0;                          //return 0 ile programimi bitirdim.
}
