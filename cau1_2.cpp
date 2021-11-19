
#include <iostream>
#include "Student.cpp"
using namespace std;

void cau1(string &code){
    Student* student[3];
		student[1] =new Student(1,"Johnny","Smith","Male","10/06/2000",5193098,"USA");   
        student[2] =new Student(2,"Michael","Weaver","Male","13/03/1975",5204432,"USA");
        student[3] =new Student(3,"Sakura","Truong","Female","20/09/1950",5213344,"Japan");
 
if (code=="list <5193098>"){
            student[1]->display();
            
        }
if (code=="list <5204432>"){
            student[2]->display();
        }
if (code=="list <5213344>"){
            student[3]->display();
         }
}
void cau2(string &code){
    Student* student[3];
		student[1] =new Student(1,"Johnny","Smith","Male","10/06/2000",5193098,"USA");   
        student[2] =new Student(2,"Michael","Weaver","Male","13/03/1975",5204432,"USA");
        student[3] =new Student(3,"Sakura","Truong","Female","20/09/1950",5213344,"Japan");

int counting=0;
if (code=="count male"){
    for (int i=1;i<=3;i++){
        if (student[i]->getGender()=="Male") counting++;
    }
	cout<<"Number of male: "<<counting;
}

if (code=="count female"){
    for (int i=1;i<=3;i++){
        if (student[i]->getGender()=="Female") counting++;
    }
    cout<<"Number of female: "<<counting;
}
}