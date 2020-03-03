#include<bits/stdc++.h>
#include<conio.h>
#define P printf
using namespace std;
FILE *f2,*m,*zxj,*zxf,*zxm,*zxa,*zxmay,*zxju;
int a,b;
char ii;
struct renter
{
    int fl,mbr;
    char name[20],ads[100],job[30],ph[15];
    float sal;
};
struct month
{
    int fl1;
    float aR,gB,cB,sC,wB,A;
};
struct indv
{
    int fl2;
    float aRi=0,gBi=0,cBi=0,sCi=0,wBi=0;
};
void indvf(int zi, int zt);
void flr(int x);
void m1();
void m2();
void jnu();
void feb();
void mar();
void apr();
void may();
void jun();
char gtc,fgtc;
void ext()
{
    system("cls");
    P("Thank You for using Apartment Manager\n\n\t\tCreated by\nEmon\nShishir\nand\nTowfique\n\n\n");
    P("Press any key to exit...");
    fclose(f2);
    exit(0);
}

int main()
{
    system("cls");
    int n1;
    P("\t\tWelcome To Apartment Manager\n\n");
    P("This Software is made for 6 stored building.\nEach Floor has five apartments except 3rd floor.\n");
    P("Third floor has only three apartments.Your operation is give bellow\n\n");
    P("1.Renter Information.\n2.Rent Information.\n3.Monthly Rent Information\n");
    P("\n======================\nSelect your operation: ");
    scanf("%d",&n1);
    if(n1==1)
    {
        m1();
    }
    else if(n1==2)
    {
        m2();
    }
    else if(n1==3)
    {
        P("Press 1 for January\nPress 2 for February\nPress 3 for March\nPress 4 for April\n");
        P("Press 5 for May\nPress 6 for June\n");
        gtc=getch();
        if(gtc=='1')
        {
            jnu();
        }
        else if(gtc=='2')
        {
            feb();
        }
        else if(gtc=='3')
        {
            mar();
        }
        if(gtc=='4')
        {
            apr();
        }
        else if(gtc=='5')
        {
            may();
        }
        else if(gtc=='6')
        {
            jun();
        }
    }
    return 0;
}

void m1()
{
    system("cls");
    int n2;
    P("1.1st Floor\n2.2nd Floor\n3.3rd Floor\n4.4th Floor\n5.5th Floor\n6.6th Floor\n7.Main menu\n0.Exit");
    P("\nEnter Floor's No: ");
    scanf("%d",&n2);
    flr(n2);
    fclose(f2);
}

void m2()
{
    system("cls");
    int i,j,k=1;
    for(i=0; i<6; i++)
    {
        if(i!=1)
        {
            if (i==0) for(j=0; j<5; j++)
                {
                    P("%d -> %dA\n",k++,j+1);
                }
            else if(i==2) for(j=0; j<5; j++)
                {
                    P("%d -> %dC\n",k++,j+1);
                }
            else if(i==3) for(j=0; j<5; j++)
                {
                    P("%d -> %dD\n",k++,j+1);
                }
            else if(i==4) for(j=0; j<5; j++)
                {
                    P("%d -> %dE\n",k++,j+1);
                }
            else if(i==5) for(j=0; j<5; j++)
                {
                    P("%d -> %dF\n",k++,j+1);
                }
        }
        else
        {
            for(j=0; j<2; j++)
            {
                P("%d -> %dB\n",k++,j+1);
            }
        }
    }
    P("\n\nPress 1 for Enter flat no\nPress 2 for Main menu\nPress 0 for Exit\n");
    gtc=getch();
    if(gtc=='1')
    {
        P("\nEnter Flat no: ");
        scanf("%d",&a);
    }
    else if(gtc=='2')
    {
        main();
    }
    else if(gtc=='0')
    {
        ext();
    }
    P("\n\n1.Apartment Rent\n2.Gas Bill\n3.Current Bill\n4.Service charge\n5.Water Bill\n\n");
    P("Press Your choice: ");
    b=getch();
    b=b-48;
    indvf(a,b);
}

void flr(int x)
{
    system("cls");
    f2=fopen("emon.txt","r");
    rewind(f2);
    renter s[28];
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
            P("Press %d => %dA\n",i,i);
        }
        P("Press 6 for Previous menu\nPress 7 for Main menu\nPress 0 for Exit\n");
        fgtc=getch();
        if(fgtc>47 && 56>fgtc)
        {
            if(fgtc=='6')
            {
                main();
            }
            if(fgtc=='7')
            {
                main();
            }
            if(fgtc=='0')
            {
                ext();
            }
            for(i=1; i<6; i++)
            {
                if(i==fgtc-48)
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
            else
            {
                P("Try Again\n");
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
            }
        }
        else
        {
            P("Try again\n");
            flr(1);
        }
        break;
    case 2:
        for(i=1; i<3; i++)
        {
            P("Press %d => %dB\n",i,i);
        }
        P("Press 6 for Previous menu\nPress 7 for Main menu\nPress 0 for Exit\n");
        fgtc=getch();
        if(fgtc=='6')
        {
            m1();
        }
        if(fgtc=='7')
        {
            main();
        }
        if(fgtc=='0')
        {
            ext();
        }
        for(i=6; i<8; i++)
        {
            if(i==(fgtc-48)+5 )
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
            ext();
        }
        else
        {
            P("Try Again\n");
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
                ext();
            }
        }
        break;
    case 3:
        for(i=1; i<6; i++)
        {
            P("press %d => %dC\n",i,i);
        }
        P("Press 6 for Previous menu\nPress 7 for Main menu\nPress 0 for Exit\n");
        fgtc=getch();
        if(fgtc>47 && 56>fgtc)
        {
            if(fgtc=='6')
            {
                m1();
            }
            if(fgtc=='7')
            {
                main();
            }
            if(fgtc=='0')
            {
                ext();
            }
            for(i=8; i<13; i++)
            {
                if(i==fgtc-48+7)
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
            else if(getch()=='2')
            {
                main();
            }
            else if(getch()=='0')
            {
                ext();
            }
            else
            {
                P("Try Again\n");
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
            }
        }
        else
        {
            P("Try again\n");
            flr(3);
        }
        break;
    case 4:
        for(i=1; i<6; i++)
        {
            P("Press %d => %dD\n",i,i);
        }
        P("Press 6 for Previous menu\nPress 7 for Main menu\nPress 0 for Exit\n");
        fgtc=getch();
        if(fgtc>47 && 56>fgtc)
        {
            if(fgtc=='6')
            {
                m1();
            }
            else if(fgtc=='7')
            {
                main();
            }
            else if(fgtc=='0')
            {
                ext();
            }
            for(i=13; i<18; i++)
            {
                if(i==(fgtc-48)+12)
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
            else if(getch()=='2')
            {
                main();
            }
            else if(getch()=='0')
            {
                ext();
            }
            else
            {
                P("Try Again\n");
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
            }
        }
        else
        {
            P("Try again\n");
            flr(4);
        }
        break;
    case 5:
        for(i=1; i<6; i++)
        {
            P("press %d => %dE\n",i,i);
        }
        P("Press 6 for Previous menu\nPress 7 for Main menu\nPress 0 for Exit\n");
        fgtc=getch();
        if(fgtc>47 && 56>fgtc)
        {
            if(fgtc=='6')
            {
                m1();
            }
            if(fgtc=='7')
            {
                main();
            }
            if(fgtc=='0')
            {
                ext();
            }
            for(i=18; i<23; i++)
            {
                if(i==fgtc-48+17)
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
            else if(getch()=='2')
            {
                main();
            }
            else if(getch()=='0')
            {
                ext();
            }
            else
            {
                P("Try Again\n");
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
            }
        }
        else
        {
            P("Try again\n");
            flr(5);
        }
        break;
    case 6:
        for(i=1; i<6; i++)
        {
            P("press %d => %dF\n",i,i);
        }
        P("Press 6 for Previous menu\nPress 7 for Main menu\nPress 0 for Exit\n");
        fgtc=getch();
        if(fgtc>47 && 56>fgtc)
        {
            if(fgtc=='6')
            {
                m1();
            }
            if(fgtc=='7')
            {
                main();
            }
            if(fgtc=='0')
            {
                ext();
            }
            for(i=23; i<28; i++)
            {
                if(i==(fgtc-48)+22)
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
            else if(getch()=='2')
            {
                main();
            }
            else if(getch()=='0')
            {
                ext();
            }
            else
            {
                P("Try Again\n");
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
            }
        }
        else
        {
            P("Try again\n");
            flr(6);
        }
        break;
    case 7:
        main();
    default:
        P("Invalid Choice! Please Try Again\n");
        main();

    }
}

void indvf(int zi, int zt)
{
    system("cls");
    indv x;
    month M[28];
    int i,j;
    char new2;
    zxj=fopen("January_SHISHIR.txt","r");
    zxf=fopen("February_SHISHIR.txt","r");
    zxm=fopen("March_SHISHIR.txt","r");
    zxa=fopen("April_emon.txt","r");
    zxmay=fopen("May_emon.txt","r");
    zxju=fopen("June_towfique.txt","r");
    for(j=0; j<6; j++)
    {
        if(j==0)
        {
            for(i=0; i<27; i++)
            {
                fscanf(zxj,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
                if(zi==M[i].fl1)
                {
                    x.aRi=x.aRi+M[i].aR;
                    x.gBi=x.gBi+M[i].gB;
                    x.cBi=x.cBi+M[i].cB;
                    x.sCi=x.sCi+M[i].sC;
                    x.wBi=x.wBi+M[i].wB;
                    if(zt==1)
                    {
                        P("January: \n\t Apartment Rent: %.2f\n",M[i].aR);
                    }
                    else if(zt==2)
                    {
                        P("January: \n\t Gas Bill: %.2f\n",M[i].gB);
                    }
                    else if(zt==3)
                    {
                        P("January: \n\t Current Bill: %.2f\n",M[i].cB);
                    }
                    else if(zt==4)
                    {
                        P("January: \n\t Service Charge: %.2f\n",M[i].sC);
                    }
                    else if(zt==5)
                    {
                        P("January: \n\t Water Bill: %.2f\n",M[i].wB);
                    }

                }
            }
        }
        else if(j==1)
        {
            for(i=0; i<27; i++)
            {
                fscanf(zxf,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
                if(zi==M[i].fl1)
                {
                    x.aRi=x.aRi+M[i].aR;
                    x.gBi=x.gBi+M[i].gB;
                    x.cBi=x.cBi+M[i].cB;
                    x.sCi=x.sCi+M[i].sC;
                    x.wBi=x.wBi+M[i].wB;
                    if(zt==1)
                    {
                        P("February: \n\t Apartment Rent: %.2f\n",M[i].aR);
                    }
                    else if(zt==2)
                    {
                        P("February: \n\t Gas Bill: %.2f\n",M[i].gB);
                    }
                    else if(zt==3)
                    {
                        P("February: \n\t Current Bill: %.2f\n",M[i].cB);
                    }
                    else if(zt==4)
                    {
                        P("February: \n\t Service Charge: %.2f\n",M[i].sC);
                    }
                    else if(zt==5)
                    {
                        P("February: \n\t Water Bill: %.2f\n",M[i].wB);
                    }
                }
            }
        }
        else if(j==2)
        {

            for(i=0; i<27; i++)
            {
                fscanf(zxm,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
                if(zi==M[i].fl1)
                {
                    x.aRi=x.aRi+M[i].aR;
                    x.gBi=x.gBi+M[i].gB;
                    x.cBi=x.cBi+M[i].cB;
                    x.sCi=x.sCi+M[i].sC;
                    x.wBi=x.wBi+M[i].wB;
                    if(zt==1)
                    {

                        P("March: \n\t Apartment Rent: %.2f\n",M[i].aR);
                    }
                    else if(zt==2)
                    {
                        P("March: \n\t Gas Bill: %.2f\n",M[i].gB);
                    }
                    else if(zt==3)
                    {
                        P("March: \n\t Current Bill: %.2f\n",M[i].cB);
                    }
                    else if(zt==4)
                    {
                        P("March: \n\t Service Charge: %.2f\n",M[i].sC);
                    }
                    else if(zt==5)
                    {
                        P("March: \n\t Water Bill: %.2f\n",M[i].wB);
                    }

                }
            }
        }
        else if(j==3)
        {

            for(i=0; i<27; i++)
            {
                fscanf(zxa,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
                if(zi==M[i].fl1)
                {
                    x.aRi=x.aRi+M[i].aR;
                    x.gBi=x.gBi+M[i].gB;
                    x.cBi=x.cBi+M[i].cB;
                    x.sCi=x.sCi+M[i].sC;
                    x.wBi=x.wBi+M[i].wB;

                    if(zt==1)
                    {
                        P("April: \n\t Apartment Rent: %.2f\n",M[i].aR);
                    }
                    else if(zt==2)
                    {
                        P("April: \n\t Gas Bill: %.2f\n",M[i].gB);
                    }
                    else if(zt==3)
                    {
                        P("April: \n\t Current Bill: %.2f\n",M[i].cB);
                    }
                    else if(zt==4)
                    {
                        P("April: \n\t Service Charge: %.2f\n",M[i].sC);
                    }
                    else if(zt==5)
                    {
                        P("April: \n\t Water Bill: %.2f\n",M[i].wB);
                    }

                }
            }
        }
        else if(j==4)
        {

            for(i=0; i<27; i++)
            {
                fscanf(zxmay,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
                if(zi==M[i].fl1)
                {
                    x.aRi=x.aRi+M[i].aR;
                    x.gBi=x.gBi+M[i].gB;
                    x.cBi=x.cBi+M[i].cB;
                    x.sCi=x.sCi+M[i].sC;
                    x.wBi=x.wBi+M[i].wB;
                    if(zt==1)
                    {
                        P("May: \n\t Apartment Rent: %.2f\n",M[i].aR);
                    }
                    else if(zt==2)
                    {
                        P("May: \n\t Gas Bill: %.2f\n",M[i].gB);
                    }
                    else if(zt==3)
                    {
                        P("May: \n\t Current Bill: %.2f\n",M[i].cB);
                    }
                    else if(zt==4)
                    {
                        P("May: \n\t Service Charge: %.2f\n",M[i].sC);
                    }
                    else if(zt==5)
                    {
                        P("May: \n\t Water Bill: %.2f\n",M[i].wB);
                    }

                }
            }
        }
        else if(j==5)
        {
            for(i=0; i<27; i++)
            {
                fscanf(zxju,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
                if(zi==M[i].fl1)
                {
                    x.aRi=x.aRi+M[i].aR;
                    x.gBi=x.gBi+M[i].gB;
                    x.cBi=x.cBi+M[i].cB;
                    x.sCi=x.sCi+M[i].sC;
                    x.wBi=x.wBi+M[i].wB;
                    if(zt==1)
                    {
                        P("June: \n\t Apartment Rent: %.2f\n",M[i].aR);
                    }
                    else if(zt==2)
                    {
                        P("June: \n\t Gas Bill: %.2f\n",M[i].gB);
                    }
                    else if(zt==3)
                    {
                        P("June: \n\t Current Bill: %.2f\n",M[i].cB);
                    }
                    else if(zt==4)
                    {
                        P("June: \n\t Service Charge: %.2f\n",M[i].sC);
                    }
                    else if(zt==5)
                    {
                        P("June: \n\t Water Bill: %.2f\n",M[i].wB);
                    }

                }
            }
        }
    }
    fclose(zxj);
    fclose(zxf);
    fclose(zxm);
    fclose(zxa);
    fclose(zxm);
    fclose(zxju);
    if(zt==1)
    {
        P("\n\nTotal= %.2f\nAverage= %.3f",x.aRi,x.aRi/6);
        P("\n\nPress 1 for Previous menu\nPress 2 for Main menu\nPress 0 for Exit\n");
        gtc=getch();
        if(gtc=='1')
        {
            m2();
        }
        else if(gtc=='2')
        {
            main();
        }
        else if(gtc=='0')
        {
            ext();
        }
    }
    else if(zt==2)
    {
        P("\n\nTotal= %.2f\nAverage= %.3f",x.gBi,x.gBi/6);
        P("\n\nPress 1 for Previous menu\nPress 2 for Main menu\nPress 0 for Exit\n");
        gtc=getch();
        if(gtc=='1')
        {
            m2();
        }
        else if(gtc=='2')
        {
            main();
        }
        else if(gtc=='0')
        {
            ext();
        }
    }
    else if(zt==3)
    {
        P("\n\nTotal= %.2f\nAverage= %.3f",x.cBi,x.cBi/6);
        P("\n\nPress 1 for Previous menu\nPress 2 for Main menu\nPress 0 for Exit\n");
        gtc=getch();
        if(gtc=='1')
        {
            m2();
        }
        else if(gtc=='2')
        {
            main();
        }
        else if(gtc=='0')
        {
            ext();
        }
    }
    else if(zt==4)
    {
        P("\n\nTotal= %.2f\nAverage= %.3f",x.sCi,x.sCi/6);
        P("\n\nPress 1 for Previous menu\nPress 2 for Main menu\nPress 0 for Exit\n");
        gtc=getch();
        if(gtc=='1')
        {
            m2();
        }
        else if(gtc=='2')
        {
            main();
        }
        else if(gtc=='0')
        {
            ext();
        }
    }
    else if(zt==5)
    {
        P("\n\nTotal= %.2f\nAverage= %.3f",x.wBi,x.wBi/6);
        P("\n\nPress 1 for Previous menu\nPress 2 for Main menu\nPress 0 for Exit\n");
        gtc=getch();
        if(gtc=='1')
        {
            m2();
        }
        else if(gtc=='2')
        {
            main();
        }
        else if(gtc=='0')
        {
            ext();
        }
    }
}
void jnu()
{
    system("cls");
    indv h;
    month M[28];
    int i,j;
    char new2;
    P("For Apartment Rent Press 1\nFor Gas Bill Press 2\nFor Current Bill Press 3\nFor Service Charge Press 4\nFor Water Bill Press 5\n");
    gtc=getch();
    zxj=fopen("January_SHISHIR.txt","r");
    for(i=0; i<27; i++)
    {
        fscanf(zxj,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
    }
    system("cls");
    if(gtc=='1')
    {
        P("\tMonthly Apartment Rent->> January\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            h.aRi=h.aRi+M[i].aR;
            P("%d -> %.1f\n",i+1,M[i].aR);
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.aRi,h.aRi/27);
    }
    else if(gtc=='2')
    {
        P("\tMonthly Gas Bill->> January\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].gB);
            h.gBi=h.gBi+M[i].gB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.gBi,h.gBi/27);
    }
    else if(gtc=='3')
    {
        P("\tMonthly Current Bill->> January\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].cB);
            h.cBi=h.cBi+M[i].cB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.cBi,h.cBi/27);
    }
    if(gtc=='4')
    {
        P("\tMonthly Service Charge->> January\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].sC);
            h.sCi=h.sCi+M[i].sC;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.sCi,h.sCi/27);
    }
    else if(gtc=='5')
    {

        P("\tMonthly Water Bill->> January\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].wB);
            h.wBi=h.wBi+M[i].wB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.wBi,h.wBi/27);
    }
    fclose(zxj);

}
void feb()
{
    system("cls");
    indv h;
    month M[28];
    int i,j;
    char new2;
    zxf=fopen("February_SHISHIR.txt","r");
    for(i=0; i<27; i++)
    {
        fscanf(zxf,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
    }
    P("For Apartment Rent Press 1\nFor Gas Bill Press 2\nFor Current Bill Press 3\nFor Service Charge Press 4\nFor Water Bill Press 5\n");
    gtc=getch();
    system("cls");
    if(gtc=='1')
    {

        P("\tMonthly Apartment Rent->> February\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].aR);
            h.aRi=h.aRi+M[i].aR;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.aRi,h.aRi/27);
    }
    else if(gtc=='2')
    {

        P("\tMonthly Gas Bill->> February\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].gB);
            h.gBi=h.gBi+M[i].gB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.gBi,h.gBi/27);
    }
    else if(gtc=='3')
    {

        P("\tMonthly Current Bill->> February\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].cB);
            h.cBi=h.cBi+M[i].cB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.cBi,h.cBi/27);
    }
    if(gtc=='4')
    {

        P("\tMonthly Service Charge->> February\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].sC);
            h.sCi=h.sCi+M[i].sC;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.sCi,h.sCi/27);
    }
    else if(gtc=='5')
    {

        P("\tMonthly Water Bill->> February\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].wB);
            h.wBi=h.wBi+M[i].wB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.wBi,h.wBi/27);
    }
    fclose(zxf);

}
void mar()
{
    system("cls");
    indv h;
    month M[28];
    int i,j;
    char new2;
    zxm=fopen("March_SHISHIR.txt","r");
    for(i=0; i<27; i++)
    {
        fscanf(zxm,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
    }
    P("For Apartment Rent Press 1\nFor Gas Bill Press 2\nFor Current Bill Press 3\nFor Service Charge Press 4\nFor Water Bill Press 5\n");
    gtc=getch();
    system("cls");
    if(gtc=='1')
    {

        P("\tMonthly Apartment Rent->> March\n");
        P("\nFlat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].aR);
            h.aRi=h.aRi+M[i].aR;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.aRi,h.aRi/27);
    }
    else if(gtc=='2')
    {

        P("\tMonthly Gas Bill->> March\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].gB);
            h.gBi=h.gBi+M[i].gB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.gBi,h.gBi/27);
    }
    else if(gtc=='3')
    {

        P("\tMonthly Current Bill->> March\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].cB);
            h.cBi=h.cBi+M[i].cB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.cBi,h.cBi/27);
    }
    if(gtc=='4')
    {

        P("\tMonthly Service Charge->> March\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].sC);
            h.sCi=h.sCi+M[i].sC;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.sCi,h.sCi/27);
    }
    else if(gtc=='5')
    {

        P("\tMonthly Water Bill->> March\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].wB);
            h.wBi=h.wBi+M[i].wB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.wBi,h.wBi/27);
    }
    fclose(zxm);
}
void apr()
{
    system("cls");
    indv h;
    month M[28];
    int i,j;
    char new2;
    zxa=fopen("April_emon.txt","r");
    for(i=0; i<27; i++)
    {
        fscanf(zxa,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
    }
    P("For Apartment Rent Press 1\nFor Gas Bill Press 2\nFor Current Bill Press 3\nFor Service Charge Press 4\nFor Water Bill Press 5\n");
    gtc=getch();
    system("cls");
    if(gtc=='1')
    {

        P("\tMonthly Apartment Rent->> April\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].aR);
            h.aRi=h.aRi+M[i].aR;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.aRi,h.aRi/27);
    }
    else if(gtc=='2')
    {

        P("\tMonthly Gas Bill->> April\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].gB);
            h.gBi=h.gBi+M[i].gB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.gBi,h.gBi/27);
    }
    else if(gtc=='3')
    {

        P("\tMonthly Current Bill->> April\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].cB);
            h.cBi=h.cBi+M[i].cB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.cBi,h.cBi/27);
    }
    if(gtc=='4')
    {

        P("\tMonthly Service Charge->> April\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].sC);
            h.sCi=h.sCi+M[i].sC;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.sCi,h.sCi/27);
    }
    else if(gtc=='5')
    {

        P("\tMonthly Water Bill->> April\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].wB);
            h.wBi=h.wBi+M[i].wB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.wBi,h.wBi/27);
    }
    fclose(zxa);
}
void may()
{
    system("cls");
    indv h;
    month M[28];
    int i,j;
    char new2;
    zxmay=fopen("May_emon.txt","r");
    for(i=0; i<27; i++)
    {
        fscanf(zxmay,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
    }
    P("For Apartment Rent Press 1\nFor Gas Bill Press 2\nFor Current Bill Press 3\nFor Service Charge Press 4\nFor Water Bill Press 5\n");
    gtc=getch();
    system("cls");
    if(gtc=='1')
    {

        P("\tMonthly Apartment Rent->> May\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].aR);
            h.aRi=h.aRi+M[i].aR;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.aRi,h.aRi/27);
    }
    else if(gtc=='2')
    {

        P("\tMonthly Gas Bill->> May\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].gB);
            h.gBi=h.gBi+M[i].gB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.gBi,h.gBi/27);
    }
    else if(gtc=='3')
    {

        P("\tMonthly Current Bill->> May\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].cB);
            h.cBi=h.cBi+M[i].cB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.cBi,h.cBi/27);
    }
    if(gtc=='4')
    {

        P("\tMonthly Service Charge->> May\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].sC);
            h.sCi=h.sCi+M[i].sC;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.sCi,h.sCi/27);
    }
    else if(gtc=='5')
    {

        P("\tMonthly Water Bill->> May\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].wB);
            h.wBi=h.wBi+M[i].wB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.wBi,h.wBi/27);
    }
    fclose(zxmay);
}
void jun()
{
    system("cls");
    indv h;
    month M[28];
    int i,j;
    char new2;
    zxju=fopen("June_towfique.txt","r");
    for(i=0; i<27; i++)
    {
        fscanf(zxju,"%d:%f:%f:%f:%f:%f:%f%c",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A,&new2);
    }
    P("For Apartment Rent Press 1\nFor Gas Bill Press 2\nFor Current Bill Press 3\nFor Service Charge Press 4\nFor Water Bill Press 5\n");
    gtc=getch();
    system("cls");
    if(gtc=='1')
    {

        P("\tMonthly Apartment Rent->> June\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].aR);
            h.aRi=h.aRi+M[i].aR;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.aRi,h.aRi/27);
    }
    else if(gtc=='2')
    {

        P("\tMonthly Gas Bill->> June\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].gB);
            h.gBi=h.gBi+M[i].gB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.gBi,h.gBi/27);
    }
    else if(gtc=='3')
    {

        P("\tMonthly Current Bill->> June\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].cB);
            h.cBi=h.cBi+M[i].cB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.cBi,h.cBi/27);
    }
    if(gtc=='4')
    {

        P("\tMonthly Service Charge->> June\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].sC);
            h.sCi=h.sCi+M[i].sC;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.sCi,h.sCi/27);
    }
    else if(gtc=='5')
    {

        P("\tMonthly Water Bill->> June\n");
        P("Flat No -> Rent\n");
        for(i=0; i<27; i++)
        {
            P("%d -> %.1f\n",i+1,M[i].wB);
            h.wBi=h.wBi+M[i].wB;
        }
        P("\nTotal= %.2f\nAverage= %.3f",h.wBi,h.wBi/27);
    }
    fclose(zxju);
}
