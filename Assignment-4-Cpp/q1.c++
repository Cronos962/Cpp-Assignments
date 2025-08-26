#include <iostream>
using namespace std;
int menuList();
void menu();
int size;
class Time{
    int hr,min,sec;
    public:
        Time():hr(0),min(0),sec(0){}
        Time(int hr,int min,int sec):hr(hr),min(min),sec(sec){}
        void setHr(int hr){
            this->hr = hr;
        }

        void setMin(int min){
            this->min = min;
        }

        void setSec(int sec){
            this->sec = sec;
        }

        int getHr(){
            return this->hr;
        }

        int getMin(){
            return this->min;
        }

        int getSec(){
            return this->sec;
        }

        void printTime(){
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }

        friend void addTime(Time*);
        friend void displayAllTimes(Time*);
        friend void displayHrs(Time*);
};

void addTime(Time* t){
    for (size_t i = 0; i <::size ; i++)
    {
        int hr,min,sec;
        cout<<"Enter hr:\n";
        cin>>hr;
        cout<<"Enter min:\n";
        cin>>min;
        cout<<"Enter Sec:\n";
        cin>>sec;
        t[i].setHr(hr);
        t[i].setMin(min);
        t[i].setSec(sec);
    }
    
}

void displayAllTimes(Time* t){
    for (size_t i = 0; i < ::size; i++)
    {   
        t[i].printTime();
    }
       
}

void displayHrs(Time* t){
    for (size_t i = 0; i < ::size; i++)
    {
        cout<<"Hrs:"<<t[i].getHr()<<endl;
    }
    
}

int main(){
    menu();
    return 0;
}

int menuList(){
    int choice;
    cout<<"0.Exit\n1.Add Time\n2.Display All Time\n3.Display All Hours\n";
    cin>>choice;
    return choice;
}

void menu(){
    int choice;
    
    Time* t = new Time[::size];
    while ((choice = menuList())!=0){
        switch (choice)
        {
        case 1:
            cout<<"Enter size:\n";
            cin>>::size;
            addTime(t);
            break;
        
        case 2:
            displayAllTimes(t);
            break;

        case 3:
            displayHrs(t);
        }
    }
    delete [] t;
    t = nullptr;
}