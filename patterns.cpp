#include<iostream>
using namespace std;

void block();
void pyramid();
void pyramid_with_numbers();
void pyramid_with_n2();
void inverse_pyramid();
void inverse_pyramid_number();
void triangle();
void inverse_triangle();

int main(){
    inverse_triangle();
    return 0;
}

void inverse_triangle(){
    for(int i=0;i<5;i++){

        for(int j=0; j<9; j++){

            if(i+j <= 8 && i <= j)
                cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
}

void triangle(){
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            if(i+j>=4 && i+4>=j)
            cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
}

void inverse_pyramid_number(){
    for( int i=0;i<5;i++){
        for( int j=1;j<=5-i;j++)
        cout<<j;
        cout<<"\n";
    }
}

void inverse_pyramid(){
    for( int i=0;i<5;i++){
        for( int j=0;j<5-i;j++)
        cout<<"*";
        cout<<"\n";
    }
}

void pyramid_with_n2(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++)
        cout<<i;
        cout<<"\n";
    }
}

void pyramid_with_numbers(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++)
        cout<<j;
        cout<<"\n";
    }
}

void pyramid(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++)
        cout<<"*";
        cout<<"\n";
    }
}

void block(){
    for(int i=0;i<5;i++){
        for(int j = 0; j<5; j++)
        cout<<"*";
        cout<<"\n";
    }
}