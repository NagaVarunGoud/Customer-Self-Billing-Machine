// CODE WRITTEN FOR CUSTOMER SELF BILLING SYSTEM
// WRITTEN BY R.SAI SRUJAN , SK.THOUHID ALI , D.NAGA VARUN GOUD ON 6TH OF FEB 2023
#include<stdio.h>
#include<time.h>
int main()
{
	int a, order, order2, order3, order4, q = 0, q1 = 0, q2 = 0, q3 = 0, q4 = 0, f, g, h, i, j, k, l, m, n, o; // initializing the variables
	char name[100]; // initializing the character
	time_t t;

	time(&t); // initializing the date and time
	printf("ENTER YOUR NAME :"); // Enter the name of the customer
	fgets(name, sizeof(name), stdin);
	printf("\nMENU:\n 1.COFFEE - 30/-\n 2.TEA - 20/-\n 3.MILK SHAKE - 50/-\n 4.ICE CREAM - 100/-\n ");
	// printing the menu
	printf("\nselect your order :\n 1st order :"); // selecting the order
	scanf("%d", &order);
	printf("QUANTITY:"); // entering the quantity of the order
	scanf("%d", &q);
	printf("\n ENTER THE ITEM IF YOU NEED ANY COMBO OR CLICK 0 TO PROCCED + :"); // choosing the combo or single order
	scanf("%d", &order2); // scanning the input

	if (order2 == 0) // condition
	{
		q2 = 0; //initializing
		goto p; // jumping to print
	}

	printf("QUANTITY:"); // printing
	scanf("%d", &q2); //scanning the input
	printf("\n + :"); // selecting the combo order
	scanf("%d", &order3);

	if (order3 == 0)
	{
		q3 = 0; // intitializing
		goto p; // jumping to print
	}

	printf("QUANTITY:"); //printing
	scanf("%d", &q3); // scanning the input
	printf("\n + :");
	scanf("%d", &order4);

	if (order4 == 0)
	{
		q4 = 0; // intilializing
		goto p; // jumping to print
	}

	printf("QUANTITY:");
	scanf("%d", &q4);

	{
	p:
		switch (order) // switch case for 1 order
		{
			case 1:
				printf("\n\n\t\t---BILL---\n\tD-D-T-Y :%s\n\tNAME:%s \n\tORDER :COFFEE = Rs.30/- \n\tQUANTITY: %d - %d*30=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t= Rs.%d/- \n", ctime(&t), name, q, q, q * 30, q, q * 30, 5 * q + q * 30);
				//printing the bill for ordrer 1 (coffee)
				f = 5 * q + q * 30; // calculating the price of 1st order
				k = f; //assigning the value of f to k
				break;
			case 2:
				printf("\n\n\t\t---BILL---\n\tD-D-T-Y :%s\n\tNAME:%s \n\tORDER :TEA = Rs.20/- \n\tQUANTITY: %d -%d*20=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", ctime(&t), name, q, q, q * 20, q, q * 20, 5 * q + q * 20);
				//printing the bill for ordrer 1 (TEA)
				f = 5 * q + q * 20; ; // calculating the price of 1st order
				k = f; //assigning the value of f to k
				break;
			case 3:
				printf("\n\n\t\t---BILL---\n\tD-D-T-Y :%s\n\tNAME:%s \n\tORDER :MILK SHAKE = Rs.50/-\n\tQUANTITY: %d - %d*50=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", ctime(&t), name, q, q, q * 50, q, q * 50, 5 * q + q * 50);
				//printing the bill for ordrer 1 (milk shake)
				f = 5 * q + q * 50; // calculating the price of 1st order
				k = f; //assigning the value of f to k
				break;
			case 4:
				printf("\n\n\t\t---BILL---\n\tD-D-T-Y :%s\n\tNAME:%s \n\tORDER :ICE CREAM = Rs.100/-\n\tQUANTITY: %d - %d*100=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", ctime(&t), name, q, q, q * 100, q, q * 100, 5 * q + q * 100);
				//printing the bill for ordrer 1 (ice cream)
				f = 5 * q + q * 100; // calculating the price of 1st order
				k = f; //assigning the value of f to k
				break;
		}

		switch (order2)
		{
			case 1:
				printf("\n\t +COFFEE = Rs.30/- \n\tQUANTITY: %d - %d*30=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q2, q2, q2 * 30, q2, q2 * 30, 5 * q2 + q2 * 30);
				//printing the bill for ordrer 2 (coffee)
				g = 5 * q2 + q2 * 30; // calculating the price of 2nd order
				l = g; //assigning the value of f to l
				break;
			case 2:
				printf(" \n\t +TEA = Rs.20/- \n\tQUANTITY: %d - %d*20=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q2, q2, q2 * 20, q2, q2 * 20, 5 * q2 + q2 * 20);
				//printing the bill for ordrer 2 (tea)
				g = 5 * q2 + q2 * 20; // calculating the price of 2nd order
				l = g; //assigning the value of f to l
				break;
			case 3:
				printf("\n\t +MILK SHAKE = Rs.50/- \n\tQUANTITY: %d - %d*50=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q2, q2, q2 * 50, q2, q2 * 50, 5 * q2 + q2 * 50);
				//printing the bill for ordrer 2 (milk shake)
				g = 5 * q2 + q2 * 50; // calculating the price of 2nd order
				l = g; //assigning the value of f to l
				break;
			case 4:
				printf("\n\t +ICE CREAM = Rs.100/- \n\tQUANTITY: %d - %d*100=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q2, q2, q2 * 100, q2, q2 * 100, 5 * q2 + q2 * 100);
				//printing the bill for ordrer 2 (ice cream)
				g = 5 * q2 + q2 * 100; // calculating the price of 2nd order
				l = g; //assigning the value of f to l
				break;
		}

		switch (order3)
		{
			case 1:
				printf("\n\t +COFFEE = Rs.30/- \n\tQUANTITY: %d - %d*30=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q3, q3, q3 * 30, q3, q3 * 30, 5 * q3 + q3 * 30);
				//printing the bill for ordrer 3(coffee)
				h = 5 * q3 + q3 * 30; // calculating the price of 3rd order
				m = h; //assigning the value of f to m
				break;
			case 2:
				printf(" \n\t +TEA = Rs.20/- \n\tQUANTITY: %d - %d*20=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q3, q3, q3 * 20, q3, q3 * 20, 5 * q3 + q3 * 20);
				//printing the bill for ordrer 3(tea)
				h = 5 * q3 + q3 * 20; // calculating the price of 3rd order
				m = h; //assigning the value of f to m
				break;
			case 3:
				printf("\n\t +MILK SHAKE = Rs.50/- \n\tQUANTITY: %d - %d*50=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q3, q3, q3 * 50, q3, q3 * 50, 5 * q3 + q3 * 50);
				//printing the bill for ordrer 3(milk shake)
				h = 5 * q3 + q3 * 50; // calculating the price of 3rd order
				m = h; //assigning the value of f to m
				break;
			case 4:
				printf("\n\t +ICE CREAM = Rs.100/- \n\tQUANTITY: %d - %d*100=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q3, q3, q3 * 100, q3, q3 * 100, 5 * q3 + q3 * 100);
				//printing the bill for ordrer 3(ice cream)
				h = 5 * q3 + q3 * 100; // calculating the price of 3rd order
				m = h; //assigning the value of f to m
				break;
		}

		switch (order4)
		{
			case 1:
				printf("\n\t +COFFEE = Rs.30/- \n\tQUANTITY: %d - %d*30=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q4, q4, q4 * 30, q4, q4 * 30, 5 * q4 + q4 * 30);
				//printing the bill for ordrer 4(coffee)
				i = 5 * q4 + q4 * 30; // calculating the price of 4th order
				n = i; //assigning the value of f to n
				break;
			case 2:
				printf(" \n\t +TEA = Rs.20/- \n\tQUANTITY: %d - %d*20=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q4, q4, q4 * 20, q4, q4 * 20, 5 * q4 + q4 * 20);
				//printing the bill for ordrer 4(tea)
				i = 5 * q4 + q4 * 20; // calculating the price of 4th order
				n = i; //assigning the value of f to n
				break;
			case 3:
				printf("\n\t +MILK SHAKE = Rs.50/- \n\tQUANTITY: %d - %d*50=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q4, q4, q4 * 50, q4, q4 * 50, 5 * q4 + q4 * 50);
				//printing the bill for ordrer 4(milk shake)
				i = 5 * q4 + q4 * 50; // calculating the price of 4th order
				n = i; //assigning the value of f to n
				break;
			case 4:
				printf("\n\t +ICE CREAM = Rs.100/- \n\tQUANTITY: %d - %d*100=%d /- \n\ttax = Rs.=5/-\n\n \t5*%d+%d=\n\t\t=Rs.%d/- \n", q4, q4, q4 * 100, q4, q4 * 100, 5 * q4 + q4 * 100);
				//printing the bill for ordrer 4(ice cream)
				i = 5 * q4 + q4 * 100; // calculating the price of 4th order
				n = i; //assigning the value of f to n
				break;
		}

		if (q2 == 0) //if condition using for final billing
		{
			l = 0; //statement
		}
		if (q3 == 0) //if condition using for final billing
		{
			m = 0; //statement
		}
		if (q4 == 0) //if condition using for final billing
		{
			n = 0; //statement
		}
		o = k + l + m + n; //final addition of bill
		printf("\n\tTOTAL : Rs.%d/- only ", o); //printing the bill amount
		printf("\n-THANK YOU-\n visit again "); // printing the conclusion
	}
}
