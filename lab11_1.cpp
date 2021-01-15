#include<iostream>
using namespace std;
int fibonacci(int);

int main(){
    cout << fibonacci(50);
    return 0; 
}

int fibonacci(int x){
if(x<=1){
return x;
}else{
return fibonacci(x-1)+fibonacci(x-2);
}
}
