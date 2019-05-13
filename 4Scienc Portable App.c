#include <stdio.h>
#include <math.h>
#include <conio.c>
#include <locale.h>
#include <windows.h>
#define MaxNoMe 7
#define MaxNoMenu 6
#define No 5
#define MaxNo 4
#define MaxNo_Menu 3
#define Max 2

/*------------------------------------------------------------*/
float T, freq, n, nt, rpm, x, w, fi, acp, v, raio, s, so, vc, v, aa, wq, vq;
int opcao, resp, r, acert, erro, QUM[15], b, p, si, sf, vw, tf, sfi;
char tecla;
int Freq();
int C();
int Per();
void MenuPrimcipal();
int Acp();
int PeF();
int AH();
int VL();
int VA();
int vav();
int va360();
int vle();
int vlr();
int rps();
int rpmf();
/*------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
menumune(){
	limpar();
	system("cls");
	Janela4();
	textcolor(LIGHTRED);gotoxy(31,5);printf(" Movimento Circular\n");
	textcolor(BLACK);gotoxy(28,8); printf(" ESCOLHA UMA OP��O ABAIXO");
	char *menu_list [ MaxNoMe ] = { "          Acelera��es", "      Deslocamento Angular", "Fun��o Hor�ria do Espa�o Angular", "      Per�odo e Frequencia", 
	"       Velocidade Angular", "       Velocidade Linear", "             Voltar" };
	int i,
	xpos = 25,
	ypos [ MaxNoMe ] = { 11, 13, 15, 17, 19, 21, 23 }; // lista do menu com o n�mero da linha
	for ( i = 0; i < MaxNoMe; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNoMe -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); menua (); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); AH (); }
				if ( i == 2 ) {  system("cls"); Beep(620,100); funcha (); }
				if ( i == 3 ) {  system("cls"); Beep(1650,100); PeF (); }
				if ( i == 4 ) {  system("cls"); Beep(1650,100); VA (); }
				if ( i == 5 ) {  system("cls"); Beep(1650,100); VL (); }
				if ( i == 6 ) {  system("cls"); Beep(620,100); MenuPrimcipal (); }
			break;
		}
	}
}

void MenuPrimcipal(){
	limpar();
	system("cls");
	Janela6();
	textcolor(BLACK);gotoxy(29,8); printf("ESCOLHA UMA OP��O ABAIXO");
	char *menu_list [ MaxNo_Menu ] = { "Qu�mica", "F�sica", "Sair" };
	int i,
	xpos = 37,
	ypos [ MaxNo_Menu ] = { 13, 15, 17 };
	for ( i = 0; i < MaxNo_Menu; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo_Menu -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;	
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); Quimica (); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); Fisica (); }
				if ( i == 2 ) {  system("cls"); printf("\7"); sair (); }
			break;
		}
	}
}

int main( void ){
	limpar();
	system("title 4Scienc portable app");
	setlocale(LC_ALL,"Portuguese");
	system("mode con:cols=78 lines=24");
		entrar();
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
int PeF(){
	Janela6();
	gotoxy(31,7);textcolor(BLACK);printf(" Per�odo e Frequencia\n");
	char *menu_list [ MaxNo ] = { "        Per�odo", "       Frequencia", "  Convers�o (rps rpm)", "         Voltar" };
	int i,
	xpos = 30,
	ypos [ MaxNoMenu ] = { 11, 13, 15, 17 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); Per (); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); Freq (); }
				if ( i == 2 ) {  system("cls"); Beep(1650,100); C (); }
				if ( i == 3 ) {  system("cls"); Beep(620,100); menumune(); }
			break;
		}
	}
	bug();
}

Per(){
	limpar();
	Janela3();
	gotoxy(28,8);textbackground(WHITE);printf("Digite o n�mero de voltas:");
		scanf("%f", &n);
	gotoxy(24,10);printf("Digite a Frequencia (em rps ou Hz):");
		scanf("%f", &freq);
	T = n/freq;
	gotoxy(7,22);printf("%.2f voltas com frequencia de %.2f Hz � efutuada em: %.2f segundos\n", n, freq, T);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

Freq(){
	limpar();
	Janela3();
	gotoxy(29,8);textbackground(WHITE);printf("Digite o n�mero de voltas:");
		scanf("%f", &n);
	gotoxy(21,10);printf("Digite o Tempo gasto para efetuar a volta:");
		scanf("%f", &T);
	freq = n/T;
	gotoxy(11,22);printf("A frenquencia de %.2f voltas por %.2f segundos �: %.2f Hz(rps)\n", n, T, freq);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

C(){
	system("cls");
	Janela4();
	textcolor(LIGHTRED);gotoxy(32,5);printf("Conver��o rps e rpm");
	textcolor(BLACK);gotoxy(29,8); printf(" ESCOLHA UMA OP��O ABAIXO");
	char *menu_list [ Max ] = { "RPM para RPS", "RPS para RPM" };
	int i,
	xpos = 36,
	ypos [ Max ] = { 13, 15 }; // lista do menu com o n�mero da linha
	for ( i = 0; i < Max; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  Max -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); rps (); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); rpmf (); }
			break;
		}
	}	
}

rps(){
	limpar();
	Janela3();
	gotoxy(30,8);textbackground(WHITE);printf("Digite o valor de RPM:");
		scanf("%f", &rpm);
	freq = rpm/60;
	gotoxy(20,22);printf("%.2f RPM s�o equivalentes a %.2f RPS (ou Hz)\n", rpm, freq);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

rpmf(){
	limpar();
	Janela3();
	gotoxy(28,8);textbackground(WHITE);printf("Digite o valor de RPS (ou Hz):");
			scanf("%f", &freq);
	rpm = freq * 60;
	gotoxy(20,22);printf("%.2f RPS (ou Hz) s�o equivalentes a %.2f RPM", freq, rpm);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
funcha(){
	Janela6();
	textcolor(LIGHTRED);gotoxy(25,5);printf("Fun��o Hor�ria do Espa�o Angular\n");
	gotoxy(23,7);textcolor(BLACK);printf("Selecione oque voc� deseja calcular\n");
	char *menu_list [ No ] = { "   Espa�o Angular Final", "  Espa�o Angular Inicial", "   Velociadade Angular", "          Tempo", "          Voltar" };
	int i,
	xpos = 28,
	ypos [ No ] = { 10, 12, 14, 16, 18 };
	for ( i = 0; i < No; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  No -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); caso1 (); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); caso2 (); }
				if ( i == 2 ) {  system("cls"); Beep(1650,100); caso3 (); }
				if ( i == 3 ) {  system("cls"); Beep(620,100);  caso4(); }
				if ( i == 4 ) {  system("cls"); Beep(620,100); menumune(); }
			break;
		}
	}
}

caso1(){
	limpar();
	Janela3();
	textbackground(WHITE);
	gotoxy(25,8);printf("Digite o Espa�o Angular Inicial:");
		scanf("%d", &si);
	gotoxy(26,10);printf("Digite a Velociadade Angular:");
		scanf("%d", &vw);
	gotoxy(34,12);printf("Digite o Tempo:");
		scanf("%d", &tf);
	sf = si + (vw * tf);
	gotoxy(30,22);printf("Espa�o Angular Final: %d", sf);
	gotoxy(1,23);textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

caso2(){
	limpar();
	Janela3();
	textbackground(WHITE);
	gotoxy(25,8);printf("Digite o Espa�o Angular Final:");
		scanf("%d", &sf);
	gotoxy(26,10);printf("Digite a Velociadade Angular:");
		scanf("%d", &vw);
	gotoxy(34,12);printf("Digite o Tempo:");
		scanf("%d", &tf);
	sfi = sf - (vw * tf);
	gotoxy(30,22);printf("Espa�o Angular Inicial: %d", sfi);
	gotoxy(1,23);textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

caso3(){
	limpar();
	Janela3();
	textbackground(WHITE);
	gotoxy(26,8);printf("Digite o Espa�o Angular Final:");
		scanf("%d", &sf);
	gotoxy(25,10);printf("Digite o Espa�o Angular Inicial:");
		scanf("%d", &si);
	gotoxy(34,12);printf("Digite o Tempo:");
		scanf("%d", &tf);
	sfi = (sf -(si));
	vw = (sfi/tf);
	gotoxy(31,22);printf("Velociadade Angular: %d", vw);
	gotoxy(1,23);textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

caso4(){
	limpar();
	Janela3();
	textbackground(WHITE);
	gotoxy(26,8);printf("Digite o Espa�o Angular Final:");
		scanf("%d", &sf);
	gotoxy(25,10);printf("Digite o Espa�o Angular Inicial:");
		scanf("%d", &si);
	gotoxy(26,12);printf("Digite a Velociadade Angular:");
		scanf("%d", &vw);
	sfi = (sf -(si));
	tf = (sfi/vw);
	gotoxy(37,22);printf("Tempo: %d", tf);
	gotoxy(1,23);textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
int AH(){
	limpar();
	Janela3();
	gotoxy(29,8);textbackground(WHITE);printf("Digite o Espa�o (Delta S):");
		scanf("%f", &s);
	gotoxy(30,10);printf("Digite o valor do raio:");
		scanf("%f", &raio);
	fi = s/raio;
	gotoxy(26,22);printf("O Arco da Trajet�ria � %.2f rad\n", fi);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
int Acp(){
	system("cls");
	Janela6();
	textcolor(BLACK);gotoxy(22,8); printf("Calcular a Acelera��o Centripeta por:");
	char *menu_list [ MaxNo_Menu ] = { " Velocidade Angular", " Velocidade Escalar", "       Voltar" };
	int i,
	xpos = 31,
	ypos [ MaxNo_Menu ] = { 13, 15, 17 }; // lista do menu com o n�mero da linha
	for ( i = 0; i < MaxNo_Menu; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo_Menu -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); acpl (); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); acpa (); }
				if ( i == 2 ) {  system("cls"); Beep(620,100); menua(); }
			break;
		}
	}
}

acpa(){
	limpar();
	Janela3();
	gotoxy(30,8);textbackground(WHITE);printf("Digite o valor do raio:");
		scanf("%f", &raio);
	gotoxy(26,10);printf("Digite a Velocidade �ngular (W):");
		scanf("%f", &w);
	wq = pow(w,2);
	acp = wq* raio;
	gotoxy(19,22);printf(" O valor da Acelera��o Centripeta � %.2f m/s�\n", acp);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

acpl(){
	limpar();
	Janela3();
	gotoxy(30,8);textbackground(WHITE);printf("Digite o valor do raio:");
		scanf("%f", &raio);
	gotoxy(26,10);printf("Digite a Velocidade Escalar (V):");
		scanf("%f", &v);
	vq = pow(v,2);
	acp = vq/raio;
	gotoxy(19,22);printf("O valor da Acelera��o Centripeta � %.2f m/s�\n", acp);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

AA(){
	limpar();
	Janela3();
	gotoxy(25,8);textbackground(WHITE);printf("Digite a Velocidade �ngular (W):");
		scanf("%f", &w);
	gotoxy(33,10);printf("Digite o Tempo:");
		scanf("%f", &T);
	aa = w/T;
	gotoxy(19,22);printf(" O valor da Acelera��o Angular � %.2f m/s�\n", aa);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

menua(){
	system("cls");
	Janela6();
	textcolor(BLACK);gotoxy(31,8); printf("Escolha uma Acelera��o");
	char *menu_list [ MaxNo_Menu ] = { " Acelera��o Angular", "Acelera��o Centripeta", "       Voltar" };
	int i,
	xpos = 31,
	ypos [ MaxNo_Menu ] = { 13, 15, 17 }; // lista do menu com o n�mero da linha
	for ( i = 0; i < MaxNo_Menu; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo_Menu -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); AA (); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); Acp (); }
				if ( i == 2 ) {  system("cls"); Beep(620,100); menumune(); }
			break;
		}
	}
}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
int VA(){
	system("cls");
	Janela6();
	textcolor(BLACK);gotoxy(26,8); printf("Calcular Velocidade Angular por:");
	char *menu_list [ MaxNo_Menu ] = { "     Raz�o", "Volta Completa", "    Voltar"};
	int i,
	xpos = 35,
	ypos [ MaxNo_Menu ] = { 12, 14, 16 }; // lista do menu com o n�mero da linha
	for ( i = 0; i < MaxNo_Menu; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo_Menu -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); vav (); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); va360 (); }
				if ( i == 2 ) {  system("cls"); Beep(1650,100); menumune (); }
			break;
		}
	}
}

va360(){
	limpar();
	Janela3();
	gotoxy(24,8);textbackground(WHITE);printf("Digite o numero de voltas completas:");
		scanf("%f", &vc);
	gotoxy(34,10);printf("Digite o Tempo:");
		scanf("%f", &T);
	w = ((2 * 3.14) * vc)/T;
	gotoxy(15,22);printf("A velocidade Angular num arco de 360 � de: %.2f rad/s\n", w);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

vav(){
	limpar();
	Janela3();
	gotoxy(24,8);textbackground(WHITE);printf("Digite Arco da Tragetoria (Delta Phi):");
		scanf("%f", &fi);
	gotoxy(35,10);printf("Digite o Tempo:");
		scanf("%f", &T);
		w = fi/T;
	gotoxy(23,22);printf("A velocidade Angular � de: %.2f rad/s\n", w);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
vle(){
	limpar();
	Janela3();
	gotoxy(29,8);textbackground(WHITE);printf("Digite Espa�o (Delta S):");
		scanf("%f", &s);
	gotoxy(34,10);printf("Digite o Tempo:");
		scanf("%f", &T);
		v = s/T;
	gotoxy(24,22);printf("A velocidade Escalar � de: %.2f m/s\n", v);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

vlr(){
	limpar();
	Janela3();
	gotoxy(33,8);textbackground(WHITE);printf("Digite o Tempo:");
		scanf("%f", &T);
	gotoxy(33,10);printf("Digite o Raio:");
		scanf("%f", &raio);
		v = ((2 * 3.14) * raio)/T;
	gotoxy(24,22);printf("A velocidade Escalar � de: %.2f m/s\n", v);
	textcolor(WHITE);system("pause");
	system("cls");
	menumune();
}

int VL(){
	system("cls");
	Janela6();
	textcolor(BLACK);gotoxy(18,8); printf("Calcular a Velociade Escalar (ou Linear) por:");
	char *menu_list [ MaxNo_Menu ] = { "     Espa�o", "2pi vezes o Raio", "     Voltar" };
	int i,
	xpos = 32,
	ypos [ MaxNo_Menu ] = { 13, 15, 17}; // lista do menu com o n�mero da linha
	for ( i = 0; i < MaxNo_Menu; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo_Menu -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); vle (); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); vlr (); }
				if ( i == 2 ) {  system("cls"); Beep(1650,100); menumune (); }
			break;
		}
	}
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
void Quimica(){
	system("cls");
	Janela6();
	textcolor(LIGHTRED);gotoxy(33,6); printf("Quiz de Qu�mica");
	textcolor(BLACK);gotoxy(31,8); printf("Deseja fazer o quiz?");
	char *menu_list [ Max ] = { "Jogar", "Voltar" };
	int i,
	xpos = 38,
	ypos [ Max ] = { 13, 15};
	for ( i = 0; i < Max; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  Max -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); quiz(); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); MenuPrimcipal (); }
			break;
		}
	}
}

void Fisica(){
	menumune();
	bug();
}

void Janela5(){
	int lin, col;
	col = 0;
	for ( lin = 0; lin <= 25; lin++ )
	for ( col = 0; col <= 79; col++ ){
	gotoxy(col,lin);textbackground(WHITE);printf(" ");
	}
}

void Janela6(){
	int lin, col;
	col = 0;
	for( lin = 0; lin <= 24; lin++ )
	for( col = 0; col <= 78; col++ ){
	gotoxy( col, lin );textbackground(3);printf(" ");
	}
	col = 0;
	for( lin = 3; lin <= 21; lin++ )
	for( col = 6; col <= 73; col++ ){
	gotoxy( col, lin );textbackground(WHITE);printf(" ");
	}
}

void Janela4(){
	int lin, col;
	col = 0;
	for( lin = 0; lin <= 24; lin++ )
	for( col = 0; col <= 78; col++ ){
	gotoxy( col, lin );textbackground(3);printf(" ");
	}
	col = 0;
	for( lin = 3; lin <= 24; lin++ )
	for( col = 6; col <= 73; col++ ){
	gotoxy( col, lin );textbackground(WHITE);printf(" ");
	}
}

void Janela3(){
	int col;
	gotoxy(1,1);textbackground(3);printf("                                                                              ");
	gotoxy(1,24);textbackground(3);printf("                                                                              ");
	for(col = 3; col <= 22; col++){
		gotoxy(1, col);printf("   ");
	}
	for(col = 3; col <= 22; col++){
		gotoxy(76, col);printf("   ");
	}
}

musicint(){
	Beep(1174.66,130);
	Beep(1244.51,135);
	Beep(1318.51,135);
	Beep(1396.91,250);
}

limpar(){
	so = 0;
	acert = 0;
	erro = 0;
	v = 0;
	vc = 0;
	s = 0;
	T = 0;
	freq = 0;
	n = 0;
	nt = 0;
	rpm = 0; 
	x = 0;
	fi = 0;
	w = 0;
	acp = 0;
	v = 0;
	raio = 0;
	si = 0;
	sf = 0;
	vw = 0;
	tf = 0; 
	sfi = 0;
}

bug(){
Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);
Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);
Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);
Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);Sleep(10000);
}

sair(){
	gotoxy(38,12);printf("At� logo!");
	textcolor(WHITE);
	exit(0);
}

entrar(){
	Janela6();
	gotoxy(33,12);textcolor(2);printf("Seja Bem-Vindo!");
	musicint();
	MenuPrimcipal();
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/
quiz(){
	Janela3();
	b = 0;
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);
	gotoxy(17,7);printf("================================================\n");
	gotoxy(17,8);printf("|1-A estabilidade do �tomo est� relacionada a: |\n");
	gotoxy(17,9);printf("================================================\n");
		char *menu_list [ MaxNo ] = { "1- Pr�tons", "2- El�trons", "3- N�utrons", "4- N�cleo" };
	int i,
	xpos = 35,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause"); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Certa!"); 
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); acert++; QUM[b] = 1; b++; textcolor(WHITE);system("pause"); }
				if ( i == 2 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause"); }
				if ( i == 3 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
			 quiz2 (); 
		}
	}	

}

quiz2(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(18,7);printf("=============================================\n");
	gotoxy(18,8);printf("|2-Qual a ligacao que um �tomo tem tendencia|");
	gotoxy(18,9);printf("|    a perder o el�trons e o outro ganhar?   |");
	gotoxy(18,10);printf("=============================================\n");
		char *menu_list [ MaxNo ] = { "1- I�nica", "2- Covalente", "3- Dativa", "4- Metalica" };
	int i,
	xpos = 34,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
				if ( i == 1 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 2 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 3 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
			quiz3();
		}
	}	

}

quiz3(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(23,7);printf("======================================");	
	gotoxy(23,8);printf("|3-O que ocorre na liga�ao covalente?|");
	gotoxy(23,9);printf("======================================");
		char *menu_list [ MaxNo ] = { "1- Um dos �tomo tem tendencia a perder e outro a ganhar el�trons", 
		"2- Ocorre quando um dos �tomo ja adquiriu a estabilidade", "3- Ocorre entre metal com metal", "4- Ocorre por meio de compartilhamento eletrons" };
	int i,
	xpos = 8,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 2 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 3 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++; 
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
			quiz4();
		}
	}	
}

quiz4(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(14,7);printf("=======================================================");	
	gotoxy(14,8);printf("|4-Quais s�o as caracteristicas dos compostos i�nicos?|");
	gotoxy(14,9);printf("=======================================================");
		char *menu_list [ MaxNo ] = { "1- S�o liquidos a temperatura ambiente e possuem estrutura cristalina", 
		"2- Apresentam elevado ponto de fus�o e ebuli�ao e n�o possuem estrutura\n\tcristalina", 
		"3- Apresentam elevado ponto de fus�o e ebuli�ao e s�o solidos a\n\ttemperatura ambiente", 
		"4- N�o s�o condutores de corrente el�trica quando est�o em estado\n\tl�quido" };
	int i,
	xpos = 5,
	ypos [ MaxNoMenu ] = { 13, 15, 18, 21 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 2 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
				if ( i == 3 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
			quiz5();
		}
	}
}

quiz5(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(9,7);printf("==============================================================");	
	gotoxy(9,8);printf("|5- Porque os �tomo perdem, ganham ou compartilham el�trons?|");
	gotoxy(9,9);printf("==============================================================");
		char *menu_list [ MaxNo ] = { "1- Pois e de sua natureza", "2- Para se estabilizar", "3- Por causa de rea��es qu�micas", 
		"4- Para alterarem seu estado f�sico em temperatura ambiente" };
	int i,
	xpos = 13,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
				if ( i == 2 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 3 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
			quiz6();
		}
	}
}

quiz6(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(18,7);printf("=================================================");	
	gotoxy(18,8);printf("|6-Qual e o grupo de �tomo que j� s�o estaveis?|");
	gotoxy(18,9);printf("=================================================");
		char *menu_list [ MaxNo ] = { "1- Metais alcalinos", "2- Metais alcalinos terrosos", "3- Halogenios", "4- Gases nobres" };
	int i,
	xpos = 20,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 2 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 3 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++; 
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
			quiz7();
		}
	}
}

quiz7(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(23,7);printf("=====================================");	
	gotoxy(23,8);printf("|7-A liga�ao covalente ocorre entre:|");
	gotoxy(23,9);printf("=====================================");
		char *menu_list [ MaxNo ] = { "1- Metal e Ametal, Ametal e Semimetal", "2- Metal e Semimetal, Metal e Ametal", 
		"3-Ametal e Ametal, Ametal e Semimetal", "4- Metal e Metal, Semimetal e Semimetal" };
	int i,
	xpos = 23,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 2 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
				if ( i == 3 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
			quiz8();
		}
	}
}

quiz8(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(20,7);printf("==========================================");	
	gotoxy(20,8);printf("|8-O �tomo que ganha el�trons e outro que|");
	gotoxy(20,9);printf("| perde s�o chamados respectivamente de: |");
	gotoxy(20,10);printf("==========================================");
		char *menu_list [ MaxNo ] = { "1- Pr�ton e �on", "2- �nion e C�tion", "3- �on e C�tion", "4- C�tion e �nion" };
	int i,
	xpos = 33,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
				if ( i == 2 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 3 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
			quiz9();
		}
	}
}

quiz9(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(15,7);printf("====================================================");	
	gotoxy(15,8);printf("| 9-Um elemento qu�mico de configura��o eletronica |");
	gotoxy(15,9);printf("| 1s2 2s2 2p6 3s2 3p5 possui forte tendencia para: |");
	gotoxy(15,10);printf("====================================================");
		char *menu_list [ MaxNo ] = { "1- Perder 5 el�trons", "2- Perder 2 el�trons", "3- Ganhar 2 el�trons", "4- Ganhar 1 el�tron" };
	int i,
	xpos = 31,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 2 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 3 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
			quiz10();
		}
	}
}

quiz10(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(7,7);printf("===================================================================");	
	gotoxy(7,8);printf("|10- A propriedade que pode ser atribuida a maioria dos compostos |");
	gotoxy(7,9);printf("| i�nicos (isto e, aos compostos caracterizados predominantemente |");
	gotoxy(7,10);printf("|          por liga�oes i�nicas entre as particulas) e:           |");
	gotoxy(7,11);printf("===================================================================");
		char *menu_list [ MaxNo ] = { "1- Dissolvidos em agua, formam solu��es �cidas", "2- Dissolvem-se bem em gasolina, diminuindo sua octanagem", 
		"3- Fundidos (na fase l�quida), conduzem corrente el�trica", "4- Possuem baixos pontos de fus�o e de ebuli��o" };
	int i,
	xpos = 12,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 2 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
				if ( i == 3 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
			quiz11();
		}
	}
}

quiz11(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(14,7);printf("=======================================================");	
	gotoxy(14,8);printf("|11-A f�rmula N = N indica que os �tomo de nitrogenio|");
	gotoxy(14,9);printf("|              est�o compartilhando tr�s:             |");
	gotoxy(14,10);printf("=======================================================");
		char *menu_list [ MaxNo ] = { "1- El�trons", "2- Pares de pr�tons", "3- Pares de n�utrons", "4- Pares de el�trons" };
	int i,
	xpos = 30,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 2 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 3 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
			quiz12();
		}
	}
}

quiz12(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(18,7);printf("===============================================");	
	gotoxy(18,8);printf("|12-A liga��o entre �tomo iguais para formar |");
	gotoxy(18,9);printf("|    mol�culas diat�micas e sempre do tipo:   |");
	gotoxy(18,10);printf("===============================================");
		char *menu_list [ MaxNo ] = { "1- I�nico", "2- Covalente", "3- de Van der Waals", "4- Metalico" };
	int i,
	xpos = 30,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
				if ( i == 2 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 3 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
			quiz13();
		}
	}
}

quiz13(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(17,6);printf("=================================================");	
	gotoxy(17,7);printf("|13- Para a forma��o da liga��o, duas condi��es |");
	gotoxy(17,8);printf("| s�o necessarias: um par de el�trons com spins |");
	gotoxy(17,9);printf("|  opostos e um orbital estavel em cada �tomo.  |");
	gotoxy(17,10);printf("|     A for�a de liga��o e qualitativamente     |");
	gotoxy(17,11);printf("|   proporcional a interpenetra�ao das nuvens   |");
	gotoxy(17,12);printf("|            de carga dos dois �tomo.          |");
	gotoxy(17,13);printf("=================================================");
		char *menu_list [ MaxNo ] = { "1- I�nica", "2- Metalica", "3- Covalente", "4- por for�as de Van der Waals" };
	int i,
	xpos = 30,
	ypos [ MaxNoMenu ] = { 15, 17, 19, 21 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 2 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
				if ( i == 3 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
			quiz14();
		}
	}
}

quiz14(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(11,7);printf("=============================================================");	
	gotoxy(11,8);printf("|14- As subst�ncias Cl2, Na2S, HCl e MgO tem suas estruturas|");
	gotoxy(11,9);printf("|        constituidas, respectivamente por liga��es:        |");
	gotoxy(11,10);printf("=============================================================");
		char *menu_list [ MaxNo ] = { "1- Covalente, i�nica, i�nica e covalente", "2- Covalente, i�nica, covalente e i�nica", 
		"3- Covalente, covalente, i�nica e i�nica", "4- I�nica, covalente, i�nica e covalente" };
	int i,
	xpos = 22,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
				if ( i == 2 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 3 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
			quiz15();
		}
	}
}

quiz15(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);textcolor(2);
	gotoxy(7,7);printf("===================================================================");	
	gotoxy(7,8);printf("|15-Determinada subst�ncia apresenta as seguintes caracteristicas:|");
	gotoxy(7,9);printf("|           - conduz eletricidade - � formada por �tomos          |");
	gotoxy(7,10);printf("|       de um so elemento qu�mico. Essa subst�ncia pode ser:      |");
	gotoxy(7,11);printf("===================================================================");
		char *menu_list [ MaxNo ] = { "1- A�o", "2- Bronze", "3- Am�nia", "4- Ferro" };
	int i,
	xpos = 33,
	ypos [ MaxNoMenu ] = { 13, 15, 17, 19 };
	for ( i = 0; i < MaxNo; ++i ){
		gotoxy (xpos, ypos [i] );
		textattr(12);
		textattr(BLACK);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
	}
	i = 0;
	while (1) {
		gotoxy( xpos, ypos [i] );
		textattr(2);
		textbackground(WHITE);
		printf("%s",menu_list [i] );
		switch ( _getch () ){
			case 72: if ( i > 0 ) {
				gotoxy( xpos, ypos [i] );
				textattr(2);
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i--;
				Beep(1750,100);
			}
			break;
			case 80: if ( i <  MaxNo -1 ){
				gotoxy( xpos, ypos [i] );
				textattr(BLACK);
				textbackground(WHITE);
				printf("%s", menu_list [i] );
				i++;
				Beep(1750,100);
			}
			break;
			case 13:
				if ( i == 0 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 1 ) {  system("cls"); Beep(1650,100); gotoxy(34,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 2 ) {  system("cls"); Beep(1650,100); gotoxy(35,12);printf("Resposta Errada!"); erro++; QUM[b] = 0; b++; textcolor(WHITE);system("pause");}
				if ( i == 3 ) {  system("cls"); Beep(620,100);  gotoxy(34,12);printf("Resposta Certa!"); acert++; QUM[b] = 1; b++;
				Beep(783.991,90); Beep(739.989,90); Beep(622.254,90); Beep(440.000,90);
				Beep(415.305,90); Beep(659.255,90); Beep(830.609,90); Beep(1046.50,90); textcolor(WHITE);system("pause"); }
				resultado();
		}
	}
}

resultado(){
	system("cls");
	Janela3();
	gotoxy(26,2);textbackground(3);printf("  ");
	gotoxy(30,2);textbackground(WHITE);textcolor(2);printf("Acertos: %d || Erros: %d", acert, erro);
	gotoxy(56,2);textbackground(3);printf("  ");
	gotoxy(26,3);textbackground(3);printf("                                ");
	textbackground(WHITE);
	p = 8;
	int d = 0, te= 13;
	for(b = 0; b <= 6; b++){
		if(QUM[b] == 0){
			if(d <= 7){
				gotoxy(20,p);printf("%d- Errado", b + 1);
				p++;
				d++;
			}
			else{
				gotoxy(48,p);printf("%d- Errado", b + 1);
				p++;
				d++;
			}
		}
		else{
			if(d <= 7){
				gotoxy(20,p);printf("%d- Certa", b + 1);
				p++;
				d++;
			}
			else{
				gotoxy(48,p);printf("%d- Certa", b + 1);
				p++;
				d++;
			}
		}
	}
	for(b = 7; b <= 14; b++){
		if(QUM[b] == 0){
			if(d <= 6){
				gotoxy(20,te-5);printf("%d- Errado", b + 1);
				te++;
				d++;
			}
			else{
				gotoxy(48,te-5);printf("%d- Errado", b + 1);
				te++;
				d++;
			}
		}
		else{
			if(d <= 6){
				gotoxy(20,te-5);printf("%d- Certa", b + 1);
				te++;
				d++;
			}
			else{
				gotoxy(48,te-5);printf("%d- Certa", b + 1);
				te++;
				d++;
			}
		}
	}
	textcolor(WHITE);gotoxy(1,23);system("pause");
	system("cls");
	MenuPrimcipal();
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------*/

