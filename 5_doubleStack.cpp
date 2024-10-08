#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define n 10
using namespace std;
char P[]={'>',' ',' ',' ',' ',' '};
int S[n],mov[2],X,Y,pil=0;
int *top1,*top2,*dasar1,*dasar2,*helpI;
//utama
void awal(){
 top1=&S[-1];
   top2=&S[n];
   dasar1=&S[-1];
   dasar2=&S[n];
   helpI=&S[-1];
}
void push1(int x){
 top1=top1+1;
   *top1=x;
}
void push2(int y){
 top2=top2-1;
   *top2=y;
}
void pop1(){
 X=*top1;
   *top1=0;
   top1=top1-1;
}
void pop2(){
 Y=*top2;
   *top2=0;
   top2=top2+1;
}
int BisaDiisi(int k){
 if(top2-top1>k)
    return 1;
   else
    return 0;
}
int BisaDiambil1(){
 if(top1>dasar1)
    return 1;
   else
    return 0;
}
int BisaDiambil2(){
 if(top2<dasar2)
    return 1;
   else
    return 0;
}
void tampil(){
 cout<<"\n================ data menjadi ==================="<<endl;
   while(helpI!=(dasar2-1)){
    helpI++;
      cout<<*helpI<<" ";
   }
   cout<<"\n======================================================"<<endl;
   helpI=&S[-1];
}
//tambahan
void tampilMenu(){
    system("cls");
    cout<<"========================================================"<<endl;
    cout<<"1. Push 1"<<endl;
    cout<<"2. Push 2"<<endl;
    cout<<"3. Pop 1"<<endl;
    cout<<"4. Pop 2"<<endl;
    cout<<"========================================================="<<endl;
      cout<<"pilihan anda : ";cin>>pil;

}


main(){
 awal();
   do{
  tampilMenu();
      cout<<endl;
  //cout<<"nilai pil = "<<pil<<endl;
    switch(pil){
     case 1: if(BisaDiisi(1)){
           cout<<"masukkan bilangan = ";
                  cin>>X;
           push1(X);
         }
                else{
                cout<<"maaf tidak ada tempat untuk push";
                }break;
      case 2: if(BisaDiisi(1)){
           cout<<"masukkan bilangan = ";
                  cin>>Y;
           push2(Y);
          }
               else{
                 cout<<"maaf tidak ada tempat untuk push";
               }break;
      case 3: if(BisaDiambil1()){
          pop1();
                   cout<<"data yang diambil = "<<X<<endl;
          }
                else{
                cout<<"maaf stack 1 tidak ada isinya"<<endl;
                }break;
      case 4: if(BisaDiambil2()){
           pop2();
                  cout<<"angka yang diambil = "<<Y<<endl;
          }
               else{
                 cout<<"maaf stack 2 tidak ada isinya"<<endl;
               }break;
   }
    tampil();
      cout<<"\nenter untuk mengulang dan esc untuk keluar !";
      do{
       mov[0]=getch();
         if(mov[0]==27)
          exit(0);
      }while(mov[0]!=13);
   }while(mov[0]==13);
 getch();

}
