
#include <iostream>

using namespace std;


int main() {
       int n;
       cout<<" masukkan angka 1-9 : ";
       
    cin>>n;
    
	cout<<endl;
    
     if(n >= 1 && n<10){
         for(int a=n;a>0;a--){
             for(int y =0; y<a;y++){
                 cout<<a<<" ";}
             cout<<endl;}
         
     }else{
         cout<<"Bilangan tidak sesuai!";
     }
         
    return 0;
}
