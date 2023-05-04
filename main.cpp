#include <iostream>
#include "class.h"
#include "functions.h"
using namespace std;
int main()
{
    date datee;
    datee.question1="Powstanie warszawskie";
    datee.question2="Bitwa pod grunwaldem";
    datee.question3="1 nobel Sklodowskiej";
    bool valid_date = false;

    cout << "Question1: \n" << datee.question1 <<endl;

    while (!valid_date)
    {
        input_date(datee);
        valid_date = check_date(datee);
    }
    if (datee.day ==1 && datee.month ==8 && datee.year ==1944)
        cout <<"Correct!"<<endl;
    else
        cout <<"Wrong!"<<endl;
    cout << "Question2: \n" << datee.question2 <<endl;
    valid_date = false;
    while (!valid_date)
    {
        input_date(datee);
        valid_date = check_date(datee);
    }
    if (datee.day==15 && datee.month==7 && datee.year==1410)
        cout <<"Correct!"<<endl;
    else
        cout <<"Wrong!"<<endl;
    cout << "Question3: \n" << datee.question3 <<endl;
    valid_date = false;
    while (!valid_date)
    {
        input_date(datee);
        valid_date = check_date(datee);
    }
    if (datee.day==10 && datee.month==12 && datee.year==1904)
        cout <<"Correct!"<<endl;
    else
        cout <<"Wrong!"<<endl;
    return 0;
}
