#include <iostream>

using namespace std;


int main() {
    int n,j,m,d,sisa;
    cout<<" masukan jumlah detik yang telewati : ";
    cin>>n;
    
    j=n/3600;
    sisa=n%3600;
    m=sisa/60;
    d=sisa%60;
    
    cout<<"Jam yang anda lewati adalah : "<<endl;
    
    cout << j <<" jam "<< m <<" menit " << d << " detik ";  
    return 0;
}
