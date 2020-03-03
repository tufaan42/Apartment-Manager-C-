#include<bits/stdc++.h>
#define P printf
struct month{
    int fl1;
    float aR,gB,cB,sC,wB,A;
};
using namespace std;
int main()
{
    FILE *m;
    month M[34];
    int counter1=0,i;
    m=fopen("February.txt","r");
    char strm[200];
    while((fgets(strm,200,m))!=NULL){
        counter1++;
    }
    rewind(m);
    for(i=0;i<counter1;i++){
        fscanf(m,"%d:%f:%f:%f:%f:%f:%f:",&M[i].fl1,&M[i].aR,&M[i].gB,&M[i].cB,&M[i].sC,&M[i].wB,&M[i].A);
    }
    for(i=0;i<counter1;i++){
        P("%d\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n\n",M[i].fl1,M[i].aR,M[i].gB,M[i].cB,M[i].sC,M[i].wB,M[i].A);
    }
    return 0;
}
