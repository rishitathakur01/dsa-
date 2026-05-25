#include<iostream>
using namespace std;
//is else statement to check if you are an adult or not
/*int main(){
    int a;
    cin>>a;
    if(a>=18){
        cout<<"you are an adult"<<endl;

    }
    else{
        cout<<"you are not an adult"<<endl;
    }
    return 0;
}*/


//--------------------------------------------------------------
/*A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A

Ask user to enter marks and print the corresponding grade.


int main(){
    int marks;
    cin>>marks;
    if (marks>80){
        cout<<"you scored grade A"<<endl;
    }
    else if(marks>60){
        cout<<"you got grade B"<<endl;
    }
    else if(marks>50){
        cout<<"you got grade C"<<endl;
    }
    else if(marks>45){
        cout<<"you got grade D"<<endl;
    }
    else  if(marks>25){
        cout<<"you got grade E"<<endl;
    }
    else{
        cout<<"you got grade F"<<endl;
    }
    return 0;
}*/
//---------------------------------------------------------
                                 //OR
// int main(){
//     int marks;
//     cin>>marks;
//     if(marks<=25){
//         cout<<"F";
//     }
//     else if(marks>=25 && marks<=44){
//         cout<<"E";
//     }
//     else if(marks>=45 && marks<=49){
//         cout<<"D";
//     }
//     else if(marks>=50 && marks<=59){
//         cout<<"C";
//     }
//     else if(marks>=60 && marks<=79){
//         cout<<"B";
//     }
//     else if(marks>=80 && marks<=100){
//         cout<<"A";
//     }
//     return 0;
// }

/*take the age from the user and then decide accordingly
1.if age<18
print->not eligible for job
2.if age>=18 and age<=55,
print ->eligible for job
3.if age>= and age<=57,
print->eligible for job ,but retirement soon.
if age>57
print->"retiremnet time"*/

int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"not eligible for job";
    }
    else if (age>=18 && age<=55){
        cout<<"eligible for job";
    }
    else if(age>55 && age<=57){
        cout<<"eligible for job,but retiremnet soon";
    }
    else{
        cout<<"retirement time";
    } 
    return 0;
}
   
    





    