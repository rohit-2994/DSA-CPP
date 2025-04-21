#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // cout<<"Value of n is: "<<n<<endl;

    // if(n>0){
    //     cout<<"n is positive."<<endl;
    // }
    // if(n<0){
    //     cout<<"n is negative."<<endl;
    // }

    // int a,b;
    // cin>>a>>b;

    // if(a>b){
    //     cout<<"a is greater.";
    // }
    // else if(a<b){
    //     cout<<"a is not greater.";
    // }
    // else{
    //     cout<<"a is equal to b.";
    // }
    

    // int a = cin.get();  // reads the value as a character and returns the equivalent ASCII value, here tab, space & enter also has values.
    // cout<<"Value of a is: "<<a<<endl;

    // int a;
    // cin>>a;

    // if(a>0){
    //     cout<<"a is positive.";
    // }
    // else if(a<0){
    //     cout<<"a is negative.";
    // }
    // else{
    //     cout<<"a is equal to 0.";
    // }

/*---------------------------------------------------------*/
/*Finding the case of a given letter*/

char ch=cin.get();

if(ch>='a' && ch<='z'){
    cout<<"The given character is of lower case.\n";
}
else if(ch>='A' && ch<='Z'){
    cout<<"The given character is of Upper case.\n";
}
else if(ch>='0' && ch<='9'){
    cout<<"The given character is numeric.\n";
}
else{
    cout<<"invalid value.\n";
}
/*---------------------------------------------------------*/





};