#include <stdio.h>
struct Date
{
    int day, month, year;
};
void initDate(struct Date *);
void printDateOnConsole(struct Date *);
void acceptDateFromConsole(struct Date *);
int main()
{
    int choice;
    printf("1.Init Date\n2.Print Date\n3.Input Date\n");
    scanf("%d", &choice);
    struct Date d;
    struct Date *datePtr = &d;
    do
    {
        switch (choice)
        {
        case 1:
            initDate(datePtr);
            break;
        case 2:
            printDateOnConsole(datePtr);
            break;
        case 3:
            acceptDateFromConsole(datePtr);
            break;
        }
        printf("1.Init Date\n2.Print Date\n3.Input Date\n4.Exit\n");
        scanf("%d",&choice);
        

    } while (choice!=4);

    return 0;
}

void initDate(struct Date *ptrDate)
{
    ptrDate->day = 21;
    ptrDate->month = 8;
    ptrDate->year = 2025;
}

void printDateOnConsole(struct Date *ptrDate)
{
    printf("Date: %d-%d-%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter Day: ");
    scanf("%d", &ptrDate->day);
    printf("Enter month: ");
    scanf("%d", &ptrDate->month);
    printf("Enter Year: ");
    scanf("%d", &ptrDate->year);
}