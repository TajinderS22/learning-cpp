#include <iostream>
using namespace std;

void add(int a, int b){
        
    cout<<"sum is "<<a+b<<endl; }

void max (int a,int b,int c){
    if (a>b&&a>c){
        cout<<a;    }
    else if(b>a&&b>c){
        cout<<b;
    }
    else{
        cout<<c;
        cout<<endl;
    }
}

void countn(int n){
    for (int i=1 ;i<=n ; i++){
        cout<<i<<endl;
    }
}



// char getgrades( int n ){

//     switch ((int)(n/10)){
//     case 9 : return 'A'; break;
//     case 8 : return 'B'; break;
//     case 7 : return 'C'; break;
//     case 6 : return 'D'; break;
//     case 5 : return 'E'; break;
//     default:  return 'F';
//     }
// }

int factorial (int n ){
    int num=1;
    for (int i=1;i<=n;i++){
        num= num *i;
             
    }
    return num;
}
int isprime (int n){
    int temp =0;
    for (int i =2;i<n;i++){
        if ((n/i)==0){
            temp =1;
            cout <<temp<<endl;

        }
    }
    if (temp == 1){
        cout<<"Not Prime";
    }else{
        cout <<"Prime";
    }
    return 0;
}

int  main (){

    int a,b,c,n;
    
    
    // int a,b;
    // cout<<"Enter a number: ";
    // cin>> a;
    // cout<<"Enter b number: ";
    // cin>> b;

    // add(a,b);
    // cout<<++a+b<<endl;

    // cin>>a;
    // // max(a,b,c);
   // countn(a);
    cout<<"Enter the number : " ;
    cin >>a;
    // cout<<getgrades(a);
    // cout<<factorial(a);
    isprime(a);
    


}