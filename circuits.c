#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define BILLION 1000000001

int main()
{
	system("cls");		/*thou shalt clear thy screen*/
	system("color 4");	/*let there be red light!*/
	
	int menu1,exit;
	float current,resistance,voltage,power,vsupply,vfoward,rating;
	int count;
	time_t start_time, end_time;
	start_time = time(NULL);
	
	
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx Circuit Calculator xxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("xxxxxxxxxxxxxxxxxxxxxxxx0   0xxxxxxxxxxxxxxxxxxxxxxxx0   0xxxxxxxxxxxxxxxxxxxxxx\n");
	printf("xxxxxxxxxxxxxxxxxxxxxx0   0xxxxxxxxxxxxxxxxxxxxxxxxxxxx0   0xxxxxxxxxxxxxxxxxxxx\n");
	printf("xxxxxxxxxxxxxxxxxxxxx0    0xxxxxxxxxxxxxxxxxxxxxxxxxxxx0    0xxxxxxxxxxxxxxxxxxx\n");
	printf("xxxxxxxxxxxxxxxxxxxxx0    0xxxx     MCbrian 2013   xxxx0    0xxxxxxxxxxxxxxxxxxx\n");
	printf("xxxxxxxxxxxxxxxxxxxxxx0    0xxxxxxxxxxxxxxxxxxxxxxxxxx0   0xxxxxxxxxxxxxxxxxxxxx\n");
	printf("xxxxxxxxxxxxxxxxxxxxxxxx0   0xxxxxxxxxxxxxxxxxxxxxxx0   0xxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxx0   0xxxxxxxxxxxxxxxxxxx0   0xxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("xxxxxxxxxxxxxxxxxx00xxxxxx0   0xxxxxxxxxxxxxxxxxxx0   0xxxxxx00xxxxxxxxxxxxxxxxx\n");
	printf("xxxxxxxxxxxxxxxxx0   0xx0   0xxxxxxxxxxxxxxxxxxxxxxx0   0xx0   0xxxxxxxxxxxxxxxx\n");
	printf("xxxxxxxxxxxxxxxxxx0000      0xxxxxxxxxxxxxxxxxxxxxxx0      0000xxxxxxxxxxxxxxxxx\n");
	printf("xxxxxxxxxxxxxxxxxxxxxxx0000xxxxxxxxxxxxxxxxxxxxxxxxxxxx0000xxxxxxxxxxxxxxxxxxxxx\n");
	for(count=0;count<BILLION;count++){}

	end_time = time(NULL);
	system("cls");
	
	for(;;)				
	{
		printf("****************** Welcome to the Electronics section, commander.***************\n");
		printf("Created by Brian Lukonsolo on 20/08/2013 at 23:26pm.\n");
		printf("Tip: To select an item, type the corresponding number/letter and press Enter.\n\n");
		
		printf("Ohm's Law equations\n");
		printf(" 1 - Calculate Voltage ----------------->[using current, resistance]\n");
		printf(" 2 - Calculate Current ----------------->[using voltage, resistance]\n");
		printf(" 3 - Calculate Resistance -------------->[using voltage, current]\n");
		printf(" 4 - Calculate Resistor rating needed -->[using Vsupply, Vfoward, current]\n");
		printf(" 5 - Calculate Power consumption ------->[using voltage, current]\n");
		printf(" 6 - Calculate Power ------------------->[using Vsupply, Vfoward, current]\n");
		printf(" 7 - Calculate Voltage ----------------->[using power, current]\n");
		printf(" 8 - Calculate Current ----------------->[using power, voltage]\n\n");
		
		printf("Joule's Law equations\n");
		printf(" 9 - Calculate Power ------------------->[using current, resistance]\n");
		printf(" q - Calculate current ----------------->[using power, current, resistance]\n");
		printf(" w - Calculate Resistance -------------->[using power, current]\n");
		printf(" e - Calculate Power ------------------->[using Vsupply, Vfoward, resistance]\n");
		printf(" r - Calculate Voltage ----------------->[using power, voltage, resistance]\n");
		printf(" t - Calculate Resistance -------------->[using voltage, power]\n\n");
	
		printf("0 - Exit \n");
	
		/*_________________Switch-case menu begins_______________*/
	
		menu1 = getchar();
	
			switch(menu1)
			{	
				/*Ohm's law*/
				case '1': system("cls"); printf("***Calculating the Voltage***\n");
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');
										
											voltage = (current*resistance); /*Equation*/
										 
										 printf("\n\n{Method[V=IxR]} Voltage is: %f Volts.\n",voltage);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
										 
				case '2': system("cls"); printf("***Calculating Current***\n");
										 printf("Enter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');
										 
											current = (voltage/resistance); /*Equation*/
											
										 printf("\n\n{Method[I=V/R]} Current is: %f Amps.\n",current);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
										 
				case '3': system("cls"); printf("***Calculating Resistance***\n");
										 printf("Enter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 
											resistance = (voltage/current); /*Equation*/
										
										printf("\n\n{Method[R=V/I]} Resistance is: %f Ohms.\n",resistance);
										printf("\nPress Enter to go back to menu.\n");
										getchar();
										break;
										 
				case '4': system("cls"); printf("***Calculating resistor rating required***\n");
										 printf("\nEnter known Power Supply voltage [Volts]:\n");
										 scanf("%f",&vsupply);
										 while(getchar()!='\n');
										 printf("Enter known Foward Voltage [Volts]:\n");
										 scanf("%f",&vfoward);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 
											rating = ((vsupply-vfoward)/current); /*Equation*/
											
										 printf("\n\n{Method[Rating=((Vs-Vf)/I)]} Resistor rating required: %f Ohms.\n",rating);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case '5': system("cls"); printf("***Calculating Power consumption***\n");
										 printf("\nEnter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');						 
										 
											power = (voltage*current); /*Equation*/
											
										 printf("\n\n{Method[P=(VxI)]} Power consumption is: %f Watts.\n",power);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case '6': system("cls"); printf("***Calculating a circuit's Power***\n");
										 printf("\nEnter known Power Supply voltage [Volts]:\n");
										 scanf("%f",&vsupply);
										 while(getchar()!='\n');
										 printf("Enter known Foward Voltage [Volts]:\n");
										 scanf("%f",&vfoward);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 
											power = ((vsupply-vfoward)*current); /*Equation*/
											
										 printf("\n\n{Method[P=((Vs-Vf)xI)]} Power of circuit is: %f Watts.\n",power);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case '7': system("cls"); printf("***Calculating Voltage***\n");
										 printf("\nEnter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');						 
										 
											voltage = (power/current); /*Equation*/
											
										 printf("\n\n{Method[V=(P/I)]} Voltage is: %f Volts.\n",voltage);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case '8': system("cls"); printf("***Calculating Current***\n");
										 printf("\nEnter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');
										 printf("Enter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');						 
										 
											current = (power/voltage); /*Equation*/
											
										 printf("\n\n{Method[I=(P/V)]} Current is: %f Amps.\n",current);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				/*joule's law*/
				case '9': system("cls"); printf("***Calculating Power***\n");
										 printf("\nEnter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');						 
										 
											power = ((current*current)*resistance); /*Equation*/
											
										 printf("\n\n{Method[P=((IxI)/R)]} Power is: %f Watts.\n",power);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case 'q': system("cls"); printf("***Calculating Current***\n");
										 printf("\nEnter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');
										 printf("Enter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 
											current = (power/(current*resistance)); /*Equation*/
											
										 printf("\n\n{Method[I=(P/(IxR)]} Current is: %f Amps.\n",current);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case 'w': system("cls"); printf("***Calculating Resistance***\n");
										 printf("\nEnter known Current [Amps]:\n");
										 scanf("%f",&current);
										 while(getchar()!='\n');
										 printf("Enter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');						 
										 
											resistance = (power/(current*current)); /*Equation*/
											
										 printf("\n\n{Method[R=(P/(IxI)]} Resistance is: %f Ohms.\n",resistance);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case 'e': system("cls"); printf("***Calculating Power***\n");
										 printf("\nEnter known Power Supply Voltage [Volts]:\n");
										 scanf("%f",&vsupply);
										 while(getchar()!='\n');
										 printf("Enter known Foward Voltage [Volts]:\n");
										 scanf("%f",&vfoward);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');						 
										 
											power = (((vsupply-vfoward)*(vsupply-vfoward))/resistance); /*Equation*/
											
										 printf("\n\n{Method[P=(((Vs-Vf)x(Vs-Vf))/R)]} Power is: %f Watts.\n",power);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case 'r': system("cls"); printf("***Calculating Voltage***\n");
										 printf("\nEnter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');
										 printf("Enter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');
										 printf("Enter known Resistance [Ohms]:\n");
										 scanf("%f",&resistance);
										 while(getchar()!='\n');						 
										 
											power = (power/(voltage*resistance)); /*Equation*/
											
										 printf("\n\n{Method[I=(P/(VxR)]} Power is: %f Watts.\n",power);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
				
				case 't': system("cls"); printf("***Calculating Resistance***\n");
										 printf("\nEnter known Voltage [Volts]:\n");
										 scanf("%f",&voltage);
										 while(getchar()!='\n');
										 printf("Enter known Power [Watts]:\n");
										 scanf("%f",&power);
										 while(getchar()!='\n');						 
										 
											resistance = ((voltage*voltage)/power); /*Equation*/
											
										 printf("\n\n{Method[R=((VxV)/P)]} Resistance is: %f Ohms.\n",resistance);
										 printf("\nPress Enter to go back to menu.\n");
										 getchar();
										 break;
			
				case '0': exit=getchar(); return 0;
			}
	}
	
	
}

								/*End of program*/


