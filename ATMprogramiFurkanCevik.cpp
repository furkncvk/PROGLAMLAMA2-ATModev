//FURKAN CEVIK - 21040101053 - BILGISAYAR MUH. 1.SINIF
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include <Windows.h>

using namespace std;

int sifre, yeniSifre, musteriNo, bakiye=1000;

void girisEkrani(){

	int secim;
	system("cls");
	cout<<"----------------------------------------------------------\n\t";
	cout<<"\t* ZAMAR BANK'A HOSGELDINIZ *\t\n";
	cout<<"----------------------------------------------------------\n\n";
	cout<<"\t\t - LUTFEN ISLEM SECINIZ -\n";
	cout<<"**********************************************************\n\n\n";
	cout<<"\t\t   1 ) Giris Yap\n\n";
	cout<<"\t\t   2 ) Hesap Olustur\n\n\n";
	cout<<"\t\t   3 ) Cikis\n\n\n\n";
	cout<<"\t\t\t\tDeveloped by. Furkan Cevik\n Seciminiz -> ";
}

void girisYap(){
	
	int girilenNo, girilenSifre;
	void menuGetir(); int main();
	system("cls");
	cout<<"\t\t- Hosgeldiniz -\n\n";
	cout<<" Musteri Numarasi : "; cin>>girilenNo;
	cout<<"\n Sifre : "; cin>>girilenSifre;
	
	if(girilenSifre==sifre && girilenNo==musteriNo){
		
		system("cls");
		cout<<"\n\t\tGIRIS BASARILI! Yonlendiriliyorsunuz...";  sleep(1);
		system("cls");
		menuGetir();
		}
		
	else cout<<"\n GIRIS BASARISIZ! Lutfen Tekrar Deneyiniz.\n\n"; sleep(2); 
	     cout<<" \n\tANA MENUYE YONLENDIRILIYORSUNUZ : 3"; sleep(1); system("cls");
	     cout<<" \n\tANA MENUYE YONLENDIRILIYORSUNUZ : 2"; sleep(1); system("cls");
	     cout<<" \n\tANA MENUYE YONLENDIRILIYORSUNUZ : 1"; sleep(1); system("cls");
	main();
}

void hesapOlustur(){
	
    int cikisTercihi; int main();
	
	system("cls");
	cout<<"\t\t- HOSGELDINIZ! -\n\n Musteri Numarasi ve Sifrenizi Belirleyerek Hesap Olusturabilirsiniz:\n\n";
	cout<<" Musteri No Belirleyin : ";   cin>>musteriNo;
	cout<<"\n Sifrenizi Belirleyin : ";    cin>>sifre;	
	system("cls");
	cout<<"\n\t   Tesekkurler! Hesabiniz Olusturuldu.\n\n\tKullanici Bilgileriniz Asagida Yer Almaktadir :\n\n";
	cout<<"****************************************************************\n\n\n";
	cout<<" Musteri Numaraniz : "<<musteriNo<<"\n\n";
	cout<<" Sifreniz : "<<sifre<<"\n\n\n";
	cout<<"****************************************************************\n\n";
	cout<<"* Bu bilgiler size ozeldir. Lutfen Baskalariyla Paylasmayin!\n\n\t";
	cout<<"\tIYI GUNLER!\n\n";
	cout<<"****************************************************************\n\n";
	cout<<"\t-> GIRIS EKRANINA DONMEK ICIN ' 1 ' TUSLAYIN\n\n";
	cout<<"\t> x CIKIS YAPMAK ICIN HERHANGI BIR TUSA BASIN x\n\n\tSeciminiz -> ";
	cin>>cikisTercihi;
	
	if(cikisTercihi==1){
		system("cls");
		cout<<"\n\t\tGiris Ekranina Donuyorsunuz..."; sleep(1);
		main();
	}
}

void cikis(){
	
	system("cls");
	cout<<"\n\t\t- Cikis yapiliyor... -"; sleep(2);
	system("cls");
	cout<<"\n  - Basariyla Cikis Yapildi. Herhangi Bir Tusa Basarak Programi Kapatabilirsiniz. -\n\t\t- IYI GUNLER! -\n";
	
}

void paraCek(){
	
	system("cls");
	void menuGetir();
	int tutar1, secim2a, secim2b;
	cout<<"\tBakiyeniz : "<<bakiye<<"$";
	cout<<"\n\n\n\tCEKMEK ISTEDIGINIZ TUTARI GIRIN : "; cin>>tutar1;
	
	if(tutar1>0 && tutar1<=bakiye){
		
		bakiye-=tutar1;
		system("cls");
		cout<<"\n\tISLEMINIZ GERCEKLESTIRILIYOR..."; sleep(1);
		system("cls");
		cout<<"\n\n\t- ISLEM BASARILI -\n\n";
		cout<<"****************************************\n\n";
		cout<<"\tCEKILEN TUTAR : "<<tutar1<<" $";
		cout<<"\n\n\tGUNCEL BAKIYENIZ : "<<bakiye<<" $";
		cout<<"\n\n****************************************\n\n";
		cout<<"\nGERI DONMEK ICIN ' 1 ' TUSLAYIN\n\n-> "; 
		cin>>secim2a;
        if(secim2a==1)
		menuGetir(); 
		
	}
	else{
        cout<<"\n\n\t- GECERSIZ TUTAR -";
        cout<<"\n\n****************************************\n\n";
        cout<<"\nGERI DONMEK ICIN ' 1 ' TUSLAYIN\n\n-> "; 
		cin>>secim2b;
        if(secim2b==1)
		menuGetir();
}
}

void paraYatir(){
	
	system("cls");
	void menuGetir();
	int tutar3, secim3a, secim3b;
	cout<<"\tBakiyeniz : "<<bakiye<<"$";
	cout<<"\n\n\n\tYATIRMAK ISTEDIGINIZ TUTARI GIRIN : "; cin>>tutar3;
	
	if(tutar3>0){
		
		bakiye+=tutar3;
		system("cls");
		cout<<"\n\tISLEMINIZ GERCEKLESTIRILIYOR..."; sleep(1);
		system("cls");
		cout<<"\n\n\t- ISLEM BASARILI -\n\n";
		cout<<"****************************************\n\n";
		cout<<"\tYATIRILAN TUTAR : "<<tutar3<<" $";
		cout<<"\n\n\tGUNCEL BAKIYENIZ : "<<bakiye<<" $";
		cout<<"\n\n****************************************\n\n";
		cout<<"\nGERI DONMEK ICIN ' 1 ' TUSLAYIN\n\n-> "; 
		cin>>secim3a;
        if(secim3a==1)
		menuGetir(); 
		
	}
	else{
        cout<<"\n\n\t- GECERSIZ TUTAR -";
        cout<<"\n\n****************************************\n\n";
        cout<<"\nGERI DONMEK ICIN ' 1 ' TUSLAYIN\n\n-> "; 
		cin>>secim3b;
        if(secim3b==1)
		menuGetir();
}
}

void havaleEft(){
    	
    system("cls");
	void menuGetir();
	char ad[50], soyad[50];
	long long int iban;
	int tutar4, secim4a, secim4b;
	cout<<"\tBakiyeniz : "<<bakiye<<" $\n\n\n";
	cout<<" HAVALE/EFT YAPMAK ISTEDIGINIZ IBAN : TR"; cin>>iban;
	cout<<"\n\n AD : "; cin>>ad;
	cout<<"\n SOYAD : "; cin>>soyad;
	cout<<"\n\n\n HAVALE/EFT TUTARI GIRIN : "; cin>>tutar4;
	
	if(tutar4>0 && tutar4<=bakiye){
		
		bakiye-=tutar4;
		system("cls");
		cout<<"\n\tISLEMINIZ GERCEKLESTIRILIYOR..."; sleep(1);
		system("cls");
		cout<<"\n\n\t- ISLEM BASARILI -\n\n";
		cout<<"****************************************\n\n";
		cout<<"\t' "<<ad<<" "<<soyad<<" '  ADINA  : \n\n\n";
		cout<<"\tHAVALE/EFT YAPILAN TUTAR : "<<tutar4<<" $";
		cout<<"\n\n\tGUNCEL BAKIYENIZ : "<<bakiye<<" $";
		cout<<"\n\n****************************************\n\n";
		cout<<"\nGERI DONMEK ICIN ' 1 ' TUSLAYIN\n\n-> "; 
		cin>>secim4a;
        if(secim4a==1)
		menuGetir(); 
		
	}
	else{
        system("cls");
		cout<<"\n\n\t- GECERSIZ TUTAR -";
        cout<<"\n\n****************************************\n\n";
        cout<<"\nGERI DONMEK ICIN ' 1 ' TUSLAYIN\n\n-> "; 
		cin>>secim4b;
        if(secim4b==1)
		menuGetir();
}
}	
    	
void ibanSorgula(){
	
	void menuGetir();
	int secim5;
	system("cls");
	cout<<"\n\tHESABINIZA KAYITLI IBAN BILGILERI ASAGIDA YER ALMAKTADIR :\n\n";
	cout<<"*******************************************************************************\n\n\n";
	cout<<"\tIBAN : TR02 0006 7010 0000 0079 8486 19";
	cout<<"\n\n\n*******************************************************************************\n\n";
	cout<<"\t- IBAN BILGILERINIZ CEP TELEFONUNUZA SMS OLARAK GONDERILMISTIR -";
	cout<<"\n\n*******************************************************************************\n";
	cout<<"\n\nGERI DONMEK ICIN ' 1 ' TUSLAYIN\n\n-> "; 
		cin>>secim5;
        if(secim5==1)
		menuGetir();

}  	

void faturaOde(){
	
	system("cls");
	void menuGetir();
	int faturaSecimi, secim6a, secim6b, secim6c, secim6d;
	int elektrik=42, su=35, dogalgaz=13, internet=60;
	int elektrikToMenu, suToMenu, dogalgazToMenu, internetToMenu;
	cout<<"\t\t - LUTFEN ISLEM SECINIZ -\n";
	cout<<"**********************************************************\n\n\n";
	cout<<" 1 ) ELEKTRIK\n\n";
	cout<<" 2 ) SU\n\n";
	cout<<" 3 ) DOGALGAZ\n\n";
	cout<<" 4 ) INTERNET\n\n\n";
	cout<<"**********************************************************\n\n";
	cout<<"GERI DONMEK ICIN ' 0 ' TUSLAYIN\n\n Seciminiz -> "; cin>>faturaSecimi;
		
        if(faturaSecimi==0){
		menuGetir(); }
	
        if(faturaSecimi==1){
    	
    	        system("cls");
    	        int secimElektrik;
    	        cout<<"**********************************************************";
		        cout<<"\n\n\tADINIZA KAYITLI ELEKTRIK FATURA TUTARI : "<<elektrik<<" $\n\n";
		        cout<<"**********************************************************\n\n";
    	        cout<<"\tBakiyeniz : "<<bakiye<<" $\n\n";
    	        cout<<"**********************************************************\n\n";
    	        cout<<"\nODEME YAPMAK :\n\n\n\n\n\n";
    	        cout<<" 0 ) ISTEMIYORUM  \t\t\t  ISTIYORUM ( 1\n\n Seciminiz -> "; cin>>secimElektrik;
    	        
				if(secimElektrik!=1){ menuGetir(); }
				
				if(bakiye>=elektrik){
				
				system("cls");
		        cout<<"\n\tISLEMINIZ GERCEKLESTIRILIYOR..."; sleep(1);
				bakiye-=elektrik;
				system("cls");
				cout<<"\n\n\t- ODEME ISLEMINIZ BASARIYLA TAMAMLANDI -\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<" GUNCEL BAKIYENIZ : "<<bakiye<<" $\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<"MENUYE DONMEK ICIN ' 0 ' TUSLAYIN\n\n Seciminiz -> "; cin>>elektrikToMenu;
		
                if(elektrikToMenu==0){ menuGetir(); }
}
                if(bakiye<elektrik){
                	
                system("cls");
		        cout<<"\n\n\t- YETERSIZ TUTAR -";
                cout<<"\n\n****************************************\n\n";
                cout<<"\nGERI DONMEK ICIN ' 0 ' TUSLAYIN\n\n -> "; 
		        cin>>secim6a;
                if(secim6a==0)
		        menuGetir();
   	}
}

if(faturaSecimi==2){
    	
    	        system("cls");
    	        int secimSu;
    	        cout<<"**********************************************************";
		        cout<<"\n\n\tADINIZA KAYITLI SU FATURA TUTARI : "<<su<<" $\n\n";
		        cout<<"**********************************************************\n\n";
    	        cout<<"\tBakiyeniz : "<<bakiye<<" $\n\n";
    	        cout<<"**********************************************************\n\n";
    	        cout<<"\nODEME YAPMAK :\n\n\n\n\n\n";
    	        cout<<" 0 ) ISTEMIYORUM  \t\t\t  ISTIYORUM ( 1\n\n Seciminiz -> "; cin>>secimSu;
    	        
				if(secimSu!=1){ menuGetir(); }
				
				if(bakiye>=su){
				
				system("cls");
		        cout<<"\n\tISLEMINIZ GERCEKLESTIRILIYOR..."; sleep(1);
				bakiye-=su;
				system("cls");
				cout<<"\n\n\t- ODEME ISLEMINIZ BASARIYLA TAMAMLANDI -\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<" GUNCEL BAKIYENIZ : "<<bakiye<<" $\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<"MENUYE DONMEK ICIN ' 0 ' TUSLAYIN\n\n Seciminiz -> "; cin>>suToMenu;
		
                if(suToMenu==0){ menuGetir(); }
}
                if(bakiye<su){
                	
                system("cls");
		        cout<<"\n\n\t- YETERSIZ TUTAR -";
                cout<<"\n\n****************************************\n\n";
                cout<<"\nGERI DONMEK ICIN ' 0 ' TUSLAYIN\n\n -> "; 
		        cin>>secim6b;
                if(secim6b==0)
		        menuGetir();
   	}
}

if(faturaSecimi==3){
    	
    	        system("cls");
    	        int secimDogalgaz;
    	        cout<<"**********************************************************";
		        cout<<"\n\n\tADINIZA KAYITLI DOGALGAZ FATURA TUTARI : "<<dogalgaz<<" $\n\n";
		        cout<<"**********************************************************\n\n";
    	        cout<<"\tBakiyeniz : "<<bakiye<<" $\n\n";
    	        cout<<"**********************************************************\n\n";
    	        cout<<"\nODEME YAPMAK :\n\n\n\n\n\n";
    	        cout<<" 0 ) ISTEMIYORUM  \t\t\t  ISTIYORUM ( 1\n\n Seciminiz -> "; cin>>secimDogalgaz;
    	        
				if(secimDogalgaz!=1){ menuGetir(); }
				
				if(bakiye>=dogalgaz){
				
				system("cls");
		        cout<<"\n\tISLEMINIZ GERCEKLESTIRILIYOR..."; sleep(1);
				bakiye-=dogalgaz;
				system("cls");
				cout<<"\n\n\t- ODEME ISLEMINIZ BASARIYLA TAMAMLANDI -\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<" GUNCEL BAKIYENIZ : "<<bakiye<<" $\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<"MENUYE DONMEK ICIN ' 0 ' TUSLAYIN\n\n Seciminiz -> "; cin>>dogalgazToMenu;
		
                if(dogalgazToMenu==0){ menuGetir(); }
}
                if(bakiye<dogalgaz){
                	
                system("cls");
		        cout<<"\n\n\t- YETERSIZ TUTAR -";
                cout<<"\n\n****************************************\n\n";
                cout<<"\nGERI DONMEK ICIN ' 0 ' TUSLAYIN\n\n -> "; 
		        cin>>secim6c;
                if(secim6c==0)
		        menuGetir();
   	}
}

if(faturaSecimi==4){
    	
    	        system("cls");
    	        int secimInternet;
    	        cout<<"**********************************************************";
		        cout<<"\n\n\tADINIZA KAYITLI SU FATURA TUTARI : "<<internet<<" $\n\n";
		        cout<<"**********************************************************\n\n";
    	        cout<<"\tBakiyeniz : "<<bakiye<<" $\n\n";
    	        cout<<"**********************************************************\n\n";
    	        cout<<"\nODEME YAPMAK :\n\n\n\n\n\n";
    	        cout<<" 0 ) ISTEMIYORUM  \t\t\t  ISTIYORUM ( 1\n\n Seciminiz -> "; cin>>secimInternet;
    	        
				if(secimInternet!=1){ menuGetir(); }
				
				if(bakiye>=internet){
				
				system("cls");
		        cout<<"\n\tISLEMINIZ GERCEKLESTIRILIYOR..."; sleep(1);
				bakiye-=internet;
				system("cls");
				cout<<"\n\n\t- ODEME ISLEMINIZ BASARIYLA TAMAMLANDI -\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<" GUNCEL BAKIYENIZ : "<<bakiye<<" $\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<"MENUYE DONMEK ICIN ' 0 ' TUSLAYIN\n\n Seciminiz -> "; cin>>internetToMenu;
		
                if(internetToMenu==0){ menuGetir(); }
} 
                if(bakiye<internet){
                	
                system("cls");
		        cout<<"\n\n\t- YETERSIZ TUTAR -";
                cout<<"\n\n****************************************\n\n";
                cout<<"\nGERI DONMEK ICIN ' 0 ' TUSLAYIN\n\n -> "; 
		        cin>>secim6d;
                if(secim6d==0)
		        menuGetir();
   	}
}
}

void ehliyetOde(){
	            
	            void menuGetir();
	            int ehliyet=1200;
	            int ehliyetToMenu, secim7;
	            system("cls");
    	        int secimEhliyet;
    	        cout<<"**********************************************************";
		        cout<<"\n\n\tADINIZA KAYITLI EHLIYET HARC TUTARI : "<<ehliyet<<" $\n\n";
		        cout<<"**********************************************************\n\n";
    	        cout<<"\tBakiyeniz : "<<bakiye<<" $\n\n";
    	        cout<<"**********************************************************\n\n";
    	        cout<<"\nODEME YAPMAK :\n\n\n\n\n\n";
    	        cout<<" 0 ) ISTEMIYORUM  \t\t\t  ISTIYORUM ( 1\n\n Seciminiz -> "; cin>>secimEhliyet;
    	        
				if(secimEhliyet!=1){ menuGetir(); }
				
				if(bakiye>=ehliyet){
				
				system("cls");
		        cout<<"\n\tISLEMINIZ GERCEKLESTIRILIYOR..."; sleep(1);
				bakiye-=ehliyet;
				system("cls");
				cout<<"\n\n\t- ODEME ISLEMINIZ BASARIYLA TAMAMLANDI -\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<" GUNCEL BAKIYENIZ : "<<bakiye<<" $\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<"MENUYE DONMEK ICIN ' 0 ' TUSLAYIN\n\n Seciminiz -> "; cin>>ehliyetToMenu;
		
                if(ehliyetToMenu==0){ menuGetir(); }
} 
                if(bakiye<ehliyet){
                	
                system("cls");
		        cout<<"\n\n\t- YETERSIZ TUTAR -";
                cout<<"\n\n****************************************\n\n";
                cout<<"\nGERI DONMEK ICIN ' 0 ' TUSLAYIN\n\n -> "; 
		        cin>>secim7;
                if(secim7==0)
		        menuGetir();
   	}
}

void osymOde(){
	            
	            void menuGetir();
	            int osym=180;
	            int osymToMenu, secim8;
	            system("cls");
    	        int secimOsym;
    	        cout<<"**********************************************************";
		        cout<<"\n\n\tADINIZA KAYITLI YKS HARC TUTARI : "<<osym<<" $\n\n";
		        cout<<"**********************************************************\n\n";
    	        cout<<"\tBakiyeniz : "<<bakiye<<" $\n\n";
    	        cout<<"**********************************************************\n\n";
    	        cout<<"\nODEME YAPMAK :\n\n\n\n\n\n";
    	        cout<<" 0 ) ISTEMIYORUM  \t\t\t   ISTIYORUM ( 1\n\n Seciminiz -> "; cin>>secimOsym;
    	        
				if(secimOsym!=1){ menuGetir(); }
				
				if(bakiye>=osym){
				
				system("cls");
		        cout<<"\n\tISLEMINIZ GERCEKLESTIRILIYOR..."; sleep(1);
				bakiye-=osym;
				system("cls");
				cout<<"\n\n\t- ODEME ISLEMINIZ BASARIYLA TAMAMLANDI -\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<" GUNCEL BAKIYENIZ : "<<bakiye<<" $\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<"MENUYE DONMEK ICIN ' 0 ' TUSLAYIN\n\n Seciminiz -> "; cin>>osymToMenu;
		
                if(osymToMenu==0){ menuGetir(); }
} 
                if(bakiye<osym){
                	
                system("cls");
		        cout<<"\n\n\t- YETERSIZ TUTAR -";
                cout<<"\n\n****************************************\n\n";
                cout<<"\nGERI DONMEK ICIN ' 0 ' TUSLAYIN\n\n -> "; 
		        cin>>secim8;
                if(secim8==0)
		        menuGetir();
   	}
}

void trafikOde(){
	            
	            void menuGetir();
	            int trafik=180;
	            int trafikToMenu, secim9;
	            system("cls");
    	        int secimTrafik;
    	        cout<<"**********************************************************";
		        cout<<"\n\n\tADINIZA KAYITLI CEZA TUTARI : "<<trafik<<" $\n\n";
		        cout<<"**********************************************************\n\n";
    	        cout<<"\tBakiyeniz : "<<bakiye<<" $\n\n";
    	        cout<<"**********************************************************\n\n";
    	        cout<<"\nODEME YAPMAK :\n\n\n\n\n\n";
    	        cout<<" 0 ) ISTEMIYORUM \t\t\t  ISTIYORUM ( 1\n\n Seciminiz -> "; cin>>secimTrafik;
    	        
				if(secimTrafik!=1){ menuGetir(); }
				
				if(bakiye>=trafik){
				
				system("cls");
		        cout<<"\n\tISLEMINIZ GERCEKLESTIRILIYOR..."; sleep(1);
				bakiye-=trafik;
				system("cls");
				cout<<"\n\n\t- ODEME ISLEMINIZ BASARIYLA TAMAMLANDI -\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<" GUNCEL BAKIYENIZ : "<<bakiye<<" $\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<"MENUYE DONMEK ICIN ' 0 ' TUSLAYIN\n\n Seciminiz -> "; cin>>trafikToMenu;
		
                if(trafikToMenu==0){ menuGetir(); }
} 
                if(bakiye<trafik){
                	
                system("cls");
		        cout<<"\n\n\t- YETERSIZ TUTAR -";
                cout<<"\n\n****************************************\n\n";
                cout<<"\nGERI DONMEK ICIN ' 0 ' TUSLAYIN\n\n -> "; 
		        cin>>secim9;
                if(secim9==0)
		        menuGetir();
   	}
}
	
void vergiOde(){
	            
	            void menuGetir();
	            int vergi=384;
	            int vergiToMenu, secim10;
	            system("cls");
    	        int secimVergi;
    	        cout<<"**********************************************************";
		        cout<<"\n\n\tADINIZA KAYITLI VERGI BORCU : "<<vergi<<" $\n\n";
		        cout<<"**********************************************************\n\n";
    	        cout<<"\tBakiyeniz : "<<bakiye<<" $\n\n";
    	        cout<<"**********************************************************\n\n";
    	        cout<<"\nODEME YAPMAK :\n\n\n\n\n\n";
    	        cout<<" 0 ) ISTEMIYORUM  \t\t\t  ISTIYORUM ( 1\n\n Seciminiz -> "; cin>>secimVergi;
    	        
				if(secimVergi!=1){ menuGetir(); }
				
				if(bakiye>=vergi){
				
				system("cls");
		        cout<<"\n\tISLEMINIZ GERCEKLESTIRILIYOR..."; sleep(1);
				bakiye-=vergi;
				system("cls");
				cout<<"\n\n\t- ODEME ISLEMINIZ BASARIYLA TAMAMLANDI -\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<" GUNCEL BAKIYENIZ : "<<bakiye<<" $\n\n";
				cout<<"**********************************************************\n\n\n";
				cout<<"MENUYE DONMEK ICIN ' 0 ' TUSLAYIN\n\n Seciminiz -> "; cin>>vergiToMenu;
		
                if(vergiToMenu==0){ menuGetir(); }
} 
                if(bakiye<vergi){
                	
                system("cls");
		        cout<<"\n\n\t- YETERSIZ TUTAR -";
                cout<<"\n\n****************************************\n\n";
                cout<<"\nGERI DONMEK ICIN ' 0 ' TUSLAYIN\n\n -> "; 
		        cin>>secim10;
                if(secim10==0)
		        menuGetir();
   	}
}

void sifreDegistir(){
	
	void menuGetir();
	system("cls");
	int denenenSifre, yeniSifre;
    cout<<"\n\n\tSIFRENIZI DEGISTIRMEK ICIN MEVCUT SIFRENIZI GIRIN : "; cin>>denenenSifre;
      if(denenenSifre==sifre){
      	
      	system("cls");
      	cout<<"\n\tYENI SIFRENIZI GIRIN : "; cin>>yeniSifre;
    if(yeniSifre==sifre){ cout<<"\n\tGIRDIGINIZ SIFRE ESKI SIFRENIZ ILE AYNIDIR!\n\n\n\tYonlendiriliyorsunuz..."; sleep(3); menuGetir();}
			sifre=yeniSifre;
			system("cls");
			cout<<"\n\t- SIFRENIZ BASARIYLA DEGISTIRILMISTIR -\n\n\n\tYonlendiriliyorsunuz..."; sleep(3); menuGetir();
	  }
    if(denenenSifre!=sifre){ cout<<"\n\t- GIRDIGINIZ SIFRE YANLIS! -\n\n\n\tYonlendiriliyorsunuz..."; sleep(3); menuGetir(); }
}
	

void menuGetir(){
	
	int main();
	
	system("cls");
	cout<<"----------------------------------------------------------\n\t";
	cout<<"\t* ZAMAR BANK'A HOSGELDINIZ *\t\n";
	cout<<"----------------------------------------------------------\n\n";
	cout<<"\t\t - LUTFEN ISLEM SECINIZ -\n";
	cout<<"**********************************************************\n\n";
	cout<<"   1 ) Bakiye Goruntule\t\t\tFatura Ode ( 6\n";
	cout<<"   2 ) Para Cek\t\t\t Ehliyet Harci Ode ( 7\n";
	cout<<"   3 ) Para Yatir\t\t    OSYM Odemeleri ( 8\n";
	cout<<"   4 ) Havale / EFT\t\t Trafik Cezasi Ode ( 9\n";
	cout<<"   5 ) IBAN Sorgula\t\t   Vergi Odemeleri ( 10\n\n";
	cout<<"\t\t    11 ) Sifre Degistir\n\n";
	cout<<"\t\t    12 ) Cikis Yap\n\n";
	cout<<"**********************************************************\n\n Seciminiz -> ";
	int secim; cin>>secim;	
		switch(secim){
			
			case 1: 
			system("cls");
			cout<<"\n\n\tBAKIYE : "<<bakiye<<"$";
			cout<<"\n\n************************************************";
			cout<<"\n\n\tGERI DONMEK ICIN '1' TUSLAYINIZ\n\n-> ";
			
			int secim1;   cin>>secim1;
			if(secim1==1){
				
			menuGetir(); }  break;
			
            case 2: paraCek();  break;
		    case 3: paraYatir(); break;
		    case 4: havaleEft(); break;
		    case 5: ibanSorgula(); break;
		    case 6: faturaOde(); break;
			case 7: ehliyetOde(); break;
			case 8: osymOde(); break;	
			case 9: trafikOde(); break;
			case 10: vergiOde(); break;
		    case 11: sifreDegistir(); break;
		    case 12: system("cls");
			         cout<<"\n\n\tCIKIS YAPILIYOR..."; sleep(2); main(); break;
		}
}

int main(){
	 
	  int secim;
	  girisEkrani();
	  cin>>secim;
	  switch(secim){
	  	
	  	case 1: girisYap(); break;
	  	case 2: hesapOlustur(); break;
	  	case 3: cikis(); break;
	  	
	  	}
	  
}
