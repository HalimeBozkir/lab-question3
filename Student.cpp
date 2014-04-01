//class'i tam anlamiyla olusturdugumuz kısım burasi
#include <iostream>          
#include <string>
#include "Student.h"         //header file'i cagirdigim satir.
#define SIZE 3               //dizinin boyutunu tanimladim.
using namespace std;         //input-output komutlari kullanma iznimi bu sekilde aliyorum.

Student :: Student(string isim, string soyisim, string bolum, int no, double GPA, int* GRADES)
{                            //Student class'indaki Student constructer fonksiyonumu cagirdim.
name = isim;                  
surname = soyisim;           //header file icindeki fonksiyonlari doldurmaya basladim.
department = bolum;          //bu fonksiyon yardimi ile private tanimladigim degiskenlerin hepsine ayni anda ulasabilirim. 
number = no;
gpa = GPA;
grades = GRADES;
}

Student::Student(){ }       //Student class'inin icindeki Student fonksiyonunu cagirdim.

void Student::setName(string isim){    
name=isim;}
void Student::setSurname(string soyisim){
surname=soyisim;}           //set fonksiyonlariyla private degiskenlerimi ayri ayri tanimlama imkani olusturmaya cabaliyorum.
void Student::setDepartment(string bolum){
department=bolum;}
void Student::setNumber(int no){
number=no;}
void Student::setGpa(double ort){
gpa=ort;}
void Student::setGrades(int *puan1){
grades=puan1;}


string Student :: getName(){  //get fonksiyonlarinda istenilen sonucu döndürdüm(return ).
return name;}
string Student ::getSurname(){
return surname;}
string Student ::getDepartment(){
return department;}
int Student :: getNumber(){
return number;}
double Student ::getGpa(){
return gpa;}
int * Student :: getGrades(){
return grades;}

void Student::print(){           //print fonksiyonuyla tüm verileri bir kez yazdirabilirim.
  cout<<"Name:"<<getName()<<endl;
  cout<<"Surname:"<<getSurname()<<endl;
  cout<<"Department:"<<getDepartment()<<endl;
  cout<<"GPA:"<<getGpa()<<endl;


    cout << "Grades: ";

    for ( int i=0; i<SIZE; i++){    //notlari girebilmek icin for döngüsü kullandim.
      cout << grades[i] << " ";
    }

    cout << endl;
    cout<<"Average grade:"<<getAverageGrade()<<endl;
    cout << endl;                 //ve ortalamayi yazdirdim.
}


double Student :: getAverageGrade()
{
double average;
int sum = 0;

for ( int i=0; i<number; i++){
    sum += grades[i];}
 average = (double)sum/SIZE;          //ortalamayi hesapladim.

return average;
}
