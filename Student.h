// header file
#ifndef STUDENT_H_INCLUDED       //header file olusturabilmemiz icin öncelikle bu iki kod satirini yazmamiz gerekiyor.
#define STUDENT_H_INCLUDED       //class'imizin adini buyuk harflerle yazıp yanina "_H" ekledim.

#include <string>                //Class icinde gerekli oldugu icin string kutuphanesini cagırdım.
using std::string;               //string kullanabilmek icin iznimi bu satırla alıyorum.
#define SIZE 3                   //class icinde kullanacagımız dizinin boyutunu sabitleyerek belirttim.  
class Student{
public:
Student();                       
Student(string,string,string,int,double, int* );

string getName();                //program icin gerekli fonksiyonlarimi burada tanimliyorum.
void setName(string);

string getSurname();
void setSurname(string);

string getDepartment();
void setDepartment(string);

double getGpa();
void setGpa(double);

void setGrades(int *);
int * getGrades();

int getNumber();
void setNumber(int);

double getAverageGrade();

void print();
private:
string name;                  //program icin gerekli degiskenleri burada tanimliyorum.
string surname;
string department;
int number;
int *grades;
double gpa;
};

#endif // STUDENT_H_INCLUDED        //header file'imizi bitirmemiz icin gereken kod satiridir.
