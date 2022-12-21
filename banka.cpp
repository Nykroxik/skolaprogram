#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){
    string c;
    int user;
    int pepevolba;
    int jamalvolba;
    int jamalVyber;

    int pepeZustatek = 0;
    int pepeVyber;

    int jarmilaZustatek = 500;

    int jamalZustatek = 80000000;

    start:
    cout << "Vitejte v bance\n";
    cout << "-------------------\n";
    cout << "1) Pepe\n";
    cout << "2) Jarmila\n";
    cout << "3) Jamal\n";
    cout << "-------------------\n";
    cin >> user;
    system("cls");

    switch (user){
        case 1:{
            pepepinn:
            int pepepin;
            cout << "Zadejte pin\n";
            cin >> pepepin;
            system("cls");

        if (pepepin==1234){
             menupepe:
             cout << "Jakou akci chcete provest?\n";
             cout << "--------------------------\n";
             cout << "1) Vyber\n";
             cout << "2) Zustatek\n";
             cout << "3) Poslat penize\n";
             cout << "4) Odhlasit se\n";
             cin >> pepevolba;
             system("cls");

             switch (pepevolba){
             case 1:{
              cout << "Kolik chcete vybrat penez?";
              cin >> pepeVyber;
              system("cls");
              if (pepeZustatek>0 && pepeZustatek>pepeVyber){
                cout << "vybrali jste " << pepeVyber << " CZK" << endl;
                pepeZustatek = pepeZustatek - pepeVyber;
                cout << "Vas novy zustatek na ucte je " << pepeZustatek <<" CZK" << endl;

                Sleep(10000);
                system("cls");
                goto menupepe;
                break;
                }
              else {
               cout << "Bohuzel nemate penize na ucte na to, abyste vybrali penize\n";
               Sleep(10000);
               system("cls");
               goto menupepe;
               break;
              }
             }
             case 2:{
              cout << "Vas zustatek na ucte je " << pepeZustatek;
              Sleep(6000);
              system("cls");
              goto menupepe;
             break;
             }


           case 3:{
               int komuPoslat;
            cout << "-------------------------\n";
            cout << "Komu chcete poslat penize?\n";
            cout << "1) Jarmila\n";
            cout << "2) Jamal\n";
            cout << "-------------------------\n";
            cin >> komuPoslat;
            system("cls");

            switch (komuPoslat){
                int kolikPoslatpepe;
            case 1:{
            cout << "Kolik chcete poslat Jarmile?\n";
            cin >> kolikPoslatpepe;
            system("cls");
            if (pepeZustatek>kolikPoslatpepe){
            cout << "Poslali jste Jarmile " << kolikPoslatpepe << " CZK" << endl;
            pepeZustatek = pepeZustatek - kolikPoslatpepe;
            jarmilaZustatek = jarmilaZustatek + kolikPoslatpepe;
            cout << "Vas zustatek na ucte je " << pepeZustatek <<" CZK" <<  endl;
            Sleep (10000);
            system("cls");
            goto menupepe;
            }
            else {
                cout << "Chcete poslat vice, nez mate ";
                Sleep(4000);
                system("cls");
                goto menupepe;

            }
            break;
            }
            case 2: {
                  cout << "Kolik chcete poslat Jamalovi?\n";
            cin >> kolikPoslatpepe;
            system("cls");
            if (pepeZustatek>kolikPoslatpepe){
            cout << "Poslali jste Jarmile " << kolikPoslatpepe << " CZK" << endl;
            pepeZustatek = pepeZustatek - kolikPoslatpepe;
            jamalZustatek = jamalZustatek + kolikPoslatpepe;
            cout << "Vas zustatek na ucte je " << pepeZustatek <<" CZK" <<  endl;
            Sleep (10000);
            system("cls");
            goto menupepe;
            }
            else {
                cout << "Chcete poslat vice, nez mate ";
                Sleep(4000);
                system("cls");
                goto menupepe;

            }
            break;

            }
            }
           }
           case 4: {
              goto start;
              system("cls");
           }
        }
        }

        else {
          goto pepepinn;
        }



    }
    case 2: {

        Jarmilapinn:
            int jarmilapin;
            cout << "Zadejte pin\n";
            cin >> jarmilapin;
            system("cls");

        if (jarmilapin==5678){
             menujarmila:
                 int jarmilavolba;
             cout << "Jakou akci chcete provest?\n";
             cout << "--------------------------\n";
             cout << "1) Vyber\n";
             cout << "2) Zustatek\n";
             cout << "3) Poslat penize\n";
             cout << "4) Odhlasit se\n";
             cin >> jarmilavolba;
             system("cls");

             switch (jarmilavolba){
             case 1:{
                 int jarmilaVyber;
              cout << "Kolik chcete vybrat penez?";
              cin >> jarmilaVyber;
              system("cls");
              if (jarmilaZustatek>0 && jarmilaZustatek>jarmilaVyber){
                cout << "vybrali jste " << jarmilaVyber << " CZK" << endl;
                jarmilaZustatek = jarmilaZustatek - jarmilaVyber;
                cout << "Vas novy zustatek na ucte je " << jarmilaZustatek <<" CZK" << endl;


                Sleep(10000);
                system("cls");
                goto menujarmila;
                break;
                }
              else {
               cout << "Bohuzel nemate penize na ucte na to, abyste vybrali penize\n";
               Sleep(10000);
               system("cls");
               goto menujarmila;
               break;
              }
             }
             case 2:{
              cout << "Vas zustatek na ucte je " << jarmilaZustatek;
              Sleep(6000);
              system("cls");
              goto menujarmila;
             break;
             }


           case 3:{
               int komuPoslat;
            cout << "-------------------------\n";
            cout << "Komu chcete poslat penize?\n";
            cout << "1) Pepe\n";
            cout << "2) Jamal\n";
            cout << "-------------------------\n";
            cin >> komuPoslat;
            system("cls");

            switch (komuPoslat){
                int kolikPoslatJarmila;
            case 1:{
            cout << "Kolik chcete poslat Pepemu?\n";
            cin >> kolikPoslatJarmila;
            system("cls");
            if (jarmilaZustatek>kolikPoslatJarmila){
            cout << "Poslali jste Pepemu " << kolikPoslatJarmila << " CZK" << endl;
            jarmilaZustatek = jarmilaZustatek - kolikPoslatJarmila;
            pepeZustatek = pepeZustatek + kolikPoslatJarmila;
            cout << "Vas zustatek na ucte je " << jarmilaZustatek <<" CZK" <<  endl;
            Sleep (10000);
            system("cls");
            goto menujarmila;
            }
            else {
                cout << "Chcete poslat vice, nez mate ";
                Sleep(4000);
                system("cls");
                goto menujarmila;

            }
            break;
            }
            case 2: {
                  cout << "Kolik chcete poslat Jamalovi?\n";
            cin >> kolikPoslatJarmila;
            system("cls");
            if (jarmilaZustatek>kolikPoslatJarmila){
            cout << "Poslali jste Jamalovi " << kolikPoslatJarmila << " CZK" << endl;
            jarmilaZustatek = jarmilaZustatek - kolikPoslatJarmila;
            jamalZustatek = jamalZustatek + kolikPoslatJarmila;
            cout << "Vas zustatek na ucte je " << jarmilaZustatek <<" CZK" <<  endl;
            Sleep (10000);
            system("cls");
            goto menujarmila;
            }
            else {
                cout << "Chcete poslat vice, nez mate ";
                Sleep(4000);
                system("cls");
                goto menujarmila;

            }
            break;

            }
            }
           }
           case 4: {
              goto start;
              system("cls");
           }
        }
        }

        else {
          goto Jarmilapinn;
        }

    }
    case 3:{
            jamalpinn:
            int jamalpin;
            cout << "Zadejte pin\n";
            cin >> jamalpin;
            system("cls");

        if (jamalpin==666){
             menujamal:
             cout << "Jakou akci chcete provest?\n";
             cout << "--------------------------\n";
             cout << "1) Vyber\n";
             cout << "2) Zustatek\n";
             cout << "3) Poslat penize\n";
             cout << "4) Odhlasit se\n";
             cin >> jamalvolba;
             system("cls");

             switch (jamalvolba){
             case 1:{
              cout << "Kolik chcete vybrat penez?";
              cin >> jamalVyber;
              system("cls");
              if (jamalZustatek>0 && jamalZustatek>jamalVyber){
                cout << "vybrali jste " << jamalVyber << " CZK" << endl;
                jamalZustatek = jamalZustatek - jamalVyber;
                cout << "Vas novy zustatek na ucte je " << jamalZustatek <<" CZK" << endl;

                Sleep(10000);
                system("cls");
                goto menujamal;
                break;
                }
              else {
               cout << "Bohuzel nemate penize na ucte na to, abyste vybrali penize\n";
               Sleep(10000);
               system("cls");
               goto menujamal;
               break;
              }
             }
             case 2:{
              cout << "Vas zustatek na ucte je " << jamalZustatek;
              Sleep(6000);
              system("cls");
              goto menujamal;
             break;
             }


           case 3:{
               int komuPoslat;
            cout << "-------------------------\n";
            cout << "Komu chcete poslat penize?\n";
            cout << "1) Pepe\n";
            cout << "2) Jarmila\n";
            cout << "-------------------------\n";
            cin >> komuPoslat;
            system("cls");

            switch (komuPoslat){
                int kolikPoslatJamal;
            case 1:{
            cout << "Kolik chcete poslat Pepemu?\n";
            cin >> kolikPoslatJamal;
            system("cls");
            if (jamalZustatek>kolikPoslatJamal){
            cout << "Poslali jste Pepemu " << kolikPoslatJamal << " CZK" << endl;
            jamalZustatek = jamalZustatek - kolikPoslatJamal;
            pepeZustatek = pepeZustatek + kolikPoslatJamal;
            cout << "Vas zustatek na ucte je " << jamalZustatek <<" CZK" <<  endl;
            Sleep (10000);
            system("cls");
            goto menujamal;
            }
            else {
                cout << "Chcete poslat vice, nez mate ";
                Sleep(4000);
                system("cls");
                goto menujamal;

            }
            break;
            }
            case 2: {
                  cout << "Kolik chcete poslat Jarmile?\n";
            cin >> kolikPoslatJamal;
            system("cls");
            if (jamalZustatek>kolikPoslatJamal){
            cout << "Poslali jste Jarmile " << kolikPoslatJamal << " CZK" << endl;
            jamalZustatek = jamalZustatek - kolikPoslatJamal;
            jarmilaZustatek = jarmilaZustatek + kolikPoslatJamal;
            cout << "Vas zustatek na ucte je " << jamalZustatek <<" CZK" <<  endl;
            Sleep (10000);
            system("cls");
            goto menujamal;
            }
            else {
                cout << "Chcete poslat vice, nez mate ";
                Sleep(4000);
                system("cls");
                goto menujamal;

            }
            break;

            }
            }
           }
           case 4: {
              goto start;
              system("cls");
           }
        }
        }

        else {
          goto jamalpinn;
        }



    }



}
}

