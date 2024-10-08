#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <windows.h>
#include <conio.h>
#define MAX 10
using namespace std;

int queue[MAX];

int front = -1, rear = -1;

void cover(){

	cout<<"============================================\n";

	cout<<"Nama\t\t: Sonasa Rinusantoro\n";

	cout<<"NID\t\t: 02289\n";

	cout<<"============================================\n";

	cout<<"1. INSERT\n";

	cout<<"2. DELETE\n";

	cout<<"3. CETAK\n";

	cout<<"4. QUIT\n";

	cout<<"============================================";

}



void insert() {

int num;

cout<<"\nMasukan element yang akan di queque : ";

cin>>num;

if(rear == MAX-1)

cout<<"\n OVERFLOW";

else if(front == -1 && rear == -1)

front = rear = 0;

else

rear++;

queue[rear] = num;

cout<<"Element yang di Queque "<<num<<endl;

}



int delete_element()

{

	int val;

	if(front == -1 || front > rear)

	{

		cout<<"\n UNDERFLOW";

		return -1;

	}

	

	else

	{

		val = queue[front];

		front++;

		if(front > rear)

		front = rear = -1;

		return val;

	}

}





void display()

{

int i;

cout<<"\n";

if(front == -1 || front > rear )

cout<<"\n Queque kosong";

else {

for(i = front;i <= rear ; i++)

cout<<"\t "<<queue[i];

}

}



int main()

{

int choice, val;

do {

system("cls");

cover();

cout<<"\n\n\nPilihan anda : ";

cin>>choice;

switch(choice)

{

case 1:

	insert();

	getch();break;

case 2:

	val = delete_element();

	if(val != -1);

	printf("\n The number deleted is : %d", val);

	getch();break;

case 3:

	display();

	getch();break;

}

} while(choice != 4);

return 0;

}
