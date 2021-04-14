#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

int main()
{
    int Seconds, Minutes, Hours,Total;
    char Choice;
    cout<<"IT'S THE COUNTDOWN SHUTDOWN~! [By: Linons]\n\n";
    cout<<"Enter Seconds: ";cin>>Seconds;
    cout<<"Enter Minutes: ";cin>>Minutes;
    cout<<"Enter Hours: ";cin>>Hours;
    cout<<"\n\n";
        Total = (Minutes * 60) + (Hours * 3600) + Seconds;
    stringstream Stringer;
    Stringer<<"shutdown -s -t "<<Total;
    system(Stringer.str().c_str());
    Stringer.str("");

    cout<<"Enter any key to EXIT or 0 to CANCEL SHUTDOWN: ";

    cin>>Choice;

    switch(Choice){
    case '0':
        system("shutdown -a");
        break;
    default:
        system("exit");
    }

return 0;
}
