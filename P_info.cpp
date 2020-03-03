#include<bits/stdc++.h>
#include<conio.h>
#define P printf
using namespace std;
FILE *f2;
struct renter
{
    int fl,mbr;
    char name[20],ads[100],job[30],ph[15];
    float sal;
};

char gtc;
void ext()
{
    system("cls");
    P("Thank You for using Apartment Manager\n\n\t\tCreated by\nEmon\nShishir\nand\nTowfique\n\n\n");
    P("Press any key to exit...");
    fclose(f2);
    exit(0);
}


void flr(int x);


int main()
{
    int n2;
    P("1.1st Floor\n2.Second Floor\n3.3rd Floor\n4.4th Floor\n5.5th Floor\n6.6th Floor\n7.Main menu\n0.Exit");
    P("\nEnter Floor's No: ");
    scanf("%d",&n2);
    flr(n2);
    fclose(f2);
    return 0;
}


void flr(int x)
{
    system("cls");
    f2=fopen("emon.txt","r");
    rewind(f2);
    renter s[27];
    int i,n3,p;
    char newline;
    for(i=0; i<27; i++)
    {
        fscanf(f2,"%d:%[^:]:%d:%[^:]:%[^:]:%[^:]:%f%c",&s[i].fl,s[i].name,&s[i].mbr,s[i].ads,s[i].job,s[i].ph,&s[i].sal,&newline);
    }
    switch(x)
    {
    case 0:
        ext();
    case 1:
        for(i=1; i<6; i++)
        {
            P("%d => %dA\n",i,i);
        }
        P("\nEnter Flat's No: ");
        scanf("%d",&n3);
        for(i=1; i<6; i++)
        {
            if(i==n3)
            {
                P("%d\n",s[i-1].fl);
                P("%s\n",s[i-1].name);
                P("%d\n",s[i-1].mbr);
                P("%s\n",s[i-1].ads);
                P("%s\n",s[i-1].job);
                P("%s\n",s[i-1].ph);
                P("%.2f\n\n",s[i-1].sal);
                break;
            }
        }
        P("Press 1 for Previous menu\nPress 2 for Main menu\nPress 0 for Exit\n");
        gtc=getch();
        if(gtc=='1')
        {
            flr(1);
        }
        else if(gtc=='2')
        {
            main();
        }
        else if(gtc=='0')
        {
            fclose(f2);
            ext();
        }
        break;
    case 2:
        for(i=1; i<3; i++)
        {
            P("%d => %dB\n",i,i);
        }
        P("\nEnter Flat's No: ");
        scanf("%d",&n3);
        for(i=6; i<8; i++)
        {
            if(i==n3+5)
            {
                P("%d\n",s[i-1].fl);
                P("%s\n",s[i-1].name);
                P("%d\n",s[i-1].mbr);
                P("%s\n",s[i-1].ads);
                P("%s\n",s[i-1].job);
                P("%s\n",s[i-1].ph);
                P("%.2f\n\n",s[i-1].sal);
                break;
            }
        }
        P("Press 1 for Previous menu\nPress 2 for Main menu\nPress 0 for Exit\n");
        if(getch()=='1')
        {
            flr(2);
        }
        if(getch()=='2')
        {
            main();
        }
        if(getch()=='0')
        {
            ext();
        }
        break;
    case 3:
        for(i=1; i<6; i++)
        {
            P("%d => %dC\n",i,i);
        }
        P("\nEnter Flat's No: ");
        scanf("%d",&n3);
        for(i=8; i<13; i++)
        {
            if(i==n3+7)
            {
                P("%d\n",s[i-1].fl);
                P("%s\n",s[i-1].name);
                P("%d\n",s[i-1].mbr);
                P("%s\n",s[i-1].ads);
                P("%s\n",s[i-1].job);
                P("%s\n",s[i-1].ph);
                P("%.2f\n\n",s[i-1].sal);
                break;
            }
        }
        P("Press 1 for Previous menu\nPress 2 for Main menu\nPress 0 for Exit\n");
        if(getch()=='1')
        {
            flr(3);
        }
        if(getch()=='2')
        {
            main();
        }
        if(getch()=='0')
        {
            ext();
        }
        break;
    case 4:
        for(i=1; i<6; i++)
        {
            P("%d => %dD\n",i,i);
        }
        P("\nEnter Flat's No: ");
        scanf("%d",&n3);
        for(i=13; i<18; i++)
        {
            if(i==n3+12)
            {
                P("%d\n",s[i-1].fl);
                P("%s\n",s[i-1].name);
                P("%d\n",s[i-1].mbr);
                P("%s\n",s[i-1].ads);
                P("%s\n",s[i-1].job);
                P("%s\n",s[i-1].ph);
                P("%.2f\n\n",s[i-1].sal);
                break;
            }
        }
        P("Press 1 for Previous menu\nPress 2 for Main menu\nPress 0 for Exit\n");
        if(getch()=='1')
        {
            flr(4);
        }
        if(getch()=='2')
        {
            main();
        }
        if(getch()=='0')
        {
            ext();
        }
        break;
    case 5:
        for(i=1; i<6; i++)
        {
            P("%d => %dD\n",i,i);
        }
        P("\nEnter Flat's No: ");
        scanf("%d",&n3);
        for(i=18; i<23; i++)
        {
            if(i==n3+17)
            {
                P("%d\n",s[i-1].fl);
                P("%s\n",s[i-1].name);
                P("%d\n",s[i-1].mbr);
                P("%s\n",s[i-1].ads);
                P("%s\n",s[i-1].job);
                P("%s\n",s[i-1].ph);
                P("%.2f\n\n",s[i-1].sal);
                break;
            }
        }
        P("Press 1 for Previous menu\nPress 2 for Main menu\nPress 0 for Exit\n");
        if(getch()=='1')
        {
            flr(5);
        }
        if(getch()=='2')
        {
            main();
        }
        if(getch()=='0')
        {
            ext();
        }
        break;
    case 6:
        for(i=1; i<6; i++)
        {
            P("%d => %dF\n",i,i);
        }
        P("\nEnter Flat's No: ");
        scanf("%d",&n3);
        for(i=23; i<28; i++)
        {
            if(i==n3+22)
            {
                P("%d\n",s[i-1].fl);
                P("%s\n",s[i-1].name);
                P("%d\n",s[i-1].mbr);
                P("%s\n",s[i-1].ads);
                P("%s\n",s[i-1].job);
                P("%s\n",s[i-1].ph);
                P("%.2f\n\n",s[i-1].sal);
                break;
            }
        }
        P("Press 1 for Previous menu\nPress 2 for Main menu\nPress 0 for Exit\n");
        if(getch()=='1')
        {
            flr(6);
        }
        if(getch()=='2')
        {
            main();
        }
        if(getch()=='0')
        {
            ext();
        }
        break;
    case 7:
        main();
    default:
        P("Invalid Choice! Please Try Again");

    }
}
