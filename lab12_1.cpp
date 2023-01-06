#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
string gradestr;
int grade;
int graderandom(){
    return grade=rand()%9+1;
}
int main()
{
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    graderandom();
    switch(grade){
        case 1:
            gradestr="A";
            break;
        case 2:
            gradestr="B+";
            break;
        case 3:
            gradestr="B";
            break;
        case 4:
            gradestr="C+";
            break;
        case 5:
            gradestr="C";
            break;
        case 6:
            gradestr="D+";
            break;
        case 7:
            gradestr="D";
            break;
        case 8:
            gradestr="F";
            break;
        case 9:
            gradestr="W";
            break;

    }
    cout<<"You will get "<<gradestr<<" in this 261102.";
}