#include<iostream>
using namespace std;
int main(){
    // rectangle pattern
    // for(int row=0;row<3;row++){
    //     for (int col=0;col<5;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }

    // square pattern
    // int n;
    // cin>>n;
    // for(int row=0;row<n;row++){
    //     for (int col=0;col<n;col++){
    //         cout<<"* ";

    //     }
    //     cout<<endl;
    // }



    //Hollow rectangle pattern

    // int n;
    // cout<<"Enter the number of lines you want to print";
    // cin>>n;
    // for (int row=0;row<n;row++){
        
    //         if (row==0 || row==n-1){
    //             for (int col=0;col<n;col++){
    //             cout<<"* ";
    //             }
    //         }
    //         else{
    //             cout<<"* ";
    //             for(int i=0;i<n-2;i++){
    //                 cout<<"  ";
    //             }
    //             cout<<"* ";
    //         }
        
    //     cout<<endl;
        
    // }

    // int a;
    // cin>>a;
    // for (int row=0;row<a;row++){
    //     if (row==0||row==a-1){
    //         for (int col=0;col<5;col++){
    //             cout<<"* ";
    //         }
    //         cout<<endl;
    //     }
    //     else{
    //         cout<<"* ";
    //         for (int i=0;i<3;i++){
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //         cout<<endl;
    //     }
    // }     



    /// half Pyramid pattern
    // int n;
    // cin>>n;
    // for (int row=0;row<n;row++){
    //     for (int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }  
    //     cout<<endl;
    // }    

    //inverted half pyramid pattern
    // int n;
    // cin>>n;
    // for (int row =0;row<n;row++){
    //     for (int col=0;col<n-row;col++){
    //         cout<<"* ";

    //     }
    //     cout<<endl;
    // }
            
    //Numeric half pyramid patttern
    // int n;
    // cin>>n;
    // for (int row = 0;row<n;row++){
    //     for (int  col=0;col<row+1;col++){//for half inverted col<n-row
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }       


    //inverted numeric half pyramid pattern
    // int n;
    // cin>>n;
    // for (int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }     

    //full Pyramid Pattern
    // int n;
    // cin >>n;
    // for (int row=0;row < n;row++){
    //     for (int col=0;col<n-row-1;col++){
    //         cout<<"  ";
    //     } 
    //     for (int col=0;col<2*row +1 ;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // } 

    //inverted full pyramid pattern
    // int n;
    // cin>>n;
    // for (int row =0; row <n; row++){
    //     for (int col=0;col<row;col++){
    //         cout<<"  ";


    //     }
    //     for (int col=0;col<((n-row)*2)-1;col++){
    //         cout<<" "<<col+1;
    //     }
    //     cout<<endl;

    // }


    // //inverted hollow pyramid right aligned
    // int n;
    // cin>>n;
    // for (int row =0;row<n;row++){
    //     // if (row==0){
    //     //     for (int col=0;col<n-row;col++){
    //     //         cout<<"* ";
    //     //     }
            
    //     // }
    //     // for (int col=0;col<n-row;col++){
    //     //     if (row==0){
    //     //         cout<<"* ";
            
    //     //     }
    //     //     else if(col==0){
    //     //         cout<<"* ";
    //     //     }
    //     //     else if(col==n-row-1){
    //     //         cout<<"* ";
    //     //     }
    //     //     else{
    //     //         cout<<"  ";
    //     //     }

    //     // }
    //     for (int col=0;col<n-row;col++){
    //         if(col==0||row==0||col==n-row-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
        
    //}      



    ////Pyramid pattern
    // int n;
    // cout<<"Please enter the now of rows You Want to print:";
    // cin>>n;
    // for (int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<" ";

    //     }
    //     for (int col1=0;col1<row+1;col1++){
    //         cout<<"* ";

    //     }
    //     cout<<endl;
    // }


    /////Inverted pyramid pattern
    // int n;
    // cout<<"Please enter the now of rows You Want to print:";
    // cin>>n;
    // for (int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<" ";
            
    //     }
    //     for (int col1=0;col1<n-row;col1++){
    //         cout<<"* ";

    //     }
    //     cout<<endl;
    // }



    /////Diamond pattern


    // int n;
    // cout<<"Please enter the now of rows You Want to print:";
    // cin>>n;
    // for (int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<" ";

    //     }
    //     for (int col1=0;col1<row+1;col1++){
    //         cout<<"* ";

    //     }
    //     cout<<endl;
    // }

    // for (int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<" ";
            
    //     }
    //     for (int col1=0;col1<n-row;col1++){
    //         cout<<"* ";

    //     }
    //     cout<<endl;
    // }



    ////Hollow diamond pattern
    
    // int n;
    // cout<<"Enter the number of lines you want to print :";
    // cin>>n;

    // for (int row=0;row<(n);row++){
    //     for (int col=0;(col<n-row);col++){
    //         cout<<" ";
    //     }
    //     for (int col=0;col<2*row+1;col++){
    //         if (col==0||col==2*row){
    //         cout<<"*";
    //         }
    //         else {
    //             cout<<" ";
    //         }
    //     }
    
    //     cout<<endl;
    // }
    
    // for (int row=0;row<(n);row++){
    //     for (int col=0;(col<row+1);col++){
    //         cout<<" ";
    //     }
    //     for (int col=0;col<2*(n-row)+1;col++){
    //         if (col==0||col==2*(n-row-1)){
    //         cout<<"*";
    //         }
    //         else {
    //             cout<<" ";
    //         }
    //     }
    
    //     cout<<endl;
    // }


    ////Flipped solid Diamond
    // int n;
    // cout <<"Enter the no of line you want to print :";
    // cin>>n;
    // for (int row=0; row<n;row++){
    //     for (int col=0;col<n-row;col++){
    //         cout<<"*";

    //     }
    //     for(int col=0;col<2*row+1;col++){
    //         cout<<" ";

    //     }
    //     for (int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    // }

    // for (int row=0; row<n;row++){
    //     for (int col=0;col<row+1;col++){
    //         cout<<"*";

    //     }
    //     for(int col=0;col<2*(n-row-1)+1;col++){
    //         cout<<" ";

    //     }
    //     for (int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }
//// hollow DIamond pattern 


    // int n;
    // cout <<"Enter the no of line you want to print :";
    // cin>>n;
    // for (int row=0;row<n;row++){
    //     for (int col=0;col<n-row;col++){
    //         cout<<" ";
    //     }
    //     for (int col=0;col<2*row+1;col++){
    //         if (col==0||col==row*2){
    //             cout <<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout <<endl;
    // }

    // for (int row=0;row<n;row++){
    //     for (int col=0;col<row+1;col++){
    //         cout<<" ";
    //     }
    //     for (int col=0;col<2*(n-row);col++){
    //         if (col==0||col==2*(n-row-1)){
    //             cout <<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout <<endl;
    // }



    /////fancy pattern
    // int n;
    // cout<<"Please Enter a Number :";
    // cin>>n;

    // for (int row=0;row<n;row++){
    //     for (int col=0;col<row+1;col++){
    //         cout<<row+1;
    //         if(col!=row){
    //             cout<<"*";
    //         } 
    //     }
    //     cout<<endl;
    // }
    // for (int row=0;row<n;row++){
    //      for (int col=0;col<n-row;col++){
    //         cout<<n-row;
    //         if(col!=n-row-1){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    ////// Important concept for loops
    // int n;
    // cout <<"ENter the Number of lines You Want ot print :";
    // cin >>n;
    // for (int row=0;row<n;row++ ){
    //     int col;
    //     for (col=0;col<row+1;col++){
    //         cout<<col+1;
    //     }
    //      col=col-1;
    //     //reverse counting
    //     for(col=row;col>=1;col--){
    //         cout<<col; 
    //     }


    //     cout<<endl;
    // }





    ////Alphabet Palindrome Pyramid
    int n;
    cout<<"Enter the number of lines You want to Print :";
    cin >>n;
    char ch = 65;
    

    for (int row =0;row <n;row++){
        for (int col =0 ;col<row+1;col++){
            cout <<char(ch+col) ;
        }
       for (int col=row;col>=1;col--){
        cout<<char(ch+col-1);
       }
        cout<<endl;

    }


    
}
