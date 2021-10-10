#include <iostream>
#include <string>
using namespace std;

float MAX(float mark[], int size){
    float maximum = 0.0;
    for (int i=0; i<size; i++){
        if (mark[i] > maximum){
            maximum = mark[i];
        }
    }
    return maximum;
}

float MIN(float mark[], int size){
    float minimum = 999999999.99;
    for (int i=0; i<size; i++){
        if (mark[i] < minimum){
            minimum = mark[i];
        }
    }
    return minimum;
}


int main() {
    int number;
    cout<<"How many students do you have ?";
    cin>>number;

    cout<<endl;

    string students_name[number];
    float mark;
    float mark_arr[number];
    int students_number = 1;
    
    string students_name_number[100];

    for (int i=0; i<number; i++){
        cout<<"Please enter the student "<<students_number<<" name :";
        cin>>students_name[i];
        cout<<"Please enter this student "<<students_number<<" mark :";
        cin>>mark;
        mark_arr[i] = mark;
        students_number += 1;
        cout<<endl;
    }

    for (int counter=1; counter<2; counter++){
        for (int i=0; i<number; i++){
            cout << "Mark of " << students_name[i] << " is : " << mark_arr[i] << endl;
            int students_arr_number = mark_arr[i];
            students_name_number[students_arr_number] = students_name[i];
        }
    }
    
    cout<<endl;

    int best = MAX(mark_arr, number);
    cout << students_name_number[best] << " got the best mark (" << MAX(mark_arr, number) << ")" << endl;
    
    int worst = MIN(mark_arr, number);
    cout << students_name_number[worst] << " got the worst mark (" << MIN(mark_arr, number) << ")" << endl;
    
    cout<<endl;
    
    cout<<"Made by <<Pd>>"<<endl;
    int pd;
    cout<<"@pd2021\nPress any key to exit :";
    cin>>pd;
    
    return 0;
}