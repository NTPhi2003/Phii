#include <iostream>
#include "Student.cpp"
#include "cau1_2.cpp"

#include <fstream>


using namespace std;
int main(){
    
        int ques;
        
        cout<<"choose your question (press a number): \n 1.list <classname> \n 2.count male,count female \n 3.top n \n 4.sort asc,sort desc \n 5.search <keyword>\n your number is: ";
        
        cin>>ques;
        cout <<"\n enter your command: ";
        cin.ignore();
        string code;
        getline (cin,code);
        if(ques==1){
            cau1(code);
        }
        if(ques==2){
            cau2(code);
        }

        return 0;
}