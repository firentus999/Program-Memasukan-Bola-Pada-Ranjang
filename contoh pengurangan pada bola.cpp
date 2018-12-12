#include<iostream
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
const char nama []="firentus agustone";
using namespace std;

int main()
{
    printf (nama);
    int x,jumlah_anak;
 cout<<" memasukan bola pada ranjang:";
 cin>>jumlah_anak;
 cout<<"mari kita ambil bola sambil berhitung dari "<<jumlah_anak<<endl;
 cout<<"mulai berhitung !"<<endl;
 for(x=jumlah_anak;x>0;x--)
 {
     if (x>1)
     cout<<"jumlah bola ada "<<x<<" diambil satu tinggal " <<x-1<<endl;
     else if(x=1)
     cout<<"jumlah bola ada 1 diambil satu tinggal keranjangnya"<<endl;
 }
  getch ();
 return 0 ;
}
