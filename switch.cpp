// take the day no and pritn the corresponding day
// for 1 print monday
// for 2 print tuesday and so on for 7 print Sunday.
// The switch statement is used for multi-way decision making.
// It evaluates an expression and executes the matching case block.
// The expression in a switch should evaluate to an integral type (such as int, char, or enum).
// Each case represents a possible value of the expression.
// The break statement is used to exit the switch after executing a case.
// If break is omitted, execution continues to the next case (fall-through).
// The default case is optional and executes if no case matches.
// Case values must be unique and must be constant expressions.
// A switch statement is often more readable than multiple if-else statements when checking a single variable against many values.
#include <iostream>
using namespace std;
int main(){
    int day;
    cin>>day;
    switch (day) {
    case 1 :
        cout<<"Monday";
        break;
    case 2 :
    cout<<"Tuesday";
    break;
    case 3 :
    cout<<"Wednesday";
    break;
    case 4 :
    cout<<"Thursday";
    break;
    case 5 :
    cout<<"Friday";
    break;
    case 6 :
    cout<<"Saturday";
    break;
    case 7 :
    cout<<"Sunday";
    break;
    //if no condition is met then this works
    default:
    cout<<"invalid";
}
}
