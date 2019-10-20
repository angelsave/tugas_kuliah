#include <iostream>
using namespace std;
main(){
    float k, l, r;
    const float phi = 3.14;
    cout<<"|===============================================|"<<endl;
    cout<<"     PROGRAM PENGHITUNG KELILING LINGKARAN"<<endl;
    cout<<"|===============================================|"<<endl;
    cout<<"MASUKKAN JARI-JARI = ";
    cin>>r;
    cout<<endl;
    k = 2 * phi * r;
    cout<<"KELILING LINGKARAN ADALAH = "<<k<<endl;
    cout<<endl;
    cout<<"|===============================================|"<<endl;
    cout<<"     PROGRAM PENGHITUNG LUAS LINGKARAN"<<endl;
    cout<<"|===============================================|"<<endl;
    cout<<"MASUKKAN JARI-JARI = ";
    cin>>r;
    cout<<endl;
    l = phi*r*r;
    cout<<"LUAS LINGKARAN ADALAH = "<<l<<endl;
    return 0;


}
