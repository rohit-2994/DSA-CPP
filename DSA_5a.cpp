#include<iostream>
using namespace std;

int main(){
    /*BITWISE OPERATORS*/
    // int a,b;
    // cin>>a;
    // cin>>b;

    // cout<<"The & Operator between "<<a<<" and "<<b<<" gives "<< (a&b)<<endl;
    // cout<<"The | Operator between "<<a<<" and "<<b<<" gives "<<(a|b)<<endl;
    // cout<<"The ~ Operator gives values of "<<~a<<" for " <<a<<" and "<<~b<<" for "<<b<<endl;
    // cout<<"The ^ Operator between "<<a<<" and "<<b<<" gives "<<(a^b)<<endl;

    /*LEFT-SHIFT OPERATORS*/
    // cout<< (8<<3)<<endl; //64
    // cout<<(13<<4)<<endl;  //208
    // cout<<(0>>2)<<endl; //0
    // cout<<(6>>2)<<endl; //1
    // cout<<(-4>>3)<<endl;   
    // cout<<(-4<<3)<<endl;   //Here in our case it is clearly scene that 
    // the most significant digit(which denotes -ve sign, isn't hampered.,0's are added in our compiler.)


    /* 1. Padding is always from 0 in +ve numbers, in negative its compiler-dependent.
       2. In some cases of large numbers, left shift leads to negative value instead of doubling.
       3. In || operator,  if the first condition is true, the next condition is not executed.
       4. to get 1's complement of a number, switch 0's and 1's, and to get 2's complement simply add 1. */



       /*FOR Loop*/
    //    int n=5,i=1;

    //    for(;;){
    //     if(i<=5){
    //     cout<<i;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    //    }

    // for(int a=3,b=4;a<=10 && b>=-6; a++,b--){
    //     cout<<a<<" "<<b<<endl;
    // }
    /* 1. It's possible to add multiple numbers of initialisations, conditions & updations.
       2. the flow of For Loop is:- Initialisation->Condition->Body->Updation.*/

       /*SUM OF 1 to n*/
    // int n,sum=0;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    // cout<<sum;

    /*Fibonacci Series*/
    int n,a=0,b=1,sum=0;
    cin>>n;

    cout<<a<<" , "<<b<<" , ";
    for(int i=1;i<=n-2;i++){
       
        sum=a+b;
        cout<<sum<<" ,";
        a=b;
        b=sum;
               
    }



}