#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main() {
int queue[10], i, head=-1, tail=-1, enqueue, pil, urut=0, tmp;
do {
system("pause");
system("cls");
printf("1. INSERT ");
printf("2. DELETE ");
printf("3. CETAK ANTRIAN ");
printf("4. QUIT ");
printf("Silahkan masukkan pilihan anda : ");
scanf("%d", &pil);
printf(" ");
if(pil==1) {
    if(tail==9) {
        printf("Antrian Penuh");
        }
        else if(tail==-1) {
            head++;tail++;
        printf("Masukkan nilai : ");
        scanf("%d", &enqueue);
        queue[tail]=enqueue;
        urut++;
        printf("Nomor urut : %d", urut);
        }
        else {
            tail++;
            printf("Masukkan nilai : ");
            scanf("%d", &enqueue);
            queue[tail]=enqueue;
            urut++;
            printf("Nomor urut : %d", urut);
            printf("Anda harus menunggu %d antrian lagi", tail);
            }
        }
        else if(pil==2) {
            if(tail==-1) {
                printf("Antrian kosong");
                }
            else {
                printf("Data dengan nilai %d sudah dilayani", queue[head]);
                tmp=queue[head];
                for(i=head;i<=tail;i++) {queue[i]=queue[i+1];}
                queue[tail]=tmp;
                urut++;
                printf("Data dengan nilai %d masuk antrian", queue[tail], urut);
                if(tail==0) {
                    printf("Yang bersangkutan langsung dilayani");
                }
                else {
                    printf("Yang bersangkutan harus menunggu %d antrian lagi", tail);
                    }
            }
            }
            else if(pil==3) {
                if(tail==-1) {
                    printf("Antrian kosong");
                    }
                    else {
                        for(i=head;i<=tail;i++) {
                            printf("Antrian ke-%d : %d", i+1, queue[i]);
                            }
                        printf("");
                        }
                        }
                        else if(pil==4) {
                            printf("Anda telah selesai menggunakan program Queue Circular");
                            }
                            else {
                                printf("Pilihan yang anda masukkan tidak valid");
                            }
                            } 
                            while(pil!=4);
getch();
}