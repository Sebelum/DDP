#include <iostream>

using namespace std;


int main() {
    int t,b,u;
    cout<<" masukan tinggi , berat, usia anda : "endl;
    cin>>t>>b>>u;
    
    if(t>170 && b>55 && u >= 15){
        cout<< "Lolos"<<endl;
    }else {
        cout<<"Tidak Lolos"<<endl;
    }
    return 0;
}
