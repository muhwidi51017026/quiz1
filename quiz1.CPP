#include<iostream.h>
#include<conio.h>

	main()
   {
   char nama[30],jurusan[20];
   float nk,nt1,nt2,nt3,nm,nq,tnt,na,nf;
   	cout<<"program hitung nilai akhir siswa"<<endl;
   	cout<<"nama siswa:";cin>>nama;
   	cout<<"jurusan:";cin>>jurusan;
   	cout<<"nilai kehadiran:";cin>>nk;
   	cout<<"nilai tugas1:";cin>>nt1;
   	cout<<"nilai tugas2:";cin>>nt2;
   	cout<<"nilai tugas3:";cin>>nt3;
   	cout<<"nilai mid:";cin>>nm;
   	cout<<"nilai quiz:";cin>>nq;
   	cout<<"nilai final:";cin>>nf;
   	tnt=(nt1+nt2+nt3)/3;
   	na=(0.2*nk)+(0.2*tnt)+(0.2*nm)+(0.2*nq)+(0.2*nf);
   	cout<<"siswa yang bernama"<<nama<<endl;
   	cout<<"jurusan"<<jurusan<<endl;
   	cout<<"meperoleh nilai akhir:"<<na<<endl;
   	getch();
      }
