#include <string>
#include <iostream>

using namespace std;

int top = -1;
char stack[128]; // secara program, jika stack sudah berisi lebih dari 128 item, ERROR.
char x;

void push()
{
        cout << "Masukkan satu karakter ";
        cin >> x;

        top++;
        stack[top] = x;

        cin.clear();
        cin.ignore(1, '\n');
}

void pop()
{
        if(top < 0)
        {
               cout << "Stack kosong" << endl;
               return;
        }

        x = stack[top];
        top--;

        cout << "Karakter yang terakhir masuk adalah " << x << endl;
}

void cetak()
{
        if(top < 0)
        {
               cout << "Stack kosong" << endl;
               return;
        }

        int i = 0;
        for(i = top; i >= 0; i--)
               cout << stack[i] << endl;

        // kalo mau dicetak dari yang pertama masuk pakai script dibawah
        //for(i = 0; i <= top; i++)
        //      cout << stack[i] << endl;
}

int main()
{
        string input = "";
        cout << "Pilihan yang dikenal adalah" << endl;
        cout << "\tpush" << endl;
        cout << "\tpop" << endl;
        cout << "\tcetak stack" << endl;
        cout << "\tquit" << endl;

        while(true)
        {
               cout << "Masukkan pilihan: ";

               getline(cin, input);

               if(input == "push")
               {
                       push();
               }
               else if(input == "pop")
               {
                       pop();
               }
               else if(input == "cetak stack")
               {
                       cetak();
               }
               else if(input == "quit")
               {
                       break;
               }
               else
               {
                       cout << "Perintah '" << input << "' tidak dikenal" << endl;
               }
        }

        cout << "Program Akan berhenti" << endl;
}
