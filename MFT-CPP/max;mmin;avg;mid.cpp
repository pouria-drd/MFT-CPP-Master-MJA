#include <iostream>
using namespace std;

float MAX(float arr[], int size){
    float maximum = 0.0;
    for (int i=0; i<size; i++){
        if (arr[i] > maximum){
            maximum = arr[i];
        }
    }
    return maximum;
}

float MIN(float arr[], int size){
    float minimum = 999999999.99;
    for (int i=0; i<size; i++){
        if (arr[i] < minimum){
            minimum = arr[i];
        }
    }
    return minimum;
}

float AVG (float arr[] , int size){
    float average;
    float sum=0;
    for(int i = 0 ; i<size ; i++){
        sum=sum+arr[i];
    }
    average=sum/5;
    return average;
}

float MID (float arr[] , int size){
    for(int j =0 ; j<size ; j++){
        for(int i = 0 ; i<4-j ; i++){
            if(arr[i]>arr[i+1]){
                float c = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = c;
            }
        }
    }
    return arr[2];
}


int main() {
    float arr[5];
    cout<<"Enter the numbers :";
    for (int i=0; i<5; i++){
        cin>>arr[i];
    }

    cout<<"MAXIMUM : "<<MAX(arr, 5)<<endl;
    cout<<"MINIMUM : "<<MIN(arr, 5)<<endl;
    cout<<"AVERAGE : "<<AVG(arr, 5)<<endl;
    cout<<"MIDDLE : "<<MID(arr, 5)<<endl;
    
    cout<<"Made by <<Pd>>\n@Pd2021";
    int b;
    cout<<"Made by <<Pd>>\nPress any key to exit :";
    cin>>b;

    return 0;
}