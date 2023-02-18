#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*      GOTO KULLANILAN YER:
 *  Kullanılan goto gecmis yazdirma algoritmasinda kullanilmistir.
 *  Kullanılan goto main fonksiyonundaki sorgu kısmına götürmektedir.
 *  Goto'nun adi: girdi.
 */



/*
-Satır Verilerinin tutulduğu değişkenler:

 KELİME SAYISI:   kelime_sayisi;
 KELİME UZUNLUĞU: kelime_uzunlugu[];

 SATIR SAYISI:    satir_sayisi;
 SATIR UZUNLUĞU:  satir_uzunlugu[];

*/


void a1() {
    printf(" ***   ");
}//
void a2() {
    printf("*   *  ");
}// 3 kere kullanılacak
void a3() {
    printf("*****  ");
}//

void b1() {
    printf("****   ");
}// 3 kere kullanılacak
void b2() {
    printf("*   *  ");
}// 2 kere kullanılcak

void c1() {
    printf(" ****  ");
}// 2 kere kullanılcak
void c2() {
    printf("*      ");
}// 3 kere kullanılcak (arka arkaya)

void d1() {
    printf("****   ");
}// 2 kere kullanılacak
void d2() {
    printf("*   *  ");
}// 3 kere kullanılacak

void e1() {
    printf("*****  ");
}// 2 KERE KULLANILACAK ORTAYA DİKKAT
void e2() {
    printf("*      ");
}// 2 kere
void e3() {
    printf("****   ");
}

void f1() {
    printf("*****  ");
}

void f2() {
    printf("*      ");
}// 3 kere
void f3() {
    printf("****   ");
}

void g1() {
    printf(" ****  ");
}// 2 kere başta ve sonda
void g2() {
    printf("*      ");
}//
void g3() {
    printf("* ***  ");
}

void g4() {
    printf("*   *  ");
}

void h1() {
    printf("*   *  ");
}// 4 kere
void h2() {
    printf("*****  ");
}

void i1() {
    printf(" ***   ");
}// 2 kere
void i2() {
    printf("  *    ");
}// 3 kere

void jj1() {
    printf(" ***   ");
}

void j2() {
    printf("   *   ");
}// 3 kere
void j3() {
    printf(" **    ");
}

void k1() {
    printf("*   *  ");
}// 2 kere
void k2() {
    printf("*  *   ");
}// 2 kere
void k3() {
    printf("***    ");
}

void l1() {
    printf("*      ");
}// 4 kere
void l2() {
    printf("*****  ");
}

void m1() {
    printf("*   *  ");
}

void m2() {
    printf("** **  ");
}

void m3() {
    printf("* * *  ");
}

void m4() {
    printf("*   *  ");
}// 2 kere

void n1() {
    printf("*   *  ");
}// 2 kere sonda ve başta
void n2() {
    printf("**  *  ");
}

void n3() {
    printf("* * *  ");
}

void n4() {
    printf("*  **  ");
}

void o1() {
    printf(" ***   ");
}// 2 kere kullanılacak
void o2() {
    printf("*   *  ");
}// 3 kere

void p1() {
    printf("****   ");
}// 2 kere
void p2() {
    printf("*   *  ");
}

void p3() {
    printf("*      ");
}// 2 kere, son 2 satır

void r1() {
    printf("****   ");
}// 2 kere
void r2() {
    printf("*   *  ");
}// 2 kere
void r3() {
    printf("*   *  ");
}

void s1() {
    printf(" ****  ");
}// 1 KERE !!!
void s2() {
    printf("*      ");
}

void s3() {
    printf(" ***   ");
}

void s4() {
    printf("    *  ");
}

void s5() {
    printf("****   ");
}

void t1() {
    printf("*****  ");
}

void t2() {
    printf("  *    ");
}// 4 kere

void u1() {
    printf("*   *  ");
}// 4 kere
void u2() {
    printf(" ***   ");
}

void v1() {
    printf("*   *  ");
}// 3 kere
void v2() {
    printf(" * *   ");
}

void v3() {
    printf("  *    ");
}

void yy1() {
    printf("*   *  ");
}

void y2() {
    printf(" * *   ");
}

void y3() {
    printf("  *    ");
}// 3 kere

void z1() {
    printf("*****  ");
}// 2 kere
void z2() {
    printf("   *   ");
}

void z3() {
    printf("  *    ");
}

void z4() {
    printf(" *     ");
}

void x1() {
    printf("*   *  ");
}// 2 kere
void x2() {
    printf(" * *   ");
}// 2 kere
void x3() {
    printf("  *    ");
}

void w1() {
    printf("*   *  ");
}// 2 kere
void w2() {
    printf("* * *  ");
}

void w3() {
    printf("** **  ");
}

void w4() {
    printf(" * *   ");
}

void q1() {
    printf(" ***   ");
}// 2 kere
void q2() {
    printf("*   *  ");
}// 2 kere
void q3() {
    printf("   **  ");
}

void space() {
    printf("       ");
}// 7 karakterlik boşluk.

//-------------------------------------------------------------------------------------------

void virgul1() {
    printf("       ");
}// 2 kere
void virgul2() {
    printf(" **    ");
}

void virgul3() {
    printf("  *    ");
}

void virgul4() {
    printf(" *     ");
}

void nokta1() {
    printf("       ");
}// 3 kere
void nokta2() {
    printf(" **    ");
}// 2 kere

void unlem1() {
    printf(" **    ");
}// 4 kere
void unlem2() {
    printf("       ");
}

void soruisareti1() {
    printf(" ***   ");
}

void soruisareti2() {
    printf("*   *  ");
}

void soruisareti3() {
    printf("   *   ");
}

void soruisareti4() {
    printf("  *    ");
}// 2 kere

void ikinoktaustuste1() {
    printf(" **    ");
}// 4 kere
void ikinoktaustuste2() {
    printf("       ");
}

void noktalivirgul1() {
    printf(" **    ");
}// 3 kere
void noktalivirgul2() {
    printf("       ");
}

void noktalivirgul3() {
    printf("  *    ");
}

void kisacizgi1() {
    printf("       ");
}// 4 kere
void kisacizgi2() {
    printf(" ***   ");
}

void altcizgi1() {
    printf("       ");
}// 4 kere
void altcizgi2() {
    printf("*****  ");
}

void parantezsol1() {
    printf("   *   ");
}// 2 kere
void parantezsol2() {
    printf("  *    ");
}// 3 kere

void parantezsag1() {
    printf("  *    ");
}

void parantezsag2() {
    printf("   *   ");
}// 3 kere

void dikisaret1() {
    printf("  *    ");
}// 5 kere

void esittir1() {
    printf("       ");
}// 3 kere
void esittir2() {
    printf("*****  ");
}// 2 kere

void yildizisareti1() {
    printf("*   *  ");
}// 2 kere
void yildizisareti2() {
    printf(" * *   ");
}

void yildizisareti3() {
    printf("*****  ");
}


void yancizgisag1() {
    printf("    *  ");
}

void yancizgisag2() {
    printf("   *   ");
}

void yancizgisag3() {
    printf("  *    ");
}

void yancizgisag4() {
    printf(" *     ");
}

void yancizgisag5() {
    printf("*      ");
}

/*
void yancizgisol1(){
    printf("*      ");
}
void yancizgisol2(){
    printf(" *     ");
}
void yancizgisol3(){
    printf("  *    ");
}
void yancizgisol4(){
    printf("   *   ");
}
void yancizgisol5(){
    printf("    *  ");
}
 iptal edildi
*/

void artiisareti1() {
    printf("       ");
}// 2 kere
void artiisareti2() {
    printf("  *    ");
}// 2 kere
void artiisareti3() {
    printf("*****  ");
}


void koseliparantezsol1() {
    printf("  **   ");
}// 2 kere
void koseliparantezsol2() {
    printf("  *    ");
}// 3 kere


void koseliparantezsag1() {
    printf("  **   ");
}// 2 kere
void koseliparantezsag2() {
    printf("   *   ");
}// 3 kere


void susluparantezsol1() {
    printf("  **   ");
}// 2 kere
void susluparantezsol2() {
    printf("  *    ");
}// 2 kere
void susluparantezsol3() {
    printf(" *     ");
}// 1 kere


void susluparantezsag1() {
    printf("  **   ");
}// 2 kere
void susluparantezsag2() {
    printf("   *   ");
}// 2 kere
void susluparantezsag3() {
    printf("    *  ");
}// 1 kere

/*
void kesmeisareti1(){
    printf(" **    ");
}// 2 kere
void kesmeisareti2(){
    printf("  *    ");
}
void kesmeisareti3(){
    printf("  *    ");
}
 iptal edildi
*/


void kucukturisareti1() {
    printf("    *  ");
}// 2 kere
void kucukturisareti2() {
    printf("  *    ");
}// 2 kere
void kucukturisareti3() {
    printf("*      ");
}


void buyukturisareti1() {
    printf("*      ");
}// 2 kere
void buyukturisareti2() {
    printf("  *    ");
}// 2 kere
void buyukturisareti3() {
    printf("    *  ");
}


void usisareti1() {
    printf("  *    ");
}

void usisareti2() {
    printf(" * *   ");
}

void usisareti3() {
    printf("*   *  ");
}

void usisareti4() {
    printf("       ");
}// 2 KERE


void tirnakisareti1() {
    printf(" * *   ");
}// 2 kere
void tirnakisareti2() {
    printf("       ");
}// 3 kere

//------------------------------------------------------------------------------------------

void bir1() {
    printf("  *    ");
}

void bir2() {
    printf(" **    ");
}

void bir3() {
    printf(" ***   ");
}

void iki1() {
    printf("  **   ");
}

void iki2() {
    printf(" *  *  ");
}

void iki3() {
    printf("   *   ");
}

void iki4() {
    printf("  *    ");
}

void iki5() {
    printf(" ****  ");
}

void uc1() {
    printf(" ***   ");
}

void uc2() {
    printf("    *  ");
}

void uc3() {
    printf("  **   ");
}


void dort1() {
    printf("   *   ");
}

void dort2() {
    printf("  **   ");
}

void dort3() {
    printf(" * *   ");
}

void dort4() {
    printf("*****  ");
}

void dort5() {
    printf("   *   ");
}


void bes1() {
    printf("*****  ");
}

void bes2() {
    printf("*      ");
}

void bes3() {
    printf("****   ");
}

void bes4() {
    printf("    *  ");
}// 2 kere


void alti1() {
    printf(" ***   ");
}// 2 kere
void alti2() {
    printf("*      ");
}

void alti3() {
    printf("****   ");
}

void alti4() {
    printf("*   *  ");
}


void yedi1() {
    printf("*****  ");
}

void yedi2() {
    printf("   *   ");
}

void yedi3() {
    printf(" ***   ");
}

void yedi4() {
    printf(" *     ");
}

void yedi5() {
    printf("*      ");
}


void sekiz1() {
    printf(" ***   ");
}// 3 kere
void sekiz2() {
    printf("*   *  ");
}// 2 kere


void dokuz1() {
    printf(" ***   ");
}

void dokuz2() {
    printf("*   *  ");
}

void dokuz3() {
    printf(" ****  ");
}

void dokuz4() {
    printf("    *  ");
}


void sifir1() {
    printf(" ***   ");
}// 2 kere
void sifir2() {
    printf("*   *  ");
}// 3 kere



// ----------- BAGLI LISTE -----------
typedef struct liste {
    char ch;
    struct liste *next;
}liste;
//------------------------------------





//-------------------------------------------- M A İ N -----------------------------------------------



int main(){


    int i,k,uzunluk, program_ilk_kullanim = 0;

    // *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-DOSYALAR-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

    FILE *sayac_dat = fopen("sayac.dat","a+"); // Konum göstergeci dosya sonunda olacak şekilde açılıyor Dosya yoksa oluşturuluyor.
    FILE *gecmis_png = fopen("gecmis.png","a+"); // Gecmis kaydının tutulacağı dosya. Acılamasın diye png formatında
    FILE *satirUzunlugu_dat = fopen("satirUzunlugu.dat","a+"); // Yazdirilacak satir uzunluğunun depolandigi dosya.




    printf("\n**************************************************************************************************");
    printf("\n*\t\t Programa Hosgeldiniz :)");
    printf("\n*\n*\t !!!   LUTFEN PROGRAMIN DUZGUN CALISMASI ICIN BU PENCEREYI TAM EKRAN YAPINIZ   !!!");
    printf("\n*\n*\t\tVe ilave olarak lutfen turkce karakterler girmeyiniz!\n");
    printf("*\n*\t\t\t\t\tISLEVLER:");
    printf("\n*\t\t Gecmisi goruntulemek icin gecmis() yaziniz.");
    printf("\n*\t\t Programi kapatmak icin exit() yaziniz.");
    printf("\n*\t\t Satir uzunlugunu ayarlamak icin uzunluk() yaziniz.");
    printf("\n**************************************************************************************************\n");


    girdi:
    

    uzunluk=0;
    int kontrola=0,kontrolb=0,kontrolc=0,kontrold=0,kontrole=0;
    int ikontrol=0;
    char karakter,q;

    printf("\nLutfen bir cumle giriniz: ");

//****************************************** Cumle girdisi ve yonetimi *************************************************
    liste *root;
    liste *iter;  //iterator
    liste *eski_iter;
    root= (liste *) malloc(sizeof(liste));
    root->next=NULL;
    iter=root;

    i=0;
    int tur_bekle=0;
    while (1){ // Girilen karakterleri bagli listeye kaydediyor !!
        if (tur_bekle==1) break;
        karakter=getchar();
        iter->ch = karakter;
        iter->next= (liste *) malloc(sizeof(liste));
        iter=iter->next;
        iter->next=NULL;
        i++;
        uzunluk++;
        if (karakter=='\n') tur_bekle=1;
    }

    char dizi[uzunluk]; // !!!!!  uzunluk = girilen_karakter_sayisi + 1
    uzunluk--; // uzunluk 1 fazladan saymisti. Notrlendi

    iter=root;
    for (i=0;i<uzunluk;i++){
        dizi[i]= iter->ch;
        eski_iter=iter;
        iter=iter->next;
        free(eski_iter);
    }
    free(iter);

//********************************************************* yazılan karakterler baglı listeden, dizi'ye kaydedildi.


    //-------------------------------------- Programi Kapatma Algoritmasi ------------------------------------------

    if (dizi[0]=='e' && dizi[1]=='x' && dizi[2]=='i' && dizi[3]=='t' && dizi[4]=='(' && dizi[5]==')'){
        printf("\n\n\tProgram kapatildi..\n\n");
        return 0;
    }
    //--------------------------------------------------------------------------------------------------------------

    //--------------------------------------- Gecmis Yazdirma Algoritmasi ----------------------------------------------
    // yazdırıldıktan sonra girdi'ye geri dönüyor !

    if (dizi[0]=='g' && dizi[1]=='e' && dizi[2]=='c' && dizi[3]=='m' && dizi[4]=='i' && dizi[5]=='s' && dizi[6]=='(' && dizi[7]==')'){
        char ch_gecmis;
        char ilk_karakter;
        int imlec_yeri;

        imlec_yeri = ftell(gecmis_png);
        rewind(gecmis_png);
        ilk_karakter= getc(gecmis_png);
        if (ilk_karakter==EOF){
            printf("\n\nGecmise kayitli herhangi bir sey yok!\n\n");
            program_ilk_kullanim = 1;
            goto girdi;
        }

        printf("\n\nGecmis:\n\n");
        rewind(gecmis_png);
        while (!feof(gecmis_png)) {
            ch_gecmis = getc(gecmis_png);
            if (ch_gecmis == EOF) break;
            printf("%c", ch_gecmis);
        }
        imlec_yeri--;
        fseek(gecmis_png, imlec_yeri, 0);
        printf("\n\nGecmisi temizlemek icin temizle() yaziniz.\n\n");
        goto girdi;
    }
    //-------------------------------------- Geçmiş Temizleme Algoritmasi ------------------------------------------

    if (dizi[0]=='t' && dizi[1]=='e' && dizi[2]=='m' && dizi[3]=='i' && dizi[4]=='z' && dizi[5]=='l' && dizi[6]=='e' && dizi[7]=='(' && dizi[8]==')'){
        fopen("gecmis.png", "w");
        if (fopen("sayac.dat" ,"r")) {
            FILE *sayac_dat2 = fopen("sayac.dat", "w");
            fprintf(sayac_dat2, "%d\n", 0);
        }
        //fopen("sayac.dat", "w");
        //remove("gecmis.png");
        //remove("sayac.dat");
        printf("\n----------------------------------------------------------------\n");
        printf("\nGecmis yok edildi..\n");
        //free(gecmis_png);
        //free(sayac_dat);
        printf("\n!!! Degisikliklerin uygulanmasi icin program kapatildi !!!\n");
        printf("\n----------------------------------------------------------------\n");
        return 0;
    }

    //------------------------------------- Satir Dosyasi Kontrol Algoritmasi ------------------------------------------

    int ilk_karakter;
    int uzunluk_satir;
    int satir_long;

    rewind(satirUzunlugu_dat);
    ilk_karakter = fgetc(satirUzunlugu_dat);
    if (ilk_karakter==EOF){
        rewind(satirUzunlugu_dat);
        fprintf(satirUzunlugu_dat,"%d\n",23);
    }
    else {
        rewind(satirUzunlugu_dat);
        while (!feof(satirUzunlugu_dat)){
            fscanf(satirUzunlugu_dat,"%d\n",&uzunluk_satir);
        }
        printf("\n\nMevcut satir uzunlugu: %d",uzunluk_satir);
    }

    //---------------------------------- Satir Uzunlugu Değiştirme Algoritmasi -----------------------------------------

    if (dizi[0]=='u' && dizi[1]=='z' && dizi[2]=='u' && dizi[3]=='n' && dizi[4]=='l' && dizi[5]=='u' && dizi[6]=='k' && dizi[7]=='(' && dizi[8]==')'){
        //printf("\nMevcut satir uzunlugu: %d\n",uzunluk_satir);
        printf("\nYeni satir uzunlugunu giriniz: ");
        scanf("%d",&uzunluk_satir);
        printf("\nSatir uzunlugunuz %d olarak degistirildi",uzunluk_satir);

        fprintf(satirUzunlugu_dat,"%d\n",uzunluk_satir);
        getchar();
        goto girdi;
    }


    //-------------------------------------- Geçmiş Kaydetme Algoritmasi -------------------------------------------

    int sayac,dosya_yeni=0;
    char okunan;

    rewind(sayac_dat);
    okunan= fgetc(sayac_dat);
    if (okunan==EOF){ // Program ilk defa çalıştırılıyorsa dosyaya 0 yazacak.
        rewind(sayac_dat);
        fprintf(sayac_dat,"%d\n",0);
    }
    // gecmişe her yazdırılmada sayac_dat 1 arttırılacak

    rewind(sayac_dat);
    while (!feof(sayac_dat)){
        fscanf(sayac_dat,"%d\n",&sayac);
        //printf("Sayac sayisi: %d\n",sayac);
    }

    rewind(gecmis_png);
    fprintf(gecmis_png,"%d- ",sayac+1);
    for (i=0;i<uzunluk;i++){ // gecmişe yazdırma
        fputc(dizi[i],gecmis_png);
    }
    fputc('\n',gecmis_png);

    fprintf(sayac_dat,"%d\n",sayac+1);
    //--------------------------------------------------------------------------------------------------------------





//****************************************** Satır hesabı algoritması **************************************************

    int kelime_uzunlugu[100],kelime_sayisi=0,a=0;
    kelime_uzunlugu[a]=0;

    for (i=0;i<uzunluk;i++){        // Kelime uzunluklarını sayıp kaydediyor!
        if (dizi[i]==' ' || dizi[i]=='\0' || dizi[i]=='\n'){
            kelime_uzunlugu[a]++;
            a++;
            kelime_uzunlugu[a]=0;
            kelime_sayisi++;
        }
        else {
            kelime_uzunlugu[a]++;
        }
    }
    kelime_sayisi++;

    for (a=0;a<kelime_sayisi;a++){
        if ((kelime_uzunlugu[a])> uzunluk_satir+1){   // [!][!][!][!]
            printf("\n! KELIME UZUNLUGU EN FAZLA %d OLABILIR !\n",uzunluk_satir); // [!][!][!][!]
            goto girdi;
        }
    }

    //for (a=0;a<kelime_sayisi;a++) printf("\nKelime uzunlugu:%d",kelime_uzunlugu[a]);
    printf("\nKelime sayisi:%d",kelime_sayisi);

    int satir_uzunlugu[100];
    int satir_sayisi;
    int satir=0;
    int b=0;

    for (a=0;a<kelime_sayisi;a++){          // Satır uzunluklarını hesaplayıp kaydediyor !
        if (satir+kelime_uzunlugu[a]< uzunluk_satir+1){ // [!][!][!][!] // [!][!][!][!] // [!][!][!][!]
            satir += kelime_uzunlugu[a];
        }
        else {
            satir_uzunlugu[b]=satir;
            satir=0;
            b++;
            a--;
        }
    }
    if (satir!=0) satir_uzunlugu[b]=satir;
    satir_sayisi=b+1;

    for (b=0;b<satir_sayisi;b++) printf("\n%d. satir uzunlugu: %d",b+1,satir_uzunlugu[b]);
    printf("\nSatir sayisi: %d\n\n",satir_sayisi);

//**********************************************************************************************************************


    printf("\n\n\n\n\n");

    a=0;
    for (k=0;k<satir_sayisi;k++){

        i=ikontrol;
        while (kontrola<satir_uzunlugu[a]){ // 1. isaret satiri
            if (dizi[i]=='\0'){
                kontrola=99;        // Döngüyü sonlandırma amaçlı
            }
            if (dizi[i]=='a' || dizi[i]=='A'){
                a1();
            }
            else if (dizi[i]=='b' || dizi[i]=='B'){
                b1();
            }
            else if (dizi[i]=='c' || dizi[i]=='C'){
                c1();
            }
            else if (dizi[i]=='d' || dizi[i]=='D'){
                d1();
            }
            else if (dizi[i]=='e' || dizi[i]=='E'){
                e1();
            }
            else if (dizi[i]=='f' || dizi[i]=='F'){
                f1();
            }
            else if (dizi[i]=='g' || dizi[i]=='G'){
                g1();
            }
            else if (dizi[i]=='h' || dizi[i]=='H'){
                h1();
            }
            else if (dizi[i]=='i' || dizi[i]=='I'){
                i1();
            }
            else if (dizi[i]=='j' || dizi[i]=='J'){
                jj1();
            }
            else if (dizi[i]=='k' || dizi[i]=='K'){
                k1();
            }
            else if (dizi[i]=='l' || dizi[i]=='L'){
                l1();
            }
            else if (dizi[i]=='m' || dizi[i]=='M'){
                m1();
            }
            else if (dizi[i]=='n' || dizi[i]=='N'){
                n1();
            }
            else if (dizi[i]=='o' || dizi[i]=='O'){
                o1();
            }
            else if (dizi[i]=='p' || dizi[i]=='P'){
                p1();
            }
            else if (dizi[i]=='r' || dizi[i]=='R'){
                r1();
            }
            else if (dizi[i]=='s' || dizi[i]=='S'){
                s1();
            }
            else if (dizi[i]=='t' || dizi[i]=='T'){
                t1();
            }
            else if (dizi[i]=='u' || dizi[i]=='U'){
                u1();
            }
            else if (dizi[i]=='v' || dizi[i]=='V'){
                v1();
            }
            else if (dizi[i]=='y' || dizi[i]=='Y'){
                yy1();
            }
            else if (dizi[i]=='z' || dizi[i]=='Z'){
                z1();
            }
            else if (dizi[i]=='x' || dizi[i]=='X'){
                x1();
            }
            else if (dizi[i]=='w' || dizi[i]=='W'){
                w1();
            }
            else if (dizi[i]=='q' || dizi[i]=='Q'){
                q1();
            }
            else if (dizi[i]==' '){
                space();
            }

            else if (dizi[i]==49){
                bir1();
            }
            else if (dizi[i]==50){
                iki1();
            }
            else if (dizi[i]==51){
                uc1();
            }
            else if (dizi[i]==52){
                dort1();
            }
            else if (dizi[i]==53){
                bes1();
            }
            else if (dizi[i]==54){
                alti1();
            }
            else if (dizi[i]==55){
                yedi1();
            }
            else if (dizi[i]==56){
                sekiz1();
            }
            else if (dizi[i]==57){
                dokuz1();
            }
            else if (dizi[i]==48){
                sifir1();
            }

            else if (dizi[i]==','){
                virgul1();
            }
            else if (dizi[i]=='.'){
                nokta1();
            }
            else if (dizi[i]=='!'){
                unlem1();
            }
            else if (dizi[i]=='?'){
                soruisareti1();
            }
            else if (dizi[i]==':'){
                ikinoktaustuste1();
            }
            else if (dizi[i]==';'){
                noktalivirgul1();
            }
            else if (dizi[i]=='-'){
                kisacizgi1();
            }
            else if (dizi[i]=='_'){
                altcizgi1();
            }
            else if (dizi[i]=='('){
                parantezsol1();
            }
            else if (dizi[i]==')'){
                parantezsag1();
            }
            else if (dizi[i]=='|'){
                dikisaret1();
            }
            else if (dizi[i]=='='){
                esittir1();
            }
            else if (dizi[i]=='*'){
                yildizisareti1();
            }
            else if (dizi[i]=='/'){
                yancizgisag1();
            }
            else if (dizi[i]=='+'){
                artiisareti1();
            }
            else if (dizi[i]=='['){
                koseliparantezsol1();
            }
            else if (dizi[i]==']'){
                koseliparantezsag1();
            }
            else if (dizi[i]=='{'){
                susluparantezsol1();
            }
            else if (dizi[i]=='}'){
                susluparantezsag1();
            }
            else if (dizi[i]=='<'){
                kucukturisareti1();
            }
            else if (dizi[i]=='>'){
                buyukturisareti1();
            }
            else if (dizi[i]=='^'){
                usisareti1();
            }
            else if (dizi[i]=='"'){
                tirnakisareti1();
            }
            i++;
            kontrola++;

        }
        kontrola=0;
        printf("\n");

        i=ikontrol;
        while (kontrolb<satir_uzunlugu[a]){ // 2. isaret satiri
            if (dizi[i]=='\0'){
                kontrolb=99;
            }
            if (dizi[i]=='a' || dizi[i]=='A'){
                a2();
            }
            else if (dizi[i]=='b' || dizi[i]=='B'){
                b2();
            }
            else if (dizi[i]=='c' || dizi[i]=='C'){
                c2();
            }
            else if (dizi[i]=='d' || dizi[i]=='D'){
                d2();
            }
            else if (dizi[i]=='e' || dizi[i]=='E'){
                e2();
            }
            else if (dizi[i]=='f' || dizi[i]=='F'){
                f2();
            }
            else if (dizi[i]=='g' || dizi[i]=='G'){
                g2();
            }
            else if (dizi[i]=='h' || dizi[i]=='H'){
                h1();
            }
            else if (dizi[i]=='i' || dizi[i]=='I'){
                i2();
            }
            else if (dizi[i]=='j' || dizi[i]=='J'){
                j2();
            }
            else if (dizi[i]=='k' || dizi[i]=='K'){
                k2();
            }
            else if (dizi[i]=='l' || dizi[i]=='L'){
                l1();
            }
            else if (dizi[i]=='m' || dizi[i]=='M'){
                m2();
            }
            else if (dizi[i]=='n' || dizi[i]=='N'){
                n2();
            }
            else if (dizi[i]=='o' || dizi[i]=='O'){
                o2();
            }
            else if (dizi[i]=='p' || dizi[i]=='P'){
                p2();
            }
            else if (dizi[i]=='r' || dizi[i]=='R'){
                r2();
            }
            else if (dizi[i]=='s' || dizi[i]=='S'){
                s2();
            }
            else if (dizi[i]=='t' || dizi[i]=='T'){
                t2();
            }
            else if (dizi[i]=='u' || dizi[i]=='U'){
                u1();
            }
            else if (dizi[i]=='v' || dizi[i]=='V'){
                v1();
            }
            else if (dizi[i]=='y' || dizi[i]=='Y'){
                y2();
            }
            else if (dizi[i]=='z' || dizi[i]=='Z'){
                z2();
            }
            else if (dizi[i]=='x' || dizi[i]=='X'){
                x2();
            }
            else if (dizi[i]=='w' || dizi[i]=='W'){
                w1();
            }
            else if (dizi[i]=='q' || dizi[i]=='Q'){
                q2();
            }
            else if (dizi[i]==' '){
                space();
            }

            else if (dizi[i]==49){
                bir2();
            }
            else if (dizi[i]==50){
                iki2();
            }
            else if (dizi[i]==51){
                uc2();
            }
            else if (dizi[i]==52){
                dort2();
            }
            else if (dizi[i]==53){
                bes2();
            }
            else if (dizi[i]==54){
                alti2();
            }
            else if (dizi[i]==55){
                yedi2();
            }
            else if (dizi[i]==56){
                sekiz2();
            }
            else if (dizi[i]==57){
                dokuz2();
            }
            else if (dizi[i]==48){
                sifir2();
            }

            else if (dizi[i]==','){
                virgul1();
            }
            else if (dizi[i]=='.'){
                nokta1();
            }
            else if (dizi[i]=='!'){
                unlem1();
            }
            else if (dizi[i]=='?'){
                soruisareti2();
            }
            else if (dizi[i]==':'){
                ikinoktaustuste1();
            }
            else if (dizi[i]==';'){
                noktalivirgul1();
            }
            else if (dizi[i]=='-'){
                kisacizgi1();
            }
            else if (dizi[i]=='_'){
                altcizgi1();
            }
            else if (dizi[i]=='('){
                parantezsol2();
            }
            else if (dizi[i]==')'){
                parantezsag2();
            }
            else if (dizi[i]=='|'){
                dikisaret1();
            }
            else if (dizi[i]=='='){
                esittir2();
            }
            else if (dizi[i]=='*'){
                yildizisareti2();
            }
            else if (dizi[i]=='/'){
                yancizgisag2();
            }
            else if (dizi[i]=='+'){
                artiisareti2();
            }
            else if (dizi[i]=='['){
                koseliparantezsol2();
            }
            else if (dizi[i]==']'){
                koseliparantezsag2();
            }
            else if (dizi[i]=='{'){
                susluparantezsol2();
            }
            else if (dizi[i]=='}'){
                susluparantezsag2();
            }
            else if (dizi[i]=='<'){
                kucukturisareti2();
            }
            else if (dizi[i]=='>'){
                buyukturisareti2();
            }
            else if (dizi[i]=='^'){
                usisareti2();
            }
            else if (dizi[i]=='"'){
                tirnakisareti1();
            }
            i++;
            kontrolb++;

        }
        kontrolb=0;
        printf("\n");


        i=ikontrol;
        while (kontrolc<satir_uzunlugu[a]){ // 3. isaret satiri
            if (dizi[i]=='\0'){
                kontrolc=99;
            }
            if (dizi[i]=='a' || dizi[i]=='A'){
                a3();
            }
            else if (dizi[i]=='b' || dizi[i]=='B'){
                b1();
            }
            else if (dizi[i]=='c' || dizi[i]=='C'){
                c2();
            }
            else if (dizi[i]=='d' || dizi[i]=='D'){
                d2();
            }
            else if (dizi[i]=='e' || dizi[i]=='E'){
                e3();
            }
            else if (dizi[i]=='f' || dizi[i]=='F'){
                f3();
            }
            else if (dizi[i]=='g' || dizi[i]=='G'){
                g3();
            }
            else if (dizi[i]=='h' || dizi[i]=='H'){
                h2();
            }
            else if (dizi[i]=='i' || dizi[i]=='I'){
                i2();
            }
            else if (dizi[i]=='j' || dizi[i]=='J'){
                j2();
            }
            else if (dizi[i]=='k' || dizi[i]=='K'){
                k3();
            }
            else if (dizi[i]=='l' || dizi[i]=='L'){
                l1();
            }
            else if (dizi[i]=='m' || dizi[i]=='M'){
                m3();
            }
            else if (dizi[i]=='n' || dizi[i]=='N'){
                n3();
            }
            else if (dizi[i]=='o' || dizi[i]=='O'){
                o2();
            }
            else if (dizi[i]=='p' || dizi[i]=='P'){
                p1();
            }
            else if (dizi[i]=='r' || dizi[i]=='R'){
                r1();
            }
            else if (dizi[i]=='s' || dizi[i]=='S'){
                s3();
            }
            else if (dizi[i]=='t' || dizi[i]=='T'){
                t2();
            }
            else if (dizi[i]=='u' || dizi[i]=='U'){
                u1();
            }
            else if (dizi[i]=='v' || dizi[i]=='V'){
                v1();
            }
            else if (dizi[i]=='y' || dizi[i]=='Y'){
                y3();
            }
            else if (dizi[i]=='z' || dizi[i]=='Z'){
                z3();
            }
            else if (dizi[i]=='x' || dizi[i]=='X'){
                x3();
            }
            else if (dizi[i]=='w' || dizi[i]=='W'){
                w2();
            }
            else if (dizi[i]=='q' || dizi[i]=='Q'){
                q2();
            }
            else if (dizi[i]==' '){
                space();
            }

            else if (dizi[i]==49){
                bir1();
            }
            else if (dizi[i]==50){
                iki3();
            }
            else if (dizi[i]==51){
                uc3();
            }
            else if (dizi[i]==52){
                dort3();
            }
            else if (dizi[i]==53){
                bes3();
            }
            else if (dizi[i]==54){
                alti3();
            }
            else if (dizi[i]==55){
                yedi3();
            }
            else if (dizi[i]==56){
                sekiz1();
            }
            else if (dizi[i]==57){
                dokuz3();
            }
            else if (dizi[i]==48){
                sifir2();
            }

            else if (dizi[i]==','){
                virgul2();
            }
            else if (dizi[i]=='.'){
                nokta1();
            }
            else if (dizi[i]=='!'){
                unlem1();
            }
            else if (dizi[i]=='?'){
                soruisareti3();
            }
            else if (dizi[i]==':'){
                ikinoktaustuste2();
            }
            else if (dizi[i]==';'){
                noktalivirgul2();
            }
            else if (dizi[i]=='-'){
                kisacizgi2();
            }
            else if (dizi[i]=='_'){
                altcizgi1();
            }
            else if (dizi[i]=='('){
                parantezsol2();
            }
            else if (dizi[i]==')'){
                parantezsag2();
            }
            else if (dizi[i]=='|'){
                dikisaret1();
            }
            else if (dizi[i]=='='){
                esittir1();
            }
            else if (dizi[i]=='*'){
                yildizisareti3();
            }
            else if (dizi[i]=='/'){
                yancizgisag3();
            }
            else if (dizi[i]=='+'){
                artiisareti3();
            }
            else if (dizi[i]=='['){
                koseliparantezsol2();
            }
            else if (dizi[i]==']'){
                koseliparantezsag2();
            }
            else if (dizi[i]=='{'){
                susluparantezsol3();
            }
            else if (dizi[i]=='}'){
                susluparantezsag3();
            }
            else if (dizi[i]=='<'){
                kucukturisareti3();
            }
            else if (dizi[i]=='>'){
                buyukturisareti3();
            }
            else if (dizi[i]=='^'){
                usisareti3();
            }
            else if (dizi[i]=='"'){
                tirnakisareti2();
            }
            i++;
            kontrolc++;

        }
        kontrolc=0;
        printf("\n");


        i=ikontrol;
        while (kontrold<satir_uzunlugu[a]){ // 4. isaret satiri
            if (dizi[i]=='\0'){
                kontrold=99;
            }
            if (dizi[i]=='a' || dizi[i]=='A'){
                a2();
            }
            else if (dizi[i]=='b' || dizi[i]=='B'){
                b2();
            }
            else if (dizi[i]=='c' || dizi[i]=='C'){
                c2();
            }
            else if (dizi[i]=='d' || dizi[i]=='D'){
                d2();
            }
            else if (dizi[i]=='e' || dizi[i]=='E'){
                e2();
            }
            else if (dizi[i]=='f' || dizi[i]=='F'){
                f2();
            }
            else if (dizi[i]=='g' || dizi[i]=='G'){
                g4();
            }
            else if (dizi[i]=='h' || dizi[i]=='H'){
                h1();
            }
            else if (dizi[i]=='i' || dizi[i]=='I'){
                i2();
            }
            else if (dizi[i]=='j' || dizi[i]=='J'){
                j2();
            }
            else if (dizi[i]=='k' || dizi[i]=='K'){
                k2();
            }
            else if (dizi[i]=='l' || dizi[i]=='L'){
                l1();
            }
            else if (dizi[i]=='m' || dizi[i]=='M'){
                m4();
            }
            else if (dizi[i]=='n' || dizi[i]=='N'){
                n4();
            }
            else if (dizi[i]=='o' || dizi[i]=='O'){
                o2();
            }
            else if (dizi[i]=='p' || dizi[i]=='P'){
                p3();
            }
            else if (dizi[i]=='r' || dizi[i]=='R'){
                r3();
            }
            else if (dizi[i]=='s' || dizi[i]=='S'){
                s4();
            }
            else if (dizi[i]=='t' || dizi[i]=='T'){
                t2();
            }
            else if (dizi[i]=='u' || dizi[i]=='U'){
                u1();
            }
            else if (dizi[i]=='v' || dizi[i]=='V'){
                v2();
            }
            else if (dizi[i]=='y' || dizi[i]=='Y'){
                y3();
            }
            else if (dizi[i]=='z' || dizi[i]=='Z'){
                z4();
            }
            else if (dizi[i]=='x' || dizi[i]=='X'){
                x2();
            }
            else if (dizi[i]=='w' || dizi[i]=='W'){
                w3();
            }
            else if (dizi[i]=='q' || dizi[i]=='Q'){
                q3();
            }
            else if (dizi[i]==' '){
                space();
            }

            else if (dizi[i]==49){
                bir1();
            }
            else if (dizi[i]==50){
                iki4();
            }
            else if (dizi[i]==51){
                uc2();
            }
            else if (dizi[i]==52){
                dort4();
            }
            else if (dizi[i]==53){
                bes4();
            }
            else if (dizi[i]==54){
                alti4();
            }
            else if (dizi[i]==55){
                yedi4();
            }
            else if (dizi[i]==56){
                sekiz2();
            }
            else if (dizi[i]==57){
                dokuz4();
            }
            else if (dizi[i]==48){
                sifir2();
            }

            else if (dizi[i]==','){
                virgul3();
            }
            else if (dizi[i]=='.'){
                nokta2();
            }
            else if (dizi[i]=='!'){
                unlem2();
            }
            else if (dizi[i]=='?'){
                soruisareti4();
            }
            else if (dizi[i]==':'){
                ikinoktaustuste1();
            }
            else if (dizi[i]==';'){
                noktalivirgul1();
            }
            else if (dizi[i]=='-'){
                kisacizgi1();
            }
            else if (dizi[i]=='_'){
                altcizgi1();
            }
            else if (dizi[i]=='('){
                parantezsol2();
            }
            else if (dizi[i]==')'){
                parantezsag2();
            }
            else if (dizi[i]=='|'){
                dikisaret1();
            }
            else if (dizi[i]=='='){
                esittir2();
            }
            else if (dizi[i]=='*'){
                yildizisareti2();
            }
            else if (dizi[i]=='/'){
                yancizgisag4();
            }
            else if (dizi[i]=='+'){
                artiisareti2();
            }
            else if (dizi[i]=='['){
                koseliparantezsol2();
            }
            else if (dizi[i]==']'){
                koseliparantezsag2();
            }
            else if (dizi[i]=='{'){
                susluparantezsol2();
            }
            else if (dizi[i]=='}'){
                susluparantezsag2();
            }
            else if (dizi[i]=='<'){
                kucukturisareti2();
            }
            else if (dizi[i]=='>'){
                buyukturisareti2();
            }
            else if (dizi[i]=='^'){
                usisareti4();
            }
            else if (dizi[i]=='"'){
                tirnakisareti2();
            }
            i++;
            kontrold++;

        }
        kontrold=0;
        printf("\n");


        i=ikontrol;
        while (kontrole<satir_uzunlugu[a]){ // 5. isaret satiri
            if (dizi[i]=='\0'){
                kontrole=99;
            }
            if (dizi[i]=='a' || dizi[i]=='A'){
                a2();
            }
            else if (dizi[i]=='b' || dizi[i]=='B'){
                b1();
            }
            else if (dizi[i]=='c' || dizi[i]=='C'){
                c1();
            }
            else if (dizi[i]=='d' || dizi[i]=='D'){
                d1();
            }
            else if (dizi[i]=='e' || dizi[i]=='E'){
                e1();
            }
            else if (dizi[i]=='f' || dizi[i]=='F'){
                f2();
            }
            else if (dizi[i]=='g' || dizi[i]=='G'){
                g1();
            }
            else if (dizi[i]=='h' || dizi[i]=='H'){
                h1();
            }
            else if (dizi[i]=='i' || dizi[i]=='I'){
                i1();
            }
            else if (dizi[i]=='j' || dizi[i]=='J'){
                j3();
            }
            else if (dizi[i]=='k' || dizi[i]=='K'){
                k1();
            }
            else if (dizi[i]=='l' || dizi[i]=='L'){
                l2();
            }
            else if (dizi[i]=='m' || dizi[i]=='M'){
                m1();
            }
            else if (dizi[i]=='n' || dizi[i]=='N'){
                n1();
            }
            else if (dizi[i]=='o' || dizi[i]=='O'){
                o1();
            }
            else if (dizi[i]=='p' || dizi[i]=='P'){
                p3();
            }
            else if (dizi[i]=='r' || dizi[i]=='R'){
                r2();
            }
            else if (dizi[i]=='s' || dizi[i]=='S'){
                s5();
            }
            else if (dizi[i]=='t' || dizi[i]=='T'){
                t2();
            }
            else if (dizi[i]=='u' || dizi[i]=='U'){
                u2();
            }
            else if (dizi[i]=='v' || dizi[i]=='V'){
                v3();
            }
            else if (dizi[i]=='y' || dizi[i]=='Y'){
                y3();
            }
            else if (dizi[i]=='z' || dizi[i]=='Z'){
                z1();
            }
            else if (dizi[i]=='x' || dizi[i]=='X'){
                x1();
            }
            else if (dizi[i]=='w' || dizi[i]=='W'){
                w4();
            }
            else if (dizi[i]=='q' || dizi[i]=='Q'){
                q1();
            }
            else if (dizi[i]==' '){
                space();
            }

            else if (dizi[i]==49){
                bir3();
            }
            else if (dizi[i]==50){
                iki5();
            }
            else if (dizi[i]==51){
                uc1();
            }
            else if (dizi[i]==52){
                dort5();
            }
            else if (dizi[i]==53){
                bes3();
            }
            else if (dizi[i]==54){
                alti1();
            }
            else if (dizi[i]==55){
                yedi5();
            }
            else if (dizi[i]==56){
                sekiz1();
            }
            else if (dizi[i]==57){
                dokuz1();
            }
            else if (dizi[i]==48){
                sifir1();
            }

            else if (dizi[i]==','){
                virgul4();
            }
            else if (dizi[i]=='.'){
                nokta2();
            }
            else if (dizi[i]=='!'){
                unlem1();
            }
            else if (dizi[i]=='?'){
                soruisareti4();
            }
            else if (dizi[i]==':'){
                ikinoktaustuste1();
            }
            else if (dizi[i]==';'){
                noktalivirgul3();
            }
            else if (dizi[i]=='-'){
                kisacizgi1();
            }
            else if (dizi[i]=='_'){
                altcizgi2();
            }
            else if (dizi[i]=='('){
                parantezsol1();
            }
            else if (dizi[i]==')'){
                parantezsag1();
            }
            else if (dizi[i]=='|'){
                dikisaret1();
            }
            else if (dizi[i]=='='){
                esittir1();
            }
            else if (dizi[i]=='*'){
                yildizisareti1();
            }
            else if (dizi[i]=='/'){
                yancizgisag5();
            }
            else if (dizi[i]=='+'){
                artiisareti1();
            }
            else if (dizi[i]=='['){
                koseliparantezsol1();
            }
            else if (dizi[i]==']'){
                koseliparantezsag1();
            }
            else if (dizi[i]=='{'){
                susluparantezsol1();
            }
            else if (dizi[i]=='}'){
                susluparantezsag1();
            }
            else if (dizi[i]=='<'){
                kucukturisareti1();
            }
            else if (dizi[i]=='>'){
                buyukturisareti1();
            }
            else if (dizi[i]=='^'){
                usisareti4();
            }
            else if (dizi[i]=='"'){
                tirnakisareti2();
            }
            i++;
            kontrole++;

        }
        kontrole=0;
        ikontrol+=satir_uzunlugu[a];
        a++;

        printf("\n\n\n");
    }

    goto girdi; // main fonksiyonunun baslarinda.

    fclose(sayac_dat);
    fclose(gecmis_png);
    fclose(satirUzunlugu_dat);
    return 0;
}
