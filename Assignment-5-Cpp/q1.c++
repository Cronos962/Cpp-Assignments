// A5
#include <iostream>
using namespace std;
class Date{
    int day,month,year;
    public:
        Date():day(0),month(0),year(0){}
        Date(int day,int month,int year):day(day),month(month),year(year){}

        void acceptRecord(){
            cout<<"Enter day:\n";
            cin>>day;
            cout<<"Enter month:\n";
            cin>>month;
            cout<<"Enter year:\n";
            cin>>year;
        }

        void printRecord(){
            cout<<day<<"-"<<month<<"-"<<year<<endl;
        }
};

class Person{
    string name,address;
    Date birthDate;
    public:
        Person():name(""),address(""){}
        Person(string name,string address):name(name),address(address){}
        Person(string name,string address,Date birthDate):name(name),address(address),birthDate(birthDate){}
        Person(string name,string address,int day,int month,int year):name(name),address(address),birthDate(day,month,year){}

        void acceptRecord(){
            cout<<"Name: \n";
            cin>>name;
            cout<<"Address: \n";
            cin>>address;
            birthDate.acceptRecord();
        }

        void printRecord(){
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Birth Date: ";
            birthDate.printRecord();
        }


};

class Student{
    int id;
    float marks;
    string course;
    Date joiningDate,endDate;
    public:
        Student():id(0),marks(0),course(""),joiningDate(0,0,0),endDate(0,0,0){}
        Student(int id,float marks,string course,Date joiningDate,Date endDate):id(id),marks(marks),course(course),joiningDate(joiningDate),endDate(endDate){}
        Student(int id,float marks,string course,int jDay,int jMonth,int jYear,int eDay,int eMonth,int eYear):id(id),marks(marks),course(course),joiningDate(jDay,jMonth,jYear),endDate(eDay,eMonth,eYear){}

        void acceptRecord(){
            cout<<"Id: \n";
            cin>>id;
            cout<<"Marks: \n";
            cin>>marks;
            cout<<"Course: \n";
            cin>>course;
            cout<<"Joining Date: \n";
            joiningDate.acceptRecord();
            cout<<"End Date: \n";
            endDate.acceptRecord();
        }

        void printRecord(){
            cout<<"Id: "<<id<<endl;
            cout<<"Marks: "<<marks<<endl;
            cout<<"Course: "<<course<<endl;
            cout<<"Joining Date: ";
            joiningDate.printRecord();
            cout<<"End Date: ";
            endDate.printRecord();
        }
};

int main(){
    // Person p;
    // p.acceptRecord();
    // p.printRecord();
    Student s;
    s.acceptRecord();
    s.printRecord();
    return 0;
}