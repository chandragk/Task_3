#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "tubeskelompokpegawai.h"

using namespace std;

int main()
{
     char pilih, ulang;
      int data;
        infotype x;
        list l;
        first(l) = NULL;
        last(l) = NULL;
        l.mark=0;
        int i;
         for (i=0;i<5;i++);
        menu :
          cout <<"=============================" << endl;
          cout <<"=== MENU PEGAWAI PT. XXX ===="<< endl;
          cout <<"============================="<< endl;
          cout <<"1. Insert First  "<< endl;
          cout <<"2. Insert After  "<< endl;
          cout <<"3. Insert Last "<< endl;
          cout <<"4. Delete First   "<< endl;
          cout <<"5. Delete After   "<< endl;
          cout <<"6. Delete Last   "<< endl;
          cout <<"7. View Data "<< endl;
          cout <<"8. Search Data   "<< endl;
          cout <<"9. Exit   "<< endl;
          cout <<"\n"<< endl;
          cout<<"\n Masukkan pilihan Anda : "; cin>>pilih;

      switch(pilih)
      {
      case '1' :
            cout<<" ID Pegawai               : ";
            cin>>x.id;
            cout<<" Nama Pegawai             : ";
            cin>>x.nama;
            cout<<" Umur Pegawai             : ";
            cin>>x.tahunmasuk;
             cout<<" Tahun Masuk Pegawai     : ";
            cin>>x.tahunmasuk;
             cout<<" Gaji Pegawai            : ";
            cin>>x.tahunmasuk;

            insertFirst(&l,x);
            cout<<"Data telah ditambahkan"<<endl;
            getch();
            break;
            
      case '2' :
            cout<<" ID Pegawai               : ";
            cin>>x.id;
            cout<<" Nama Pegawai             : ";
            cin>>x.nama;
            cout<<" Umur Pegawai             : ";
            cin>>x.tahunmasuk;
             cout<<" Tahun Masuk Pegawai     : ";
            cin>>x.tahunmasuk;
             cout<<" Gaji Pegawai            : ";
            cin>>x.tahunmasuk;

            insertAfter(&l,x); 
            cout<<"Data telah ditambahkan"<<endl;
            getch();
            break;

      case '3'  :
                cout<<" ID Pegawai               : ";
            cin>>x.id;
            cout<<" Nama Pegawai             : ";//cin>>data;
            cin>>x.nama;
            cout<<" Umur Pegawai             : ";
            cin>>x.tahunmasuk;
             cout<<" Tahun Masuk Pegawai     : ";
            cin>>x.tahunmasuk;
             cout<<" Gaji Pegawai            : ";
            cin>>x.tahunmasuk;

            insertLast(&l,x);
             cout<<"Data telah ditambahkan"<<endl;
            getch();
            break;
            
      case '4' :
                deleteFirst(&l);
                break;
                
      case '5' :
                deleteAfter(&l);
                break;
                
      case '6' :
                deleteLast(&l);
                break;
                
      case '7' :
                viewAll(l);
                break;
                
      case '8' :
                searchData(l);
                break;
        
      case '9' :
                cout<<"\n Terima kasih telah menggunakan program ini"<<endl;
                exit(0);
                break;
                
      default :
            cout<<"\n Pilih Ulang"<<endl;
            goto menu;
      }
      cout<<"\n Kembali ke menu? (y/n)";
      cin>>ulang;
      while(ulang=='y' || ulang =='Y');
}
//   return 0;
//}
