#include <iostream>
using namespace std;
struct Date
{
    int day, month, year;
    void initDate(){
        day = 21;
        month = 8;
        year = 2025;
    }
    void printDateOnConsole(){
        cout<<"Date: "<<day<<"-"<<month<<"-"<<year<<endl;
    }
    void acceptDateFromConsole(){
        cout<<"Enter day:"<<endl;
        cin>>day;
        cout<<"Enter month:"<<endl;
        cin>>month;
        cout<<"Enter year:"<<endl;
        cin>>year;
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
    struct Date d;
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