#include <iostream>
using namespace std;

int main()
{
  //Deklarasi array tiga dimensi dengan nama "Bilangan" dengan ukuran 2x3x4
  
  int Bilangan [2][3][4];
  
  // Mendeklarasi variabel untuk indeks perulangan
  int i,j,k;
  
  cout<<"\t===============================";
  cout<<"\n\t== Contoh Array Tiga Dimensi ==\n";
  cout<<"\t===============================\n\n";
  
  // Mengisi nilai kedalam elemen-elemen array angka
  cout<<"== Masukkan elemen-elemen array Bilangan ==\n";
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=0;k<4;k++)
      {
        cout<<"Bilangan indeks ke ["<<i<<"]["<<j<<"]["<<k<<"]"<<" = ";
        cin>>Bilangan[i][j][k];
      }
    }
  }
  
  cout<<"\n\n===============================\n";
  cout<<"== Tampil nilai elemen Array ==\n";
  cout<<"===============================\n";
  
  //menampilkan nilai dari setiap elemen array angka
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      for(k=0;k<4;k++)
      {
        cout<<"Bilangan indeks ke ["<<i<<"]["<<j<<"]["<<k<<"]"<<" = "<<Bilangan[i][j][k]<<endl;
      }
    }
  }
  
  system ("pause");
  return 0;
}
