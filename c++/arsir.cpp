#include <iostream>
#include <math.h>
using namespace std;
main(){
    float arsir, lingkar1, lingkar2, r1, r2;
    const float phi = 3.14;
    cout<<"|===============================================|"<<endl;
    cout<<"     MENGHITUNG NILAI DAERAH YANG DIARSIR"<<endl;
    cout<<"|===============================================|"<<endl;
    cout<<endl;
    cout<<"MASUKKAN JARI-JARI LUAR = ";
    cin>>r1;
    cout<<endl;
    cout<<"MASUKKAN JARI-JARI DALAM = ";
    cin>>r2;
    cout<<endl;
    lingkar1 = phi*(pow(r1,2));
    lingkar2 = phi*(pow(r2,2));
    cout<<"LINGKAR LUAR = "<<lingkar1<<endl;
    cout<<"LINGKAR DALAM = "<<lingkar2<<endl;
    cout<<endl;
    arsir = lingkar1+lingkar2;
    cout<<"|===============================================|"<<endl;
    cout<<"       LUAS DAERAH YANG DIARSIR = "<<arsir<<endl;
    cout<<"|===============================================|"<<endl;



}
