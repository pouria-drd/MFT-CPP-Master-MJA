#include <iostream>

using namespace std;

int main() {
    int a;
    cout<<"Made by <<Pd>>\nPlease enter the number :";
    cin>>a;
    cout<<2<<endl;
    int primeNumber = 1;
    int counter1 = 1;
    int counter2 = 1;
    int counter3 = 0;

    while (primeNumber <= a){
        while (counter1 <= primeNumber){
            if (primeNumber % counter2 == 0){
                counter1 = counter1 + 1;
                counter2 = counter2 + 1;
                counter3 = counter3 + 1;
            }
            else{
                counter2 = counter2 + 1;
                counter1 = counter1 +1;
            }
        }
        if (counter3 == 2){
            cout<<primeNumber<<endl;
        }
        primeNumber = primeNumber + 2;
        counter1 = 1;
        counter2 = 1;
        counter3 = 0;
    }

    cout<<"Made by <<Pd>>\n@Pd2021";
    int b;
    cout<<"Made by <<Pd>>\nPress any key to exit :";
    cin>>b;
    return 0;
}

