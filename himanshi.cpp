#include <iostream>
void Print3(int n){
    for (int i=1;i<=n ;i++){
        int space=0;
        for (int j=1;j<=i;j++){
            if (space){
                std :: cout<<" ";
                space --;
            }
            else{
                std:: cout <<j<<" ";
            }
        }
        std::cout<<std::endl;
    }
}



void Print4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i ; j++){
            std::cout<<i<<" ";
        }
        std:: cout<<std::endl;
    }
}

void Print5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1 ; j++){
            std::cout<<"*";
        }
        std:: cout<<std::endl;
    }
}

void Print6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            std::cout<<j<<" ";
        }
        std:: cout<<std::endl;
    }
}



void Print7(int n){
    for(int i=0; i<=n; i++){
        //space
        for( int j=0; j<n-i; j++){
            std::cout<<" ";
        }
        //star
        for(int j=0; j<2*i+1 ;j++){
            std::cout<<"*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            std::cout<< " ";
        }
        std::cout<<std::endl;
        }
}


void Print8(int n){
    for(int i=0; i<=n; i++){
        //space
        for( int j=0; j<i; j++){
            std::cout<<" ";
        }
        //star
        for(int j=0; j<2*n-(2*i+1) ;j++){
            std::cout<<"*";
        }
        //space
        for(int j=0; j<i; j++){
            std::cout<< " ";
        }
        std::cout<<std::endl;
        }
}


  //pattern9
/*int main(){
    Print7(5);
    Print8(5);
    return 0;*/

//pattern 10
#include <iostream>
void pattern10(int n ){
    for (int i=0; i<=2*n-1; i++){
        int stars=i;
        if (i>n)stars=2*n-i;
        for (int j=1;j<=stars;j++){
        std::cout<<"*";
        }
        std::cout<<std::endl;

    }
}




//pattern 11
#include<iostream>
void pattern11(int n){
   int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0)start=1;
        else start=0;
        for(int j=0; j<=i;j++){
        std::cout<<start;
        start=1-start;
    }
    std::cout<<std ::endl;
    }
}


//pattern 12
#include <iostream>
void pattern121(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            std::cout<<j<<" ";
        }
        int space=4;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i; j++){
            std::cout<<i<<" ";
        }
    }
        
        std::cout<<std::endl;
    }
    }


//pattern12
#include <iostream>
void pattern12(int n){
    int space=2*(n-1);
    for(int i=0;i<n ;i++){
        //numbers
        for(int j=1; j<=i ;j++){
            std::cout<<j;
        }
        //space
        for(int j=1;j<=space ;j++){
            std::cout<<"  ";
        }
        //numbers
        for(int j=i;j>=1;j--){
            std::cout <<j;
        }
            std::cout<<std::endl;

    }

}


//pattern 14
#include<iostream>
void pattern14( int n){
    int num=1;
    for (int i=1; i<=n ; i++){
        for (int j=1 ;j<=i ;j++){
            std:: cout<<num<<"";
            num=num +1;
        }
        std ::cout<<std::endl;
    }
}
//pattern 15
#include<iostream>
void pattern15(int n){
    for (int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;

    }
}
//pattern 16

#include<iostream>
void pattern16(int n){
    for (int i=0;i<=n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;
    }
}

#include<iostream>
void pattern17(int n){
    for (int i=0;i<=n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;}
}
//pattern18
#include<iostream>
void pattern18(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1 ;j++){ 
            std::cout<<" ";
        }
        //characters
         char ch ='A';
         int breakpoint=(2*i+1)/2;
        for(int j=0; j<2*i+1; j++){
            std::cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        //space
        for(int j=0;j<n-i-1;j++){
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}
//pattern19
#include<iostream>
void pattern19(int n){
    for(int i=0;i<n;i++){
         
         for(char ch='E'-i;ch<='E';ch++){
            std::cout<<ch<<" ";
         }
         std::cout<<std::endl;
    }
}
//pattern 20
#include<iostream>
void pattern20 (int n){
    
    for(int i=0;i<n; i++){
        //stars
        for (int j=0; j<=n-i-1;j++){
            std::cout<<"*";
        }
        //spaces
        for(int j=0;j<2*i;j++){
            std::cout<<" ";
        }
        //stars
        for (int j= 0;j<=n-i-1; j++)
        {
            std:: cout<<"*";
        }
        std::cout<<std::endl;
        }
    for(int i=0;i<n;i++){
      //stars
        for( int j=0;j<i+1;j++){
            std::cout<<"*";
        }
        //spaces
        for(int j=0;j<2*n-2*(i+1); j++){
            std::cout<<" ";
        }
        //stars
        for(int j=0;j<i+1;j++){
            std:: cout<<"*";
        }

        std::cout<<std::endl;
    }
    
}
//pattern 21
#include<iostream>
void pattern21(int n){
    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<=i;j++){
            std::cout<<"*";
        }
        //spaces
        for(int j=0;j<2*n-2*(i+1);j++){
            std::cout<<" ";
        }
        //stars
        for(int j=0; j<=i;j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}

void pattern212(int n){
    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<n-i;j++){
            std::cout<<"*";
        }
        //spaces
        for(int j=0;j<2*(i+1);j++){
            std::cout<<" ";
        }
        //stars
        for(int j=0; j<n-i;j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    }
//int main(){
   // pattern21(5);
  //  pattern212(4);
   // return 0;

 
 #include<iostream>
 void pattern22(int n){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            std::cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            std::cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    
 }
 void pattern221(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            std::cout<<"*";
        }
        for(int j=0;j<(-2*i+2);j++){
            std::cout<<" ";
            }
            for(int j=0;j<i;j++){
                std::cout<<"*";
            }
            std::cout<<std::endl;
 }
 }
 int main() {
    pattern22(2);
    pattern221(2);
    return 0;
 }