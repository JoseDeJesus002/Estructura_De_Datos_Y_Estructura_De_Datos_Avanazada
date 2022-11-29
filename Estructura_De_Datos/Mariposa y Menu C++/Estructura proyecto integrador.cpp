/*
0 = Negro
1 = Azul
2 = Verde
3 = Aguamarina
4 = Rojo
5 = Purpura
6 = Amarillo
7 = Blanco
8 = Gris
9 = Azul claro
A = Verde claro
B = Aguamarina claro
C = Rojo claro
D = Purpura claro
E = Amarillo claro
F = Blanco brillante
*/
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

void frame(){
system("COLOR 07");
    // ESQUINAS //
    gotoxy(0,0);
    cout<<"*";
    gotoxy(0,29);
    cout<<"*";
    gotoxy(43,0);
    cout<<"*";
    gotoxy(43,29);
    cout<<"*";

    // A a B //
    for(int i=1;i<43;i++){
        gotoxy(i,0);
        cout<<"-";
    }
    for(int i=1;i<43;i++){
        gotoxy(i,3);
        cout<<"-";
    }
    // TITULO //
    gotoxy(2,2);
    cout<<"TOOLKIT LOBOS OS";
	
    // B a D //
        for(int l=1;l<41;l++){
        gotoxy(43.9,l);
        cout<<"|";
    }
        // C a D //
    for(int j=1;j<43;j++){
        gotoxy(j,34);
        cout<<"-";
    }
    for(int j=1;j<43;j++){
        gotoxy(j,36);
        cout<<"-";
    }
        // A a C //
	for(int j=1;j<43;j++){
        gotoxy(j,38);
        cout<<"-";
    }
    for(int j=1;j<43;j++){
        gotoxy(j,40);
        cout<<"-";
    }
    for(int k=1;k<41;k++){
        gotoxy(0,k);
        cout<<"|";
    }
         


    // FOOTER //
        gotoxy(2,35);
        cout<<"3ero  3";

        gotoxy(26,35);
        cout<<"Profra. Isabel";
int alas=4,pecas=12,cuerpo=12;
gotoxy(44,0 );textcolor(alas);cout<<"                                       ";textcolor(4);cout<<"("<<endl;
gotoxy(44,1 );textcolor(alas);cout<<"                                    ";textcolor(4);cout<<"(((("<<endl;
gotoxy(44,2 );textcolor(alas);cout<<"                                  ";textcolor(4);cout<<"((((((     ("<<endl;
gotoxy(44,3);textcolor(alas);cout<<"                                 ";textcolor(4);cout<<"((   (((   (("<<endl;
gotoxy(44,4);textcolor(alas);cout<<"                               ";textcolor(4);cout<<"(      ((  ((("<<endl;
gotoxy(44,5);textcolor(alas);cout<<"                               ";textcolor(7);cout<<"(  ((   (((( ( "<<endl;
gotoxy(44,6);textcolor(alas);cout<<"                            ";textcolor(7);cout<<"(     ((((((( "<<endl;
gotoxy(44,7);textcolor(alas);cout<<"                       ";textcolor(7);cout<<"(( (     (            ((((( "<<endl;
gotoxy(44,8);textcolor(alas);cout<<"                     ";textcolor(7);cout<<"((           ((((            ((("<<endl;
gotoxy(44,9);textcolor(alas);cout<<"                 ";textcolor(7);cout<<"(((          ((((("<<endl;
gotoxy(44,10);textcolor(alas);cout<<"             ";textcolor(8);cout<<"((((      ((   ((((                  ("<<endl;
gotoxy(44,11);textcolor(alas);cout<<"          ";textcolor(8);cout<<"((((    (((       (((                    (( (( (( (( (( (( ( "<<endl;
gotoxy(44,12);textcolor(alas);cout<<"        ";textcolor(8);cout<<"((((((   ((((    (    (((                                      ( "<<endl;
gotoxy(44,13);textcolor(alas);cout<<"       ";textcolor(8);cout<<"((((((   ((((    (((     ((( (( ( ( "<<endl;
gotoxy(44,14);textcolor(alas);cout<<"      ";textcolor(4);cout<<"((((((   (((((    ((((       ((                   (((        ("<<endl;
gotoxy(44,15);textcolor(alas);cout<<"      ";textcolor(4);cout<<"(((((   ((( ((     (((     (               ("<<endl;
gotoxy(44,16);textcolor(alas);cout<<"      ";textcolor(4);cout<<"(((((    ((( (    (     (   (            (((                 ("<<endl;
gotoxy(44,17);textcolor(alas);cout<<"      ";textcolor(4);cout<<"(((((   (((   (    (((     ((            ((((((((((((((((((("<<endl;
gotoxy(44,18);textcolor(alas);cout<<"      ";textcolor(4);cout<<"(((((   (((              ((((       (("<<endl;
gotoxy(44,19);textcolor(alas);cout<<"      ";textcolor(4);cout<<"(((((   ((        (((((((((      ((("<<endl;
gotoxy(44,20);textcolor(alas);cout<<"       ";textcolor(7);cout<<"(((((   (((         ((((   ((   ((((("<<endl;
gotoxy(44,21);textcolor(alas);cout<<"         ";textcolor(7);cout<<"(((((   (((    (      (((((((    (("<<endl;
gotoxy(44,22);textcolor(alas);cout<<"          ";textcolor(7);cout<<"(((((   ((    ((       (((((        (("<<endl;
gotoxy(44,23);textcolor(alas);cout<<"            ";textcolor(7);cout<<"((((    (    ((        (((("<<endl;
gotoxy(44,24);textcolor(alas);cout<<"              ";textcolor(7);cout<<"(((((        (((        (((("<<endl;
gotoxy(44,25);textcolor(alas);cout<<"              ";textcolor(7);cout<<"(((((       ((((          ((((((("<<endl;
gotoxy(44,26);textcolor(alas);cout<<"                 ";textcolor(4);cout<<"((((((      (((((("<<endl;
gotoxy(44,27);textcolor(alas);cout<<"                   ";textcolor(4);cout<<"((((((     ((((("<<endl;
gotoxy(44,28);textcolor(alas);cout<<"                       ";textcolor(4);cout<<"((((((      (((((((((("<<endl;
gotoxy(44,29);textcolor(alas);cout<<"                            ";textcolor(4);cout<<"((((((( "<<endl;
}
void menu_principal(){
	frame();
	
	int op;
	
	do{
	gotoxy(10,4);
	cout<<"\tMenu\n";
	
	cout<<"\n\t1. Apagar computadora"<<endl;
	cout<<"\n\t2. Programar apagado"<<endl;
	cout<<"\n\t3. Cancelar apagado"<<endl;
	cout<<"\n\t4. Reparar windows"<<endl;
	cout<<"\n\t5. Reaprar disco duro"<<endl;
	cout<<"\n\t6. Esconder archisvos en USB"<<endl;
	cout<<"\n\t7. Desocultar archivos en USB"<<endl;
	cout<<"\n\t8. Compartir internet desde Wi-Fi"<<endl;
	cout<<"\n\t9. Ver clave Wi-Fi"<<endl;
	cout<<"\n\t10. Borrar historial de navegacion"<<endl;
	cout<<"\n\t11. Desfragmentar disco"<<endl;
	cout<<"\n\t12. Activar el administrador"<<endl;
	cout<<"\n\t13. Desactivar el administrador"<<endl;
	cout<<"\n\t14. Salir"<<endl;
	gotoxy(10,38);
	cout<<"\n\tIngresa una opcion: ";
	cin>>op;
	
		switch(op)
		{
			case 1:
			cout<<"\n\tApagando computadora"<<endl;
			break;
			case 2:
			cout<<"\n\tProgramar Apagado"<<endl;
			break;
			case 3:
			cout<<"\n\tCancelar Apagado"<<endl;
			break;
			case 4:
			cout<<"\n\tReparar Windows 10"<<endl;
			break;
			case 5:
			cout<<"\n\tReparar disco duro"<<endl;
			break;
			case 6:
			cout<<"\n\tEsconder Archivos en USB"<<endl;
			break;
			case 7:
			cout<<"\n\tDesocultar Archivos en USB"<<endl;
			break;
			case 8:
			cout<<"\n\tCompartir Internet desde Wi-Fi"<<endl;
			break;
			case 9:
			cout<<"\n\tVer clave Wi-Fi"<<endl;
			break;
			case 10:
			cout<<"\n\tBorrar historial de navegacion"<<endl;
			break;
			case 11:
			cout<<"\n\tDesfragmentar disco"<<endl;
			break;
			case 12:
			cout<<"\n\tAcivar el administrador"<<endl;
			break;
			case 13:
			cout<<"\n\tDesactivar el administrador"<<endl;
			break;
			case 14:
			cout<<"\n\tAdios"<<endl;
			op=14;
			break;
			default:
			cout<<"\n\tOperacion no valida"<<endl;
			break;
		}
		system("pause");
		system("cls");
		frame();
	}while(op!=14);
 	system("cls");
  system("pause");
}        



int main(){;
    menu_principal();
}
