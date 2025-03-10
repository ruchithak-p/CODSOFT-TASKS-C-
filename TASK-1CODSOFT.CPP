#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
  srand(time(0));
    int i=1 + (rand() % 100);
    int n;
    cout<<"Guess The number"<<endl;
while(1){
cin>>n;
    if(n<i){
cout<<"The number the low"<<endl;
    }
    else if(n>i){
        cout<<"The number the high"<<endl;
            }
            else{
                cout<<" !!! The number correct !!!!"<<endl;
                break;
                    }
}

}