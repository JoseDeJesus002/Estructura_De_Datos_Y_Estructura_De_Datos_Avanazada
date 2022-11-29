#include <iostream>
#include <cstdio>
#include <windows.h>
#include <cstdlib>
#include <cmath>
#include <conio.h>
using namespace std;
void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    }
void textcolor(unsigned short color) {
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
}
int main(){
    int alas=12,pecas=11,cuerpo=6;
gotoxy(35,3);textcolor(alas);cout<<"  $$$$$$$$$                     ,,$$$$$$$      "<<endl;
gotoxy(35,4);textcolor(alas);cout<<"   $$$$$$$$$$,,               ,,$$$$$$$$$       "<<endl;
gotoxy(35,5);textcolor(alas);cout<<"    $$$$";textcolor(pecas);cout<<"\3";textcolor(alas);textcolor(alas);cout<<"$$$$$$$   ";textcolor(cuerpo);cout<<".     .";textcolor(alas);cout<<"   $$$$$$$";textcolor(pecas);cout<<"\3";textcolor(alas);cout<<"$$$       "<<endl;
gotoxy(35,6);textcolor(alas);cout<<"    $$$$$";textcolor(pecas);cout<<"\3";textcolor(alas);cout<<"$$$$$$$, ";textcolor(cuerpo);cout<<"'.    .'";textcolor(alas);cout<<" ,,$$$$";textcolor(pecas);cout<<"\3";textcolor(alas);cout<<"$$$$$$        "<<endl;
gotoxy(35,7);textcolor(alas);cout<<"    $$";textcolor(pecas);cout<<"\3";textcolor(alas);cout<<"$$$";textcolor(pecas);cout<<"\3";textcolor(alas);textcolor(alas);cout<<"$$$$$$$,, ";textcolor(cuerpo);cout<<"'. ,'";textcolor(alas);cout<<" $$$$$$";textcolor(pecas);cout<<"\3";textcolor(alas);cout<<"$$$";textcolor(pecas);cout<<"\3";textcolor(alas);cout<<"$$         "<<endl;
gotoxy(35,8);textcolor(alas);cout<<"    $$$$$$$$$$$$$$$$";textcolor(cuerpo);cout<<".@:,";textcolor(alas);cout<<"$$$$$$$$$$$$$$$        "<<endl;
gotoxy(35,9);textcolor(alas);cout<<"      ***$$$$$$$$$$$";textcolor(cuerpo);cout<<"@@$$$";textcolor(alas);cout<<"$$$$$$$$****        "<<endl;
gotoxy(35,10);textcolor(cuerpo);cout<<"          ,,,  *$$$$$$@.$$$$$$,,,,,,             "<<endl;
gotoxy(35,11);textcolor(alas);cout<<"     ,,$$$$$$$$$$$$$";textcolor(cuerpo);cout<<"* @ *";textcolor(alas);cout<<"$$$$$$$$$$$$,,,        "<<endl;
gotoxy(35,12);textcolor(alas);cout<<"    *$$$$$$$$$$$$$";textcolor(cuerpo);cout<<"* @@ *";textcolor(alas);cout<<"$$$$$$$$$$$$$        "<<endl;
gotoxy(35,13);textcolor(alas);cout<<"   ,,*$$$$$$";textcolor(pecas);cout<<"\3";textcolor(alas);cout<<"$$$$$$";textcolor(cuerpo);cout<<"  .@.  *";textcolor(alas);cout<<"$$$$$$";textcolor(pecas);cout<<"\3";textcolor(alas);cout<<"$$$$$..      "<<endl;
gotoxy(35,14);textcolor(alas);cout<<" $*   *$$$$$$$$$$$";textcolor(cuerpo);cout<<"   *   *";textcolor(alas);cout<<"$$$$$$$$$$*   *$,    "<<endl;
gotoxy(35,15);textcolor(alas);cout<<"*    ,,*$$$$$$$$$$         $$$$$$$$$$*,,   '*   "<<endl;
gotoxy(35,16);textcolor(alas);cout<<"      ,,$*$,$$**'           '***$$***,,          "<<endl;
gotoxy(35,17);textcolor(alas);cout<<"    ,,**   ' .*                  *          "<<endl;

gotoxy(50,20);
textcolor(15);
cout<<"I";textcolor(4);cout<<"\3";textcolor(15);cout<<" Programaci"<<char(162)<<"n ";

gotoxy(35,23);

 system("pause");
}
