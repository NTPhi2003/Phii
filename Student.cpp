#pragma once
#include <iostream>
using namespace std;
class Student{
  private:
    int ID;
    string FirstName;
    string LastName;
    string gender;
    string dob;
    int Classname;
    string country;
  public:
    Student(int ID,string FirstName,string LastName,string gender,string dob,int Classname,string country){
        this->ID=ID;
        this->FirstName=FirstName;
        this->LastName=LastName;
        this->gender=gender;
        this->dob=dob;
        this->Classname=Classname;
        this->country=country;
    };
    string getGender(){
        return gender;
    }
    void display(){
        cout<<"Student ID    Frist name    Last name   Gender    Date of birth    Classname   Country"<<endl;   
        cout<<"    "<<ID<<"         "<<FirstName<<"        "<<LastName<<"      "<<gender<<"     "<<dob<<"       "<<Classname<<"      "<<country<<endl; 

    }
   
};
    
    