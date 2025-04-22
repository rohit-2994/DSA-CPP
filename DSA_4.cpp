#include<iostream>
using namespace std;

int main(){
 /*PATTERN 9*/
//  int n,i=1;
//  cin>>n;
 
//  while(i<=n){
//     char c= 'A';
//     int j=1;
//     while(j<=n){
//         cout<<c<<" ";
//         j+=1;
//         c+=1;
//     }
//     cout<<endl;
//     i+=1;
//  }

 /*---------*/

 /*PATTERN 10*/
//  int n,i=1;
//  cin>>n;
//  char c= 'A';

//  while(i<=n){
    
//     int j=1;
//     while(j<=n){
//         cout<<c<<" ";
//         j+=1;
//         c+=1;
//     }
//     cout<<endl;
//     i+=1;
//  }

 /*---------*/

 /*PATTERN 11*/
//  int n;
//  int i=0;
//  cin>>n;
 
//  while(i<n){
//     int j=1;
//     while(j<=n){
//         char ch = 'A'+i+j-1;
//         cout<<ch<<" ";
//         j+=1;
//      }
//     cout<<endl;
//     i+=1;
//  }

 /*---------*/

 /*PATTERN 12*/
//  int n,i=1;
//  cin>>n;
//  char ch='A';

//  while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<ch<<" ";
//         ch+=1;
//         j+=1;
//     }
//     cout<<endl;
//     i+=1;
//  }
 /*----------*/

 /*PATTERN 13*/
//  int n,i=1;
//  cin>>n;
//  char ch ='A';
//  while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<ch<<" ";
//         j+=1;
//     }
//     cout<<endl;
//     ch+=1;
//     i+=1;

//  }
 /*----------*/

 /*PATTERN 14*/
//  int n,i=1;
//  cin>>n;
//  char ch ='A';
//  while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<ch<<" ";
//         j+=1;
//         ch+=1;
//     }
//     cout<<endl;
//     i+=1;
// }
 /*----------*/

/*PATTERN 15*/
// int n,i=1;
// cin>>n;

// char ch='A'+n-1;
// while(i<=n){
//     int j= 1;
//     while(j<=i){
//         cout<<ch<<" ";
//         ch+=1;
//         j+=1;
//     }
//     cout<<endl;
//     i+=1;
//     ch-=i;
// }
/*----------*/

/*PATTERN 16*/
// int n;
// int i=0;
// cin>>n;
 
// while(i<n){
//     int j=1;
//     char ch='A'+i;
//     while(j<=n){
//         cout<<ch<<" ";
//         j+=1;
//         ch+=1;
//     }
//     cout<<endl;
//     i+=1;
//  }
/*----------*/

/*PATTERN 17*/ // DUAL WAY OF DOING--GOOD QUESTION
// int n,i=1;
// cin>>n;

// while(i<=n){
//     // int j=1;
//     int j=n-i;
//     while (j){
//     // while(j<=n-i){
//         cout<<"  ";
//         j-=1;
//         // j+=1;
//     }
//     int p=1;
//     while(p<=i){
//         cout<<"* ";
//         p+=1;
//     }
//     i+=1;
//     cout<<endl;
// }

/*----------*/

/*PATTERN 18*/
// int n,i=0;
// cin>>n;

// while(i<n){
//     int j=1;
//     while(j<=n-i){
//         cout<<"* ";
//         j+=1;
//     }
//     cout<<endl;
//     i+=1;
// }
/*----------*/


/*PATTERN 19*/
// int n,i=0;
// cin>>n;

// while(i<n){
//     // SPACES
//     int space=0;
//     while(space<=i){
//         cout<<"  ";
//         space+=1;
//     }

//     // STARS
//     int star=n-i;
//     while(star>=1){
//         cout<<"* ";
//         star-=1;

//     }
//     cout<<endl;
//     i+=1;
// }
/*----------*/

/*PATTERN 20*/
// int n,i=0;
// cin>>n;

// while(i<n){
//     //SPACE
//     int j=0;
//     while(j<i){
//         cout<<"  ";
//         j+=1;
//     }
//     //NUMS
//     int k=n-i;
//     while(k>=1){
//         cout<<i+1<<" ";
//         k-=1;
//     }

//     cout<<endl;
//     i+=1;
// }


/*----------*/

/*PATTERN 21*/
// int n,i=1;
// cin>>n;

// while(i<=n){
//     int s=n-i;
//     while(s>=1){
//         cout<<"  ";
//         s-=1;
//     }

//     int p=1;
//     while(p<=i){
//         cout<<i<<" ";
//         p+=1;
//     }


//     cout<<endl;
//     i+=1;
// }
/*----------*/

/*PATTERN 22*/
// int n,i=1;
// cin>>n;
// while(i<=n){
//     int s=1;
//     while(s<i){
//         cout<<"  ";
//         s+=1;
//     }
    
//     int num=i;
//     while(num<=n){
//         cout<<num<<" ";
//         num+=1;
//     }

//     cout<<endl;
//     i+=1;
// }
/*----------*/

/*PATTERN 23*/
// int n,i=1,r=1;
// cin>>n;

// while(i<=n){
//     int j= n-i;
//     while(j>=1){
//         cout<<"  ";
//         j-=1;
//     }
//     int p=1;
//     while(p<=i){
//         cout<<r<<" ";
//         r+=1;
//         p+=1;
//     }


//     cout<<endl;
//     i+=1;
// }
/*----------*/

/*PATTERN 24*/
// int n, i=1;
// cin>>n;

// while(i<=n){
//     int j=1;
//     while(j<=n-i){
//         cout<<"  ";
//         j+=1;
//     }

//     int p=1;
//     while(p<=i){
//         cout<<p<<" ";
//         p+=1;
//     }

//     int t=i-1;
//     while(t>=1){
//         cout<<t<<" ";
//         t-=1;
//     }

//     cout<<endl;
//     i+=1;
// }
/*----------*/

/*PATTERN 25*/
int n,i=0;
cin>>n;
while(i<n){
    int p=1;
    while(p<=n-i){
        cout<<p<<" ";
        p+=1;
    }

    int q=i;
    while(q<2*i){
        cout<<"* * ";
        q+=1;
    }




    int r=n-i;
    while(r>=1){
        cout<<r<<" ";
        r-=1;
    }

    cout<<endl;
    i+=1;
}
/*----------*/


}