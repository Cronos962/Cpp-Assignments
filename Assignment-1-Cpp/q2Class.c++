#include <iostream>
using namespace std;
class Date{
    int day,month,year;
    public:
    void initDate(){
        this->day = 21;
        this->month = 8;
        this->year = 2025;
    }
    void setDay(int day){
        this->day = day;
    }

    void setMonth(int month){
        this->month = month;
    }

    void setYear(int year){
        this->year = year;
    }
    void printDateOnConsole(){
        cout<<"Date:"<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
    }

    void acceptDateFromConsole(){
        int day,month,year;
        cout<<"Enter day:";
        cin>>day;
        setDay(day);
        cout<<"Enter month";
        cin>>month;
        setMonth(month);
        cout<<"Enter year";
        cin>>year;
        setYear(year);
    }

    bool isLeapYear(){
        if(year%4==0){
            if(year%100==0){
                if(year%400==0){
                    return 1;
                }
                return 0;
            }
            else{
                return 1;
            }
        }
        else{
            return 0;
        }
    }
};
int main(){
    int choice;
    cout<<"1.Init Date\n2.Print Date\n3.Input Date\n4.Check if Leap Year";
    cin>>choice;
    Date d;
    do
    {
        switch (choice)
        {
        case 1:
            d.initDate();
            break;
        case 2:
            d.printDateOnConsole();
            break;
        case 3:
            d.acceptDateFromConsole();
            break;
        case 4:
            d.isLeapYear()?cout<<"Leap\n":cout<<"Not leap\n";
            break;
        }
        cout<<"1.Init Date\n2.Print Date\n3.Input Date\n4.Check if leap year\n5.Exit";
        cin>>choice;

    } while (choice!=5);
    return 0;
}