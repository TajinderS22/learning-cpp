#include <iostream>
using namespace std;

// void add(int a, int b){
        
//     cout<<"sum is "<<a+b<<endl; }

// void max (int a,int b,int c){
//     if (a>b&&a>c){
//         cout<<a;    }
//     else if(b>a&&b>c){
//         cout<<b;
//     }
//     else{
//         cout<<c;
//         cout<<endl;
//     }
// }

// void countn(int n){
//     for (int i=1 ;i<=n ; i++){
//         cout<<i<<endl;
//     }
// }



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

// int factorial (int n ){
//     int num=1;
//     for (int i=1;i<=n;i++){
//         num= num *i;
             
//     }
//     return num;
// }


// *************IF Number is prime or not *****************
// void isprime(int n){
//     int temp =0;
//     for (int i=2;i<n;i++){
//         int num = n %i;
//         if ( (int)num == 0){
//             temp = 1;
//             cout<<i<<endl;
            
//         }
//     }
//     if (temp == 1){
//         cout<<"Number is not Prime"<<endl;
//     }else if(temp == 0){
//         cout<<"Number is Prime"<<endl;
//     }
// }


// ************* Prime Numbers till n *****************

// bool checkprime ( int k){
//     for (int i =2;i<k;i++){
//         if (k%i == 0){
//             return false;
//         }
//     }
//     return true;
// } 


// ************* Reverse Integer *****************
// void reverse(int n){
//     int num=0,rem=0;
//     bool isNeg=false;
//     if (n<0){
//         isNeg=true;
//         n=-n;  
//     }
//     while (n>0){
//         int x=10;
//         rem = n/x;  
//         num =num*10+rem;
//         x=x*10;
//         n=n/10;
//         }
//     cout<<num;

// }

// ************Shift Kth bit ****************
 void shiftkthbit(int n){
    cout<<"Enter How much to shift: ";
    int k;
    cin>>k;
    int mask = 1<<k;
    cout<<(n|mask)<<endl;
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
    // isprime(a);
    //********************printing all primes till n *********************** */ 
//    for (int i=2;i<=a;i++){
//     bool isprime=checkprime(i);
//     if (isprime)
//     {
//         cout<<i<<" is Prime Number"<<endl;
//     }
    
//    }
// ************ reverse Integer *************
//    reverse(a);
    shiftkthbit(a);
    


}