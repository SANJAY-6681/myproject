#include<bits/stdc++.h>
 using namespace std;
 int main(){
   srand((unsigned int)time(NULL));

   int num=(rand() % 100) + 1;
   int gus=0;

   do{

    cout<<"ENTER THE GUESS NUMBER (RANGE(1-100)):)-->";
    cin>>gus;

    if(gus>num){
        cout<<"GUESS LOWER"<<endl;
    }
    else if(gus<num){
        cout<<"GUESS HIGHER"<<endl;
    }
    else{
        cout<<"you are correct"<<endl;
    }


   }
   while(gus!=num);


   return 0;


 }

