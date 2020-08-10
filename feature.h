struct menu // Struct Variable declarations
{
    char type[10];
    char item[15];
    float mprice;
    float nmprice;
    char des[50];

};
struct menu itm[20];
void init() // function for init
{

    // food item
    strcpy(itm[0].type,"Food  ");
    strcpy(itm[0].item,"Sandwhich      ");
    itm[0].mprice=10.00;
    itm[0].nmprice=10.50;

    strcpy(itm[1].type,"Food  ");
    strcpy(itm[1].item,"Burger         ");
    itm[1].mprice=15.00;
    itm[1].nmprice=15.50;

    strcpy(itm[2].type,"Food  ");
    strcpy(itm[2].item,"Pizza          ");
    itm[2].mprice=18.00;
    itm[2].nmprice=20.00;

    strcpy(itm[3].type,"Food  ");
    strcpy(itm[3].item,"Tacos          ");
    itm[3].mprice=20.00;
    itm[3].nmprice=22.00;


    // drinks item
    strcpy(itm[4].type,"Drinks");
    strcpy(itm[4].item,"Soft Drink     ");
    itm[4].mprice=1.00;
    itm[4].nmprice=1.50;

    strcpy(itm[5].type,"Drinks");
    strcpy(itm[5].item,"Tea/Coffee     ");
    itm[5].mprice=1.80;
    itm[5].nmprice=2.00;

    strcpy(itm[6].type,"Drinks");
    strcpy(itm[6].item,"Smoothie       ");
    itm[6].mprice=6.50;
    itm[6].nmprice=7.00;

    strcpy(itm[7].type,"Drinks");
    strcpy(itm[7].item,"Ice Blended    ");
    itm[7].mprice=10.00;
    itm[7].nmprice=11.00;


    // ccombo item
    strcpy(itm[8].type,"Combo ");
    strcpy(itm[8].item,"Combo A        ");
    strcpy(itm[8].des,"(1 Food + 1 Soft Drink)");
    itm[8].mprice=15.50;
    itm[8].nmprice=16.00;

    strcpy(itm[9].type,"Combo ");
    strcpy(itm[9].item,"Combo B        ");
    strcpy(itm[9].des,"(1 Food + 1 drink(any))");
    itm[9].mprice=21.00;
    itm[9].nmprice=22.00;

    strcpy(itm[10].type,"Combo ");
    strcpy(itm[10].item,"Combo C        ");
    strcpy(itm[10].des,"(2 Food + 2 Soft Drink)");
    itm[10].mprice=30.00;
    itm[10].nmprice=31.00;

}

void tab(int n) //function for tab
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\t");
    }
    return;
}

void newLine(int n) //function for newLine
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n");
    }
    return;
}

void space(int n) //function for space
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" ");
    }
    return;
}

void starPrint(int n) //function for starPrint
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("*");
    }
    return;
}

void usPrint(int n) //function for Underscore Print
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("-");
    }
    return;
}

void logoView() //function for logoView
{
    printf("\n\n");
    tab(6);
    starPrint(19);
    printf("\n");
    tab(6);
    printf("*  MakanOnWheels  *\n");
    tab(6);
    starPrint(19);
    printf("\n");

    return;
}

void headingView() //function for headingView
{
    tab(3);
    printf("Item");
    tab(3);
    printf("Member Price");
    tab(3);
    printf("Non Member Price\n");
    tab(3);
    usPrint(72);
    printf("\n");

    return;
}

void headingView2() //function for headingView2
{
    tab(2);
    printf("Item");
    tab(5);
    printf("Member Price");
    tab(3);
    printf("Non Member Price\n");
    tab(2);
    usPrint(88);
    printf("\n");

    return;
}

void foodView() //function for foodView
{
    int i;

    printf("\n");
    tab(3);
    starPrint(72);
    printf("\n");
    tab(7);
    printf("Food\n");
    tab(3);
    starPrint(72);
    printf("\n");

    headingView();

    for(i=0;i<4;i++)
    {
        //tab(3);
        printf("%24d. %s",i+1,itm[i].item);
        //space(20);
        printf("%12.4g RM",itm[i].mprice);
        //ab(3);
        printf("%32.4g RM\n\n",itm[i].nmprice);
    }
    return;
}

void drinksView() //function for drinksView
{
    int i;

    printf("\n");
    tab(3);
    starPrint(72);
    printf("\n");
    tab(7);
    printf("Drinks\n");
    tab(3);
    starPrint(72);
    printf("\n");

    headingView();

    for(i=4;i<8;i++)
    {
        //tab(3);
        printf("%24d. %s",i+1,itm[i].item);
        //space(20);
        printf("%12.4g RM",itm[i].mprice);
        //ab(3);
        printf("%32.4g RM\n\n",itm[i].nmprice);
    }
}

void comboView() //function for comboView
{
    int i;

    printf("\n");
    tab(2);
    starPrint(88);
    printf("\n");
    tab(7);
    printf("Combo\n");
    tab(2);
    starPrint(88);
    printf("\n");

    headingView2();

    for(i=8;i<11;i++)
    {
        //tab(3);
        printf("%17d. %s%s",i+1,itm[i].item,itm[i].des);
        //space(20);
        printf("%16.4g RM",itm[i].mprice);
        //tab(3);
        printf("%32.4g RM\n\n",itm[i].nmprice);
    }
}

void featureView() //function for featureView
{
    logoView();

    tab(6);
    printf("[M] Menu\n");

    tab(6);
    printf("[O] Order\n");

    tab(6);
    printf("[R] Receipt\n");

    tab(6);
    printf("[E] Exit\n");

    tab(6);
    printf("->");

    return;

}

void showMenu() //function for showMenu
{
    foodView();
    drinksView();
    comboView();

    return;
}

void orderMenu() //function for orderMenu
{
    logoView();
    tab(6);
    printf("[F] Food\n");

    tab(6);
    printf("[D] Drinks\n");

    tab(6);
    printf("[C] Combo\n");

    tab(6);
    printf("[E] Exit\n");

    tab(6);
    printf("->");

    return;
}

char memberView()
{
    char ch;
    logoView();
    tab(6);
    printf("[M] Member\n");

    tab(6);
    printf("[N] Non-member\n");

    tab(6);
    printf("[E] Exit\n");

    tab(6);
    printf("->");
    scanf(" %c",&ch);

    return ch;
}

float itemGet(int i) //for item Get member
{
    printf("%s  - ",itm[i].type);
    printf("%s",itm[i].item);
    return itm[i].mprice;
}

float itemGetNon(int i) //for item Get Non Member
{
    printf("%s - ",itm[i].type);
    printf("%s",itm[i].item);
    return itm[i].nmprice;
}

void reciptView(char ch) //function for reciptView
{
    tab(6);
    space(3);
    if(ch=='M' || ch=='m')
        printf("Type: Member");
    else
        printf("Type: Non-Member");

    printf("\n");
    tab(3);
    usPrint(90);
    printf("\n");
    tab(3);
    printf("Service");
    tab(5);
    printf("Quantity");
    tab(4);
    printf("Price");
    printf("\n");
    tab(3);
    usPrint(90);
    printf("\n");
    return;
}



