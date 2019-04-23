#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include <windows.h>
using namespace std;

void login(),daftar_menu(),biodata(),ballroom(),bioballroom(),fballroom(),kelas();

std :: string pass,tanggal,nama,hp;
int menu,form_login,jumlah_kamar,a;

main()
{
    cout<<"\n====================================================\n";
    cout<<"|||                                              |||\n";
    cout<<"|||        SELAMAT DATANG DI TRI HOTEL           |||\n";
    cout<<"|||                                              |||\n";
    cout<<"====================================================\n\n";

    login();
}

void login()
{
    int i;
    char ch;
    cout << "============================\n";
    cout << "|        LOGIN ADMIN       |\n";
    cout << "============================\n";
    for (i=1; i<=3; i++) {
       string user = "";
       string pass = "";
       cout << "Username : "; cin >> user;
       cout << "Password : ";
            ch = _getch();
            while(ch != 13){
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
            }

       if (user == "Admin" && pass == "12345")
        {
         system("cls");
         daftar_menu();
        }
       else
        {
         cout << "\n\nMaaf Username & Password anda masukan salah.\n\n";
        }
   }
   while (i <= 3);

   cout << "Anda telah 3x memasukan Username & Password yang salah.\n";
   cout << "Mohon maaf akun anda kami blokir untuk sementara. \n";
   cout << "Silahkan hubungi kami melalui e-mail support@email.com, Terima Kasih..";
   getch();
}

void daftar_menu()
{
    cout<<"=========================="<<endl;
    cout<<"           MENU           "<<endl;
    cout<<"=========================="<<endl;
    cout<<"1. PESAN KAMAR"<<endl;
    cout<<"2. PESAN BALLROOM"<<endl;
    cout<<"3. KELUAR AKUN"<<endl;
    cout<<"=========================="<<endl;
    cout<<"Pilih[1-3]: ";cin>>menu;

    if(menu==1)
    {
        system("cls");
       biodata();
    }
    else if (menu==2)
    {
        system("cls");
       ballroom();
    }
    else if (menu==3)
    {
        cout<<"_________________________________________________"<<endl<<endl;
        cout<<"   TERIMAKASIH SUDAH MENGGUNAKAN APLIKASI KAMI"<<endl;
        cout<<"_________________________________________________"<<endl<<endl;
        exit(EXIT_FAILURE);
    }
    else
    {   cout<<"_________________________________________________"<<endl<<endl;
        cout<<"PILIHAN ANDA TIDAK SESUAI DENGAN YANG ADA DI MENU"<<endl;
        cout<<"_________________________________________________"<<endl<<endl;
        system("cls");
        daftar_menu();
    }


}

void biodata()
{
    string boong;
    std::cout<<"";
    cout<<"=========================="<<endl;
    cout<<"      DATA PELANGGAN      "<<endl;
    cout<<"=========================="<<endl;
    std :: getline(std :: cin, boong);
    std::cout<<"Nama     : ";
    std :: getline(std :: cin, nama);
    cout<<"No HP    : ";
    std :: getline(std :: cin, hp);
    cout<<"Check-In : ";
    std :: getline(std :: cin, tanggal);
    kelas();
}

void ballroom()
{
    pb:
    int j,i,pj=10000000,tgl,hp;
    char yt,nama;
    cout<<"*===================*"<<endl;
    cout<<"|   DURASI PEMESANAN|"<<endl;
    cout<<"|    MINIMAL 5 JAM  |"<<endl;
    cout<<"|   Rp10.000.000/Jam|"<<endl;
    cout<<"*===================*\n"<<endl;
    bioballroom();
    cout<<"PESAN (JAM)  : ";
    cin>>j;
    cout<<endl<<endl;

    if (j<5)
        {
            cout<<"ANDA HARUS MEMESAN MINIMAL 5 JAM"<<endl<<endl ;
            goto pb;
        }

    else (j>=5);
        {
            fballroom();
            i=j*pj;
            cout<<"TOTAL PEMBAYARAN   : Rp"<<i<<endl;
            cout<<"======================================================"<<endl;

            int bayar,total_kembali;

            cout<<"JUMLAH YANG DI BAYARKAN               Rp."; cin>>bayar;
            total_kembali=bayar-i;
            cout<<"UANG KEMBALI                          Rp."<<total_kembali<<endl;
        }
        ofstream file_objek;
        file_objek.open("PESAN BALLROOM.txt");
        file_objek<<"NAMA    : "<<nama<<endl;
        file_objek<<"NO HP   : "<<hp<<endl;
        file_objek<<"Check-In: "<<tanggal<<endl;
        file_objek<<"DURASI BOOKING:"<<j<<endl;
        file_objek.close();

            system("pause");
            system("cls");
            daftar_menu();
}

void bioballroom()
{
 string boong;
 std::cout<<"";
 std :: getline(std :: cin, boong);
 std::cout<<"Nama         : ";
 std :: getline(std :: cin, nama);
 cout<<"No HP        : ";
 std :: getline(std :: cin, hp);
 cout<<"Check-In     : ";
 std :: getline(std :: cin, tanggal);
}

void fballroom()
{
    cout<<"======================================================"<<endl;
    cout<<"                  PESANAN BALLROOM"<<endl;
    cout<<"======================================================"<<endl;

    cout<<"NAMA               : "<<nama<<endl;
    cout<<"NO HP              : "<<hp<<endl;
    cout<<"TANGGAL BOOKING    : "<<tanggal<<endl;

}

void kelas()
{
    int total;
    char yt;
    struct data{int kls;
                int lama;
                int harga_kls;
                int harga_menginap;}
            ngulang[20];

    cout<<endl;
    cout<<"MASUKAN JUMLAH KAMAR YANG INGIN ANDA PESAN : ";
    cin>>jumlah_kamar;
    for(int a=1;a<=jumlah_kamar;a++)
    {   klz:
        cout<<"\nPESANAN KAMAR KE-"<<a<<endl;
        cout<<"\t\t===========================\n";
    cout<<"\t\t\t>>  KELAS  <<\n";
    cout<<"\t\t===========================";
    cout<<endl;
    cout<<"\t\t| 1.VVIP    = Rp1.000.000 |   \n";
    cout<<"\t\t| 2.VIP     = Rp500.0000  |   \n";
    cout<<"\t\t| 3.EKONOMI = Rp250.000   |\n";
    cout<<"\t\t===========================\n";
    cout<<"\t\tPilih[1/2/3]: ";
    cin>>ngulang[a].kls;
    if (ngulang[a].kls==1)
    {
        ngulang[a].harga_kls=1000000;
    }
    else if (ngulang[a].kls==2)
    {
        ngulang[a].harga_kls=500000;
    }
    else if (ngulang[a].kls==3)
    {
        ngulang[a].harga_kls=250000;
    }
    else
    {   cout<<"======================================"<<endl;
        cout<<"    KELAS YANG ANDA PILIH TIDAK ADA   " << endl;
        cout<<"======================================"<<endl;
        goto klz;

    }


     cout<<" Lama Menginap (dalam angka)  : ";
     cin>>ngulang[a].lama;

     ngulang[a].harga_menginap=ngulang[a].lama*ngulang[a].harga_kls;
    }



    cout<<"=========================================================="<<endl;
    cout<<"                    KAMAR YANG ANDA PESAN                 "<<endl;
    cout<<"=========================================================="<<endl;

    cout<<"NAMA               : "<<nama<<endl;
    cout<<"NO HP              : "<<hp<<endl;
    cout<<"TANGGAL CHECK IN   : "<<tanggal<<endl;
    cout<<"=========================================================="<<endl;
    cout<<"       KELAS    |     LAMA MENGINAP     |       HARGA"<<endl;
    cout<<"=========================================================="<<endl;

    for(int a=1;a<=jumlah_kamar;a++)
    {
          switch(ngulang[a].kls)
    {
        case 1:
        cout<<"       VVIP"; cout<<"\t\t    "; cout<<ngulang[a].lama; cout<<"\t\t     Rp."; cout<<ngulang[a].harga_menginap << endl;
        break;
          case 2:
        cout<<"        VIP"; cout<<"\t\t    "; cout<<ngulang[a].lama; cout<<"\t\t     Rp."; cout<<ngulang[a].harga_menginap << endl;
        break;

        case 3:
        cout<<"    EKONOMI"; cout<<"\t\t    "; cout<<ngulang[a].lama; cout<<"\t\t     Rp."; cout<<ngulang[a].harga_menginap << endl;
        break;

        default :
        cout << "PILIHAN ANDA TIDAK SESUAI" << endl;
    }



    }

    total = 0;
    for(int a=1;a<=jumlah_kamar;a++)
    {
        total = total + ngulang[a].harga_menginap;
    }

    cout<<"=========================================================="<<endl;
    cout<<"TOTAL PEMBAYARAN                             RP."<<total<<endl;

    int bayar,total_kembali;
    cout<<"=========================================================="<<endl;
    cout<<"JUMLAH YANG DI BAYARKAN                      Rp."; cin>>bayar;
    total_kembali=bayar-total;
    cout<<"UANG KEMBALI                                 Rp."<<total_kembali<<endl;

    cout<<endl<<endl;

    ofstream file_objek;
    file_objek.open("latihan.txt");
    file_objek<<"NAMA    : "<<nama<<endl;
    file_objek<<"NO HP   : "<<hp<<endl;
    file_objek<<"Check-In: "<<tanggal<<endl;
    file_objek<<"Daftar Pesanan :"<<endl;
    file_objek<<"KELAS"<<"\t";
    file_objek<<"\tLAMA MENGINAP"<<"\t";
    file_objek<<"\tHARGA MENGINAP"<<endl;
    for(int a=1;a<=jumlah_kamar;a++)
    if(ngulang[a].kls==1)
    {
    file_objek<<"VVIP"<<"\t";
    file_objek<<"\t\t"<<ngulang[a].lama<<"\t\t";
    file_objek<<ngulang[a].harga_menginap<<endl;
    }

    else if(ngulang[a].kls==2)
    {
    file_objek<<"VIP"<<"\t";
    file_objek<<"\t\t"<<ngulang[a].lama<<"\t\t";
    file_objek<<ngulang[a].harga_menginap<<endl;
    }

    else
    {
    file_objek<<"EKONOMI"<<"\t";
    file_objek<<"\t\t"<<ngulang[a].lama<<"\t\t";
    file_objek<<ngulang[a].harga_menginap<<endl;
    }
    file_objek.close();

    system("pause");
    system("cls");
    daftar_menu();

}

