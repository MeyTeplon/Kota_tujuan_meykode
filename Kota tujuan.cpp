#include <iostream>
using namespace std; 
//Mey..program sederhana keberangkata 

//membuat global variabel
int jam, menit, tujuan;
int kecepatan;

int main(){
    system("cls");
    menu:
    cout<<"   Program Waktu Tempuh\n";
    cout<<"=========================\n\n";
    cout<<"   A. Inputkan Jam Keberangkatan (0-24) \t: ";
    cin>>jam;
    cout<<"   B. Inputkan Menit Keberangkatan (0-60) \t: ";
    cin>>menit;
    cout<<"   C. Input Kecepatan Kereta (Km/jam) \t\t: ";
    cin>>kecepatan;
    cout<<"\n";
    cout<<"   Input Kota Tujuan\n";
    cout<<"   1. Ja - Ban\n";
    cout<<"   2. Ja - Sem\n";
    cout<<"   3. Ja - Solo\n";
    cout<<"   4. Ja - Jog\n";
    cout<<"   5. Ja - Sur\n";
    cout<<"   Mau ke mana \t\t: ";
    cin>>tujuan;
    
        int jm_datang;
        int jam_dat;
        int mnt_dat;
        float datang;
        int dat,time;
        int mnt_datang;
        float konversi;
        int jarak[5]={151, 442, 539, 562,770}; 
        //dalam Km
    
    switch (tujuan){
            case 1:
            konversi=(jam*60)+menit; //variabel bantu
            jm_datang= jarak[0]/kecepatan;
            
            mnt_datang=(jarak[0]%kecepatan)*0.6;
            dat=(menit+mnt_datang);
            if(dat>60){
                    time=dat-60;                 
            }else if(dat<60){
                time=dat;
            }
            mnt_dat=(menit + mnt_datang)/60;
            jam_dat=(jam+jm_datang)+mnt_dat;
            datang=konversi+jam_dat;
            cout<<"\n   Kereta Tujuan \t: Ja-Ban\n";
            cout<<"   Jarak Tempuh \t: "<<jarak[0];
            cout<<"\n   Waktu Keberangkatan \t: "<<jam<<" : "<<menit;
            cout<<"\n   Waktu Tempuh \t: "<<jm_datang<<" : "<<mnt_datang;
            cout<<"\n   Waktu Kedatangan \t: "<<jam_dat<<" : "<<time;            
            cin.ignore();
            cout<<"\n\n   Tekan Enter untuk menginputkan kembali.\n";
            cin.get();
            system("cls");
            goto menu;
            break;
        case 2:
            konversi=(jam*60)+menit; //variabel bantu
            jm_datang= jarak[1]/kecepatan;
            
            mnt_datang=(jarak[1]%kecepatan)*0.6;
            dat=(menit+mnt_datang);
            if(dat>60){
                    time=dat-60;                 
            }else if(dat<60){
                time=dat;
            }
            mnt_dat=(menit + mnt_datang)/60;
            jam_dat=(jam+jm_datang)+mnt_dat;
            datang=konversi+jam_dat;
            cout<<"\n   Kereta Tujuan \t: Ja-Ban\n";
            cout<<"   Jarak Tempuh \t: "<<jarak[1];
            cout<<"\n   Waktu Keberangkatan \t: "<<jam<<" : "<<menit;
            cout<<"\n   Waktu Tempuh \t: "<<jm_datang<<" : "<<mnt_datang;
            cout<<"\n   Waktu Kedatangan \t: "<<jam_dat<<" : "<<time;            
            cin.ignore();
            cout<<"\n\n   Tekan Enter untuk menginputkan kembali.\n";
            cin.get();
            system("cls");
            goto menu;
            break;
        case 3:
            konversi=(jam*60)+menit; //variabel bantu
            jm_datang= jarak[2]/kecepatan;
            
            mnt_datang=(jarak[2]%kecepatan)*0.6;
            dat=(menit+mnt_datang);
            if(dat>60){
                    time=dat-60;                 
            }else if(dat<60){
                time=dat;
            }
            mnt_dat=(menit + mnt_datang)/60;
            jam_dat=(jam+jm_datang)+mnt_dat;
            datang=konversi+jam_dat;
            cout<<"\n   Kereta Tujuan \t: Ja-Ban\n";
            cout<<"   Jarak Tempuh \t: "<<jarak[2];
            cout<<"\n   Waktu Keberangkatan \t: "<<jam<<" : "<<menit;
            cout<<"\n   Waktu Tempuh \t: "<<jm_datang<<" : "<<mnt_datang;
            cout<<"\n   Waktu Kedatangan \t: "<<jam_dat<<" : "<<time;            
            cin.ignore();
            cout<<"\n\n   Tekan Enter untuk menginputkan kembali.\n";
            cin.get();
            system("cls");
            goto menu;
            break;
        case 4:
            konversi=(jam*60)+menit; //variabel bantu
            jm_datang= jarak[3]/kecepatan;
            
            mnt_datang=(jarak[3]%kecepatan)*0.6;
            dat=(menit+mnt_datang);
            if(dat>60){
                    time=dat-60;                 
            }else if(dat<60){
                time=dat;
            }
            mnt_dat=(menit + mnt_datang)/60;
            jam_dat=(jam+jm_datang)+mnt_dat;
            datang=konversi+jam_dat;
            cout<<"\n   Kereta Tujuan \t: Ja-Ban\n";
            cout<<"   Jarak Tempuh \t: "<<jarak[3];
            cout<<"\n   Waktu Keberangkatan \t: "<<jam<<" : "<<menit;
            cout<<"\n   Waktu Tempuh \t: "<<jm_datang<<" : "<<mnt_datang;
            cout<<"\n   Waktu Kedatangan \t: "<<jam_dat<<" : "<<time;            
            cin.ignore();
            cout<<"\n\n   Tekan Enter untuk menginputkan kembali.\n";
            cin.get();
            system("cls");
            goto menu;
            break;
        case 5:
            konversi=(jam*60)+menit; //variabel bantu
            jm_datang= jarak[4]/kecepatan;
            
            mnt_datang=(jarak[4]%kecepatan)*0.6;
            dat=(menit+mnt_datang);
            if(dat>60){
                    time=dat-60;                 
            }else if(dat<60){
                time=dat;
            }
            mnt_dat=(menit + mnt_datang)/60;
            jam_dat=(jam+jm_datang)+mnt_dat;
            datang=konversi+jam_dat;
            cout<<"\n   Kereta Tujuan \t: Ja-Sur\n";
            cout<<"   Jarak Tempuh \t: "<<jarak[4];
            cout<<"\n   Waktu Keberangkatan \t: "<<jam<<" : "<<menit;
            cout<<"\n   Waktu Tempuh \t: "<<jm_datang<<" : "<<mnt_datang;
            cout<<"\n   Waktu Kedatangan \t: "<<jam_dat<<" : "<<time;            
            cin.ignore();
            cout<<"\n\n   Tekan Enter untuk menginputkan kembali.\n";
            cin.get();
            system("cls");
            goto menu;
            break;
                                    
    }
}