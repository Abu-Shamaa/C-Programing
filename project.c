/*
Author Names - Md Abu Shama, Md Minhazul Arifin, S M abrar kabir chowdhry, Jahanara Islam Lubna.
Metric number - 59410, 55269, 54396, 60063.
Program - MakanOnWheels online food delivery service.
Language - C programing.
Date - 27/07/2020
*/
// header files
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <windows.h>
#include<string.h>
#include"feature.h"
#define tax 0.06
// Struct Variable declarations
typedef struct carts
{
    int itm;
    int qun;

}cart;
cart cartlist[20];

int addcart(char);

int adcart;
char type;


int main() //function main begins for program executions
{
    // Variable declarations
    int i;
    float price=0.0,total=0.0,gtotal=0.0; // Initializing variable
    adcart=0;
    char ch,ch2,ch3;
    init(); // function call
    //Infinite loop – I have used break to come out of the loop
    while(1)
    {
        featureView(); // function call
        scanf(" %c", &ch);
        switch(ch)
        {
            case 'M':
            case 'm':
                showMenu(); // function call
                break;

            case 'O':
            case 'o':
                adcart=0;
                gtotal=0.0;
                system("cls");
                type=memberView();
                while(addcart(type)){}
                break;

            case 'R':
            case 'r':
                logoView(); // function call
                reciptView(type);
                FILE *fp; //file declaration
                fp = fopen("receipt.txt", "w"); // opening a file in w mode
                // initialization, repetition condition, and increment are all included in the for statement header
                for(i=0;i<adcart;i++)
                {
                    if(type=='M' || type=='m')
                    {
                        tab(3);
                        printf("%d. ",i+1);
                        fprintf(fp, "%d. ",i+1);
                        fprintf(fp, "%s-",itm[cartlist[i].itm].type);
                        fprintf(fp, "%s\n",itm[cartlist[i].itm].item);
                        price=itemGet(cartlist[i].itm);
                        printf("%16d",cartlist[i].qun);
                        fprintf(fp, "Quantity- %d\n",cartlist[i].qun);
                        total=price*cartlist[i].qun;
                        fprintf(fp, "Price- %g\n\n",total);
                        printf("%38.4g\n",total);
                    }
                    else
                    {
                        tab(3);
                        printf("%d. ",i+1);
                        fprintf(fp, "%d. ",i+1);
                        fprintf(fp, "%s-",itm[cartlist[i].itm].type);
                        fprintf(fp, "%s\n",itm[cartlist[i].itm].item);
                        price=itemGetNon(cartlist[i].itm);
                        printf("%20d",cartlist[i].qun);
                        fprintf(fp, "Quantity- %d\n",cartlist[i].qun);
                        total=price*cartlist[i].qun;
                        fprintf(fp, "Price- %g\n\n",total);
                        printf("%38.4g\n",total);
                    }

                    gtotal+=total;

                } // end for
                printf("\n");
                tab(3);
                usPrint(90);
                printf("\n");
                tab(8);
                printf("Sales & Service Tax (6%%)\t: RM %g\n",gtotal*tax);
                fprintf(fp, "Sales & Service Tax (6%%)\t: RM %g\n",gtotal*tax);
                tab(3);
                usPrint(90);
                printf("\n");
                tab(8);
                printf("Total (Rounding)\t\t: RM %g\n",gtotal+(gtotal*tax));
                fprintf(fp, "Total (Rounding)\t\t: RM %g\n",gtotal+(gtotal*tax));
                tab(3);
                usPrint(90);
                printf("\n");
                fclose(fp); // closing file

                break;

            case 'E':
            case 'e':
                goto exit;
                break;

            default:
                break;


        }
    }

    exit:

    return 0;
} // end function main

int addcart(char ch) // function prototype
{
    int i;
    char ch2;
    if(ch=='M' || ch=='m')
        i=0;
    else
        i=1;
        system("cls"); //clears the screen
        orderMenu();
        scanf(" %c", &ch2);
        if(ch2=='f' || ch2=='F')
        {
            foodView(); // function call
            tab(6);
            printf("Add to Cart->"); // prompt for input
            scanf("%d",&cartlist[adcart].itm); // read item from user
            --cartlist[adcart].itm;
            tab(6);
            printf("Quantity->"); // prompt for input
            scanf("%d",&cartlist[adcart].qun); // read quantity from user
            adcart++;

        }
        else if(ch2=='d' || ch2=='D')
        {
            drinksView(); // function call
            tab(6);
            printf("Add to Cart->"); // prompt for input
            scanf("%d",&cartlist[adcart].itm); // read item from user
            --cartlist[adcart].itm;
            tab(6);
            printf("Quantity->"); // prompt for input
            scanf("%d",&cartlist[adcart].qun); // read quantity from user
            adcart++;
        }
        else if(ch2=='c' || ch2=='C')
        {
            comboView(); //function call
            tab(6);
            printf("Add to Cart->"); // prompt for input
            scanf("%d",&cartlist[adcart].itm); // read item from user
            --cartlist[adcart].itm;
            tab(6);
            printf("Quantity->"); // prompt for input
            scanf("%d",&cartlist[adcart].qun); // read quantity from user
            adcart++;
        }
        else
        {
            system("cls");
            return 0;
        }

        system("cls");

    return 1;
}
