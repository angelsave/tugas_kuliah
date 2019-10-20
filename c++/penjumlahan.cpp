#include <iostream>
using namespace std;
main(){
    int jam, menit, detik, total, jam1, menit1, detik1, total1, selisih;
    cout<<"|===============================================|"<<endl;
    cout<<"|PROGRAM MENGHITUNG NILAI SELISIH WAKTU DUA DATA|"<<endl;
    cout<<"|===============================================|"<<endl;
    cout<<endl;
    cout<<"|==============================================|"<<endl;
    cout<<"                INPUT DATA 1"<<endl;
    cout<<"|==============================================|"<<endl;
    cout<<endl;
    cout<<"MASUKKAN JAM = ";
    cin>>jam;
    cout<<endl;
    cout<<"MASUKKAN MENIT = ";
    cin>>menit;
    cout<<endl;
    cout<<"MASUKKAN DETIK = ";
    cin>>detik;
    cout<<endl;
    total = (3600*jam)+(60*menit)+detik;
    cout<<"|==============================================|"<<endl;
    cout<<"            TOTAL JUMLAH DETIK = "<<total;
    cout<<endl;
    cout<<"|==============================================|"<<endl;
    cout<<endl;
    cout<<"|==============================================|"<<endl;
    cout<<"                  INPUT DATA 2"<<endl;
    cout<<"|==============================================|"<<endl;
    cout<<endl;
    cout<<"MASUKKAN JAM = ";
    cin>>jam1;
    cout<<endl;
    cout<<"MASUKKAN MENIT = ";
    cin>>menit1;
    cout<<endl;
    cout<<"MASUKKAN DETIK = ";
    cin>>detik1;
    cout<<endl;
    total1 = (3600*jam1)+(60*menit1)+detik1;
    cout<<"|==============================================|"<<endl;
    cout<<"          TOTAL JUMLAH DETIK = "<<total1;
    cout<<endl;
    cout<<"|==============================================|"<<endl;
    cout<<endl;
    cout<<"|==============================================|"<<endl;
    selisih = total-total1;
    cout<<"               NILAI SELISIH = "<<selisih;
    cout<<endl;
    cout<<"|==============================================|"<<endl;




}
