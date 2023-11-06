#include <stdio.h>
#define T_Fgreen"\x1B[32m"
#define T_Bwhite"\x1B[47m"

void main() {

	//RESTART
	int restartChoice;
	//Menu
	int NActivity;
	//AACTIVITY ONE
	int Age;
	char Number[30], Name[30], Address[30];
	//ACTIVITY TWO
	int Number1,Number2,caseOperator,RequestA;
	//Activity tree
	int DAYB;
	//activity four
	int MontA;
	//ACTIVITY FIVE
	//ACTIVITY SIX
	int AnoD;
	//ACTIVITY SEVEN
	int CaseMonth;
	//ACTIVITY EIGHT
	int CaseMonthB;
	//ACTIVITY NINE
	int NumberA,i;
	//ACTIVITY TEEN
	char letra;
    int esVocal = 0; // Inicialmente suponemos que la letra es una consonante
	//ACTIVITY ELEVEN
	int Hola;
	int iB;
	int NumberD;
	//ACTIVITY TWELF
	int NumberC,StopA,iC,resultado,caseA;
	//ACTIVITY TERTEEN
	int NumberE,StopB,iE;
	//ACTIVITY FORTHY
	int MultipleA,OptionA, iD;
	//Actibity fifty
	int iF,NumberF,StopF = 100;
	//seven teen
			float suma = 0;
			float calif[30];
			float prom = 0;
			int mat,x;


	do{

	clrscr();





	//first page of the program


	gotoxy(1,1);printf(T_Fgreen "--------");
	gotoxy(1,2);printf("|");
	gotoxy(1,3);printf("|");
	gotoxy(1,4);printf("|");

	gotoxy(1,22);printf("|");
	gotoxy(1,23);printf("|");
	gotoxy(1,24);printf("|");
	gotoxy(1,25);printf("--------");


	gotoxy(70,1);printf("--------");
		gotoxy(78,2);printf("|");
		gotoxy(78,3);printf("|");
		gotoxy(78,4);printf("|");

		gotoxy(78,22);printf("|");
		gotoxy(78,23);printf("|");
		gotoxy(78,24);printf("|");
	gotoxy(70,25);printf("--------");





	gotoxy(3,2);printf("----------------------------------------------");
	gotoxy(3,3);printf("| Alejandro Rodriguez Lopez                   |");
	gotoxy(3,4);printf("|                                             |");
	gotoxy(3,5);printf("|   1-PEDIR DATOS          15-BREAK WHILE     |");
	gotoxy(3,6);printf("|   2-OPERACIONES          16-CONTINUE WHILE  |");
	gotoxy(3,7);printf("|   3-DIAS IF              17-PROMEDIO WHILE  |");
	gotoxy(3,8);printf("|   4-MESES IF                                |");
	gotoxy(3,9);printf("|   5-NUMERO IMPAR                            |");
	gotoxy(3,10);printf("|   6-ANO BICIESTO                            |            ACTIVIDAD");
	gotoxy(3,11);printf("|   7-DIAS SWITCH                             |            [       ]");
	gotoxy(3,12);printf("|   8-MESES SWITCH                            |");
	gotoxy(3,13);printf("|   9-CALCULADORA                             |");
	gotoxy(3,14);printf("|  10-VOCALES FOR                             |");
	gotoxy(3,15);printf("|  11-TABLAS FOR                              |");
	gotoxy(3,16);printf("|  12-BREAK FOR                               |");
	gotoxy(3,17);printf("|  13-CONTINUE FOR                            |");
	gotoxy(3,18);printf("|  14-TABLAS WHILE                            |");
	gotoxy(3,19);printf("|                                             |");
	gotoxy(3,20);printf("|                                             |");
	gotoxy(3,21);printf("|                                             |");
	gotoxy(3,22);printf("| PON EL NUMERO DE ACTIVIDAD                  |");
	gotoxy(3,23);printf("---------------------------------------------");
	gotoxy(66,11);scanf("%i",&NActivity);

	switch(NActivity){

	case 1  :
		clrscr();

			gotoxy(1,1);printf("--------");
			gotoxy(1,2);printf("|");
			gotoxy(1,3);printf("|");
			gotoxy(1,4);printf("|");

			gotoxy(1,22);printf("|");
			gotoxy(1,23);printf("|");
			gotoxy(1,24);printf("|");
			gotoxy(1,25);printf("--------");


			gotoxy(70,1);printf("--------");
				gotoxy(78,2);printf("|");
				gotoxy(78,3);printf("|");
				gotoxy(78,4);printf("|");

				gotoxy(78,22);printf("|");
				gotoxy(78,23);printf("|");
				gotoxy(78,24);printf("|");
			gotoxy(70,25);printf("--------");

				gotoxy(35,3);
				printf("ACTIVIDAD 1\n");
				gotoxy(35,4);
				printf("PEDIR DATOS \n");

		 gotoxy(15,5); printf("-----------------------------------------------");
		 gotoxy(15,6); printf("|What is your  first name  [                 ] |");
		 gotoxy(15,7); printf("|What is your age          [                 ] |");
		 gotoxy(15,8); printf("|What is your phone number [                 ] |");
		 gotoxy(15,9); printf("|What is your address      [                 ] |");
		 gotoxy(15,10); printf(" ---------------------------------------------- ");
		 gotoxy(45,6);scanf("%s",Name);
		 gotoxy(45,7);scanf("%i",&Age);
		 gotoxy(45,8);scanf("%s",Number);
		 gotoxy(45,9);scanf("%s",Address);
		 gotoxy(15,14); printf("-----------------------------------------------");
		 gotoxy(15,15); printf("|Your First name is        [                 ] |");
		 gotoxy(15,16); printf("|Your age is               [                 ] |");
		 gotoxy(15,17); printf("|Your phone number is      [                 ] |");
		 gotoxy(15,18); printf("|Your address is           [                 ] |");
		 gotoxy(15,19);printf(" ---------------------------------------------- ");
		 gotoxy(45,15);printf("%s",Name);
		 gotoxy(45,16);printf("%i",Age);
		 gotoxy(45,17);printf("%s",Number);
		 gotoxy(45,18);printf("%s",Address);

		 //mostrar

		 getch();
	break;

	case 2  :

		clrscr();

		
			gotoxy(1,1);printf("--------");
			gotoxy(1,2);printf("|");
			gotoxy(1,3);printf("|");
			gotoxy(1,4);printf("|");

			gotoxy(1,22);printf("|");
			gotoxy(1,23);printf("|");
			gotoxy(1,24);printf("|");
			gotoxy(1,25);printf("--------");


			gotoxy(70,1);printf("--------");
				gotoxy(78,2);printf("|");
				gotoxy(78,3);printf("|");
				gotoxy(78,4);printf("|");

				gotoxy(78,22);printf("|");
				gotoxy(78,23);printf("|");
				gotoxy(78,24);printf("|");
			gotoxy(70,25);printf("--------");

				gotoxy(35,3);
				printf("ACTIVIDAD 2\n");
				gotoxy(35,4);
				printf("OPERACIONES \n");

			gotoxy(5,5);printf("--------------------------------");
			gotoxy(5,6);printf("|       OPERATORS NUMBERS      |");
			gotoxy(5,7);printf("|         1 - + SUMA           |");
			gotoxy(5,8);printf("|         2 - * MULTIPLICATION |");
			gotoxy(5,9);printf("|         3 - - REST           |");
			gotoxy(5,10);printf("|         4 - / DIVITION       |");//mal
			gotoxy(5,11);printf("--------------------------------");


		//comando de printeo
		gotoxy(50,7);printf("NUMBER                  [   ]");
		gotoxy(50,8);printf("NUMBER                  [   ]");
		gotoxy(50,9);printf("OPERATOR                [   ]");
		gotoxy(20,16);printf(" ---------------------------------------");
		gotoxy(20,17);printf("|                                       |");
		gotoxy(20,18);printf(" ---------------------------------------");
		gotoxy(75,7);scanf("%i",&Number1);
		gotoxy(75,8);scanf("%i",&Number2);
		gotoxy(75,9);scanf("%i",&caseOperator);





		gotoxy(26,17);switch(caseOperator){
				case 1:
						printf(" ANSER : %i + %i = %i",Number1,Number2, Number1 + Number2);
				break;
				case 2:
						printf(" ANSER : %i * %i = %i",Number1,Number2, Number1 * Number2);
				break;
				case 3:
						printf(" ANSER : %i - %i = %i",Number1,Number2, Number1 - Number2);
				break;
				case 4:
						RequestA = Number1 / Number2;
						printf(" ANSER : %i / %i = %i",Number1,Number2, RequestA);
				break;
				default :
				printf("operator no valid Sorry");
				break;

			}





		getch();



	break;
	case 3  :
		clrscr();

		
		gotoxy(1,1);printf("--------");
		gotoxy(1,2);printf("|");
		gotoxy(1,3);printf("|");
		gotoxy(1,4);printf("|");

		gotoxy(1,22);printf("|");
		gotoxy(1,23);printf("|");
		gotoxy(1,24);printf("|");
		gotoxy(1,25);printf("--------");


		gotoxy(70,1);printf("--------");
			gotoxy(78,2);printf("|");
			gotoxy(78,3);printf("|");
			gotoxy(78,4);printf("|");

			gotoxy(78,22);printf("|");
			gotoxy(78,23);printf("|");
			gotoxy(78,24);printf("|");
		gotoxy(70,25);printf("--------");


		gotoxy(35,3);
		printf("ACTIVIDAD 3\n");
		gotoxy(35,4);
		printf("DIAS IF \n");
		//DIA DE LA SEMANA
	//este variable es para descubrir que dia de la semana es

	


		gotoxy(35,3);
		printf("ACTIVIDAD 3\n");
		gotoxy(35,4);
		printf("DIAS IF \n");

		gotoxy(17,8 );printf("-----------------------------------------------");
		gotoxy(17,9 );printf("|   SEMANA DESDE 1 AL 12                        |");
		gotoxy(17,10);printf("|              ________________________________|");
		gotoxy(17,11);printf("|             |                                |");
		gotoxy(17,12);printf("|             |                                |");
		gotoxy(17,13);printf("|             |                                |");
		gotoxy(17,14);printf("|     ____    |         _________________      |");
		gotoxy(17,15);printf("|             |                                |");
		gotoxy(17,16);printf("|             |                                |");
		gotoxy(17,17);printf("|             |                                |");
		gotoxy(17,18);printf("|             |                                |");
		gotoxy(17,19);printf("-----------------------------------------------");
		gotoxy(24,14);scanf("%i",&DAYB);

	
	//aqui estan las funciones para imprimir la variables del dia para
	//saber que dia de la semana es
	gotoxy(46,14);
	if(DAYB == 1)
	{
	printf("LUNES");
	}
	if(DAYB == 2){
	printf("MARTES");
	}
	if(DAYB == 3){
	printf("MIERCOLES");
	}
	if(DAYB == 4){
	printf("JUEVES");
	}
	if(DAYB == 5){
	printf("VIERNES");
	}
	if(DAYB == 6){
	printf("SABADO");
	}
	if(DAYB == 7){
	printf("DOMINGO");

	}
	getch();

	break;

	case 4  :
		clrscr();
		
		gotoxy(1,1);printf("--------");
		gotoxy(1,2);printf("|");
		gotoxy(1,3);printf("|");
		gotoxy(1,4);printf("|");

		gotoxy(1,22);printf("|");
		gotoxy(1,23);printf("|");
		gotoxy(1,24);printf("|");
		gotoxy(1,25);printf("--------");


		gotoxy(70,1);printf("--------");
			gotoxy(78,2);printf("|");
			gotoxy(78,3);printf("|");
			gotoxy(78,4);printf("|");

			gotoxy(78,22);printf("|");
			gotoxy(78,23);printf("|");
			gotoxy(78,24);printf("|");
		gotoxy(70,25);printf("--------");

		gotoxy(35,3);
		printf("ACTIVIDAD 4\n");
		gotoxy(35,4);
		printf("MES IF \n");

		gotoxy(17,8 );printf("-----------------------------------------------");
		gotoxy(17,9 );printf("|   MES DESDE 1 AL 12                           |");
		gotoxy(17,10);printf("|              ________________________________|");
		gotoxy(17,11);printf("|             |                                |");
		gotoxy(17,12);printf("|             |                                |");
		gotoxy(17,13);printf("|             |                                |");
		gotoxy(17,14);printf("|     ____    |         _________________      |");
		gotoxy(17,15);printf("|             |                                |");
		gotoxy(17,16);printf("|             |                                |");
		gotoxy(17,17);printf("|             |                                |");
		gotoxy(17,18);printf("|             |                                |");
		gotoxy(17,19);printf("-----------------------------------------------");
		gotoxy(24,14);scanf("%i",&MontA);

	gotoxy(46,14);
	if(MontA==1){
	printf("enero");
	}

	if(MontA==2){
	 printf("febrero");
	}

	if(MontA==3){
	 printf("marzo");
	}

	if(MontA==4){
	 printf("abril");
	}

	if(MontA==5){
	 printf("mayo");
	}

	if(MontA==6){
	 printf("junio");
	}

	if(MontA==7){
	 printf("julio");
	}

	if(MontA==8){
	 printf("agosto");
	}

	if(MontA==9){
	 printf("septiembre");
	}

	if(MontA==10){
	 printf("octubre");
	}

	if(MontA==11){
	 printf("noviembre");
	}

	if(MontA==12){
	 printf("diciembre");
	}
		getch();
	break;
	case 5  :
		clrscr();

				gotoxy(35,3);
				printf("ACTIVIDAD 5\n");
				gotoxy(35,4);
				printf("NUMERO IMPAR \n");

		    printf("Introduce un numero: ");
			scanf("%d", &NumberF);

			if (NumberF % 2 == 0) {
				printf("Es un numero par.\n");
			} else {
				printf("Es un numero impar.\n");
			}


		getch();

	break;
	case 6  :
		clrscr();
				gotoxy(35,3);
		printf("ACTIVIDAD 6\n");
		gotoxy(35,4);
		printf("ANO BICIESTO \n");

		printf("escribe un ano");
		scanf("%i", &AnoD);

		if(AnoD % 4 == 0){
			printf("ano biciesto");
		 }
		else{
			printf("hola");
	}
		getch();

	break;
	case 7  :
	
		clrscr();
		
		gotoxy(1,1);printf("--------");
		gotoxy(1,2);printf("|");
		gotoxy(1,3);printf("|");
		gotoxy(1,4);printf("|");

		gotoxy(1,22);printf("|");
		gotoxy(1,23);printf("|");
		gotoxy(1,24);printf("|");
		gotoxy(1,25);printf("--------");


		gotoxy(70,1);printf("--------");
			gotoxy(78,2);printf("|");
			gotoxy(78,3);printf("|");
			gotoxy(78,4);printf("|");

			gotoxy(78,22);printf("|");
			gotoxy(78,23);printf("|");
			gotoxy(78,24);printf("|");
		gotoxy(70,25);printf("--------");

		
		gotoxy(35,3);
		printf("ACTIVIDAD 7\n");
		gotoxy(35,4);
		printf("DIAS SWITCH \n");

		gotoxy(17,8 );printf("-----------------------------------------------");
		gotoxy(17,9 );printf("|   SEMANA DESDE 1 AL 7                        |");
		gotoxy(17,10);printf("|              ________________________________|");
		gotoxy(17,11);printf("|             |                                |");
		gotoxy(17,12);printf("|             |                                |");
		gotoxy(17,13);printf("|             |                                |");
		gotoxy(17,14);printf("|     ____    |         _________________      |");
		gotoxy(17,15);printf("|             |                                |");
		gotoxy(17,16);printf("|             |                                |");
		gotoxy(17,17);printf("|             |                                |");
		gotoxy(17,18);printf("|             |                                |");
		gotoxy(17,19);printf("-----------------------------------------------");
		gotoxy(24,14);scanf("%i",&CaseMonth);

	gotoxy(46,14);

	switch(CaseMonth){
		case 1: printf("lunes");
		break;
		case 2: printf("martes");
		break;
		case 3: printf("miercoles");
		break;
		case 4: printf("jueves");
		break;
		case 5: printf("viernes");
		break;
		case 6: printf("sabado");
		break;
		case 7: printf("domingo");
		break;
		deafult: printf("error");
	}
		getch();

	break;
	case 8  :
		clrscr();
		
		gotoxy(1,1);printf("--------");
		gotoxy(1,2);printf("|");
		gotoxy(1,3);printf("|");
		gotoxy(1,4);printf("|");

		gotoxy(1,22);printf("|");
		gotoxy(1,23);printf("|");
		gotoxy(1,24);printf("|");
		gotoxy(1,25);printf("--------");


		gotoxy(70,1);printf("--------");
			gotoxy(78,2);printf("|");
			gotoxy(78,3);printf("|");
			gotoxy(78,4);printf("|");

			gotoxy(78,22);printf("|");
			gotoxy(78,23);printf("|");
			gotoxy(78,24);printf("|");
		gotoxy(70,25);printf("--------");

		gotoxy(35,3);
		printf("ACTIVIDAD 8\n");
		gotoxy(35,4);
		printf("MESES SWITCH \n");

		gotoxy(17,8 );printf("-----------------------------------------------");
		gotoxy(17,9 );printf("|   MES DEDE 1 AL 12                           |");
		gotoxy(17,10);printf("|              ________________________________|");
		gotoxy(17,11);printf("|             |                                |");
		gotoxy(17,12);printf("|             |                                |");
		gotoxy(17,13);printf("|             |                                |");
		gotoxy(17,14);printf("|     ____    |         _________________      |");
		gotoxy(17,15);printf("|             |                                |");
		gotoxy(17,16);printf("|             |                                |");
		gotoxy(17,17);printf("|             |                                |");
		gotoxy(17,18);printf("|             |                                |");
		gotoxy(17,19);printf("-----------------------------------------------");
		gotoxy(24,14);scanf("%i",&CaseMonthB);

	gotoxy(46,14);

switch(CaseMonthB){

	case 1  : printf("enero");
	break;
	case 2  : printf("febrero");
	break;
	case 3  : printf("marzo");
	break;
	case 4  : printf("abril");
	break;
	case 5  : printf("mayo");
	break;
	case 6  : printf("junio");
	break;
	case 7  : printf("julio");
	break;
	case 8  : printf("agosto");
	break;
	case 9  : printf("septiembre");
	break;
	case 10 : printf("octubre");
	break;
	case 11 : printf("noviembre");
	break;
	case 12 : printf("diciembre");
	break;
	default:  printf("error");

	}
		getch();

	break;
	case 9  :
		clrscr();

		gotoxy(35,3);
		printf("ACTIVIDAD 2\n");
		gotoxy(35,4);
		printf("OPERACION \n");



		gotoxy(15,8);
		printf("DAME UN NUMERO PARA QUE COMPLETES LA TABLA : [        ] \n");
		fflush(stdin);
		gotoxy(65,8);
		scanf("%d",&NumberA);


		for(i = 0; i <= 100; i++){



		printf("|%d * %d = %d|\n", NumberA , i , NumberA * i);

					 }
		getch();

	break;
	case 10 :

		clrscr();


			for (;;) {  // Bucle infinito
			printf("Introduce una letra del alfabeto: ");
			scanf(" %c", &letra);
			letra = tolower(letra);  // Convierte a minúscula

			if (letra >= 'a' && letra <= 'z') {
				break;  // Sal del bucle si es una letra válida
			} else {
				printf("No has introducido una letra del alfabeto. Intenta de nuevo.\n");
			}
			}

			if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
			printf("%c es una vocal.\n", letra);
			} else {
			printf("%c es una consonante.\n", letra);
			}

		getch();
	break;
	case 11 :

	clrscr();

	    printf("Introduce un numero: ");
    	scanf("%d", &NumberD);

		printf("Deseas la tabla ascendente (1) o descendente (0)? ");
		scanf("%d", &Hola);

		if (Hola == 1) {
			for (iB = 1; iB <= 100; iB++) {
			printf("%d x %d = %d\n", NumberD, iB, NumberD * iB);
		}
		} else if(Hola == 0) {
			for (iB = 100; iB >= 1; iB--) {
			printf("%d x %d = %d\n", NumberD, iB, NumberD * iB);
		}
		}
		else{
		printf("hola");
		}
		 getch();

	break;
	case 12 :
		clrscr();


			printf("Que numero quieres que se multiplique : \n");
			    scanf("%d", &NumberC);

			    printf("Quieres (1)hacendente o (2)decentende\n");
			    scanf("%d", &caseA);

			    printf("En que partes quieres que pare : \n");
			    scanf("%d", &StopA);



				switch(caseA){

				case 1 :
				for(iC = 1; iC <= StopA; iC++){

					printf("%d por %d = %d\n", NumberC, iC, NumberC * iC);
				}
				break;
				case 2 :

				for(iC = StopA; 1 <= iC; iC--){
					printf("%d por %d = %d\n",NumberC, iC, NumberC * iC);

				}
				break;

				default :
				printf("error");
				break;

				}






		getch();

	break;
	case 13 :
			clrscr();
			//continue for
			printf("Escoge el numero para Las multiplicaciones\n");
			scanf("%d",&NumberE);
			printf("Quieres (1)Hacendente O (2)decendente? ");
			scanf("%d",&OptionA);
			printf("Donde quicieras continuar\n");
			scanf("%d",&StopB);

			switch(OptionA){
			case  1 :
			for(iE = 1; iE <= 100; iE++){

				printf("|%d * %d = %d| \n",NumberE,iE, NumberE * iE );
				if(StopB =+iE);
				i++;
			}
			break;
			case  2 :
			for(iE = 100; iE >= 1; iE--){

				printf("|%d por %d = %d|\n", NumberE, iE, NumberE * iE);
				if(StopB =- iE);
				i--;
			}
			break;
			default :
			printf("Error");
			break;
			}

			getch();
	break;
	case 14 :
			//tablas while
		clrscr();
		printf("Escoge un numero para hacer el multiplo : ");
		scanf("%d",&MultipleA);

		printf("Escoge cual quieres utilizar");
		printf("1-acendente");
		printf("2-decendente");
		scanf("%d",&OptionA);

		    switch (OptionA) {
    case 1:
	iD = 1;
	while (iD <= 100) {

	    printf("%d por %d = %d\n", MultipleA, iD, MultipleA * iD);
	    iD++;
	}
	break;
    case 2:
	iD = 100;

	while (iD >= 1) {

	    printf("%d por %d = %d\n", MultipleA, iD, MultipleA * iD);
	    iD--;
	}
	break;
    default:
	printf("ERROR\n");
	break;
    }



		getch();




	break;
	case 15 :
				//hecho con break
				clrscr();

			    printf("Escoge el numero para las multiplicaciones: ");
			scanf("%d", &NumberF);
				printf("Quieres que sea (1)Acendente o (2)Decendente");
				scanf("%d",&OptionA);

			printf("Hasta donde quieres que pare: ");
				 scanf("%d", &StopF);


			switch(OptionA){
				case 1 :
				iF = 1;
			while (iF <= StopF) {

			printf("%d * %d = %d\n", NumberF, iF, NumberF * iF);
			iF++;
			}
			break;


			case 2 :

			iF = StopF;

			while(iF >= 1){

				printf("%d por %d = %d",NumberF, iF, NumberF * iF);
				iF--;
			}
			break;
			default : printf("ERROR");

			}
	getch();

	break;
	case 16 :
		clrscr();
		//continue while
			printf("Escoge el numero para Las multiplicaciones\n");
			scanf("%d",&NumberE);
			printf("Quieres (1)Hacendente O (2)decendente? ");
			scanf("%d",&OptionA);
			printf("Donde quicieras que continue\n");
			scanf("%d",&StopB);

			switch(OptionA){
			case  1 :
			iE = 1;
			while(iE <= 100){
				if(iE == StopB){
					iE++;
					continue;
				}
				printf("|%d * %d = %d| \n",NumberE,iE, NumberE * iE );
				iE++;
			}
			break;
			case  2 :
			iE = 100;
			while(iE >= 1){

				if(iE == StopB){
					iE--;
					continue;
				}
				printf("|%d por %d = %d|\n", NumberE, iE, NumberE * iE);
				iE--;
			}
			break;
			default :
			printf("Error");
			break;
			}

		getch();

	break;
	case 17 :
		//promedio while
    clrscr();

			printf("Cuantas calificaciones tines? ");
			scanf("%i",&mat);

			for(x = 0; x < mat; x++){
				printf("Dame la calificacion %i: ", x + 1);
				scanf("%f",&calif[x]);
				suma += calif[x];
			}
			if(mat > 0){
			prom = suma / mat;
			}

			printf("tu promedio : %.2f", prom);

			getch();


	break;
	default:
	clrscr();
	gotoxy(50,50);printf("INTENTA DE NUEVO");
	getch();
	}
	      // Ask the user if they want to restart
	clrscr();
	gotoxy(15,9);printf("_______________________________________ ");
	gotoxy(15,10);printf("| Do you want to restart the program? |");
	gotoxy(15,11);printf("|             1. Yes                  |            [    ]");
	gotoxy(15,12);printf("|             2. No                   |");
	gotoxy(15,13);printf("---------------------------------------");
	gotoxy(68,11);scanf("%d", &restartChoice);
	}   while (restartChoice == 1); // Keep running until the user chooses to exit

	return 0;
}


