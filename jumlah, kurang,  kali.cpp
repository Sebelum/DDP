#include <iostream>

using namespace std;


int main() {
   int A, B, jumlah , kurang, kali;
   cout<<"masukkan bilangan pertama :";
    cin>>A;
    cout <<endl;
    
    cout<<" masukkan bilangan kedua : ";
    cin>> B;
     cout<<endl;
     
    jumlah = A + B;
    kurang = A - B;
    kali = A * B;
    
    cout <<"hasil jumlah : "<< jumlah<<endl;
    cout<<" hasil kurang : "<< kurang << endl;
    cout<<" hasil kali : "<< kali<< endl;
    return 0;
}
