#include<iostream>
#include<string>

using namespace std;
int main(){
	int belanja, total_harga, total_belanja, status, batas_diskon = 1102019;
    string ktp;
    cout<<"Status"<<endl;
    cout<<"1.Menikah dan memiliki anak"<<endl;
    cout<<"2.Menikah dan belum memiliki anak"<<endl;
    cout<<"3.Belum Menikah tetapi memiliki kartu keanggotaan"<<endl;
    cout<<"4.Menikah tetapi tidak memiliki kartu keanggotaan"<<endl;
    cout<<"Silahkan masukkan status Anda : ";
    cin>>status;
    cout<<"Total belanja anda : ";
    cin>>belanja;
    cout<<"Masukkan asal berdasarkan KTP : ";
    cin>>ktp;
    if(belanja>=batas_diskon){
        if(status == 1){
        	cout<<"Anda mendapatkan diskon 75%"<<endl;
            total_harga = belanja - (belanja *0.75);
        }
        else if(status == 2){
            cout<<"Anda mendapatkan diskon 50 %"<<endl;
            total_harga = belanja - (belanja*0.5);
        }
        else if(status == 3){
            cout<<"Anda mendapatkan diskon 25 %"<<endl;
            total_harga = belanja - (belanja*0.25);
        }
        else if(status == 4){
            cout<<"Anda mendapatkan diskon 10 %"<<endl;
            total_harga = belanja - (belanja*0.1);
        }
    }
        else{
            cout<<"Anda tidak mendapatkan diskon"<<endl;
                total_harga = belanja;
        }
    if(ktp != "makassar"){
        cout<<"Anda mendapatkan tambahan diskon sebesar 10 %"<<endl;
        total_belanja = total_harga - (belanja*0.1);
        cout<<"Total harga setelah diskon adalah : "<<total_belanja<<endl;
    }
    else{
        cout<<"Total harga setelah diskon adalah : "<<endl;
    }
    return 0;
}
