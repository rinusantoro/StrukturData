#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define n 15
using namespace std;

void INSERTL();
void INSERTR();
void DELETEL();
void DELETER();
void CETAKLAYAR();
void Inisialisasi();
void RESET();
int PIL,F,R,L;
char PILIHAN [1],HURUF;
char Q[n];
int main ()
    //dika
    {
        Inisialisasi();
        do
        {
            cout<<"======================"<<endl;
            cout<<"Ahdika Pratama Saputra"<<endl;
            cout<<"======================"<<endl;
            cout<<"    ANIMASI QUEUE     "<<endl;
            cout<<"======================"<<endl;
            cout<<"1. INSERT KIRI "<<endl;
            cout<<"2. INSERT KANAN"<<endl;
            cout<<"3. DELETE KIRI "<<endl;
            cout<<"4. DELETE KANAN"<<endl;
            cout<<"5. CETAK QUEUE"<<endl;
            cout<<"6. QUIT"<<endl;
            cout<<"PILIHAN : ";cin>>PILIHAN;
            PIL=atoi(PILIHAN);
            switch (PIL)
            {
                case 1:
                    INSERTL();
                    break;
                case 2:
                    INSERTR();
                    break;
                case 3:
                    DELETEL();
                    break;
                case 4:
                    DELETER();
                    break;
                case 5:
                    CETAKLAYAR();
                    break;
                default:
                    cout<<"TERIMA KASIH"<<endl;
                    break;
            }
            cout<<"Press any key to continue"<<endl;
            getch();
            system("cls");
        }
        while (PIL<6);
    }
    void INSERTL()
    {
        if(L<n+1)
        {
            L=L-1;
            cout<<endl<<"MASUKAN 1 HURUF (kiri):";
            cin>>HURUF;
            Q[L]=HURUF;
        }
        else
        cout<<"Antrian Penuh"<<endl;
    }
    void INSERTR()
    {
        if(R<n-1)
        {
            cout<<endl<<"MASUKAN 1 HURUF (kanan):";
            cin>>HURUF;
            R=R+1;
            Q[R]=HURUF;
        }
        else
        cout<<"Antrian Penuh"<<endl;
    }
    void CETAKLAYAR()
    {
        if (L<R+1)
        {
            for (int i=L;i<=R;i++)
                cout<<"Q["<<i<<"]="<<Q[i]<<endl;
        }
        else
        cout<<"Antrian Kosong"<<endl;
    }
    void DELETEL()
    {
        if(L<=R+1)
        {
            HURUF=Q[L];
            L=L+1;
            Q[L++]='1';
            cout<<"Data kiri yang diambil :"<<HURUF<<endl;
            if(L==n)
            RESET();
        }
        else
        cout<<"Antrian Kosong"<<endl;
    }
    void DELETER()
    {
        if (L<=R+1)
        {
            HURUF=Q[R];
            R=R-1;
            Q[R++]='1';
            cout<<"Data kanan yang diambil"<<HURUF<<endl;
            if(R==n)
            RESET();
        }
        else
        cout<<"Antrian Kosong"<<endl;
    }
    void Inisialisasi()
    {
        L=0;
        R=-1;
    }
    void RESET()
    {
        L=0;
        R=-1;
    }
