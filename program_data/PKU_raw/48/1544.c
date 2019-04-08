//
//  main.c
//  aa
//
//  Created by Duan on 12-11-27.
//  Copyright (c) 2012? __MyCompanyName__. All rights reserved.
//

void nextday(int a[11][11],int b[11][11])
{
    int i,j;
    for (i=1;i<=9;i++)
        for (j=1;j<=9;j++)
            b[i][j]=0;
    for (i=1;i<=9;i++)
        for (j=1;j<=9;j++)
        {
            b[i][j]+=a[i][j]*2;
            b[i+1][j]+=a[i][j];
            b[i-1][j]+=a[i][j];
            b[i+1][j+1]+=a[i][j];
            b[i+1][j-1]+=a[i][j];
            b[i-1][j+1]+=a[i][j];
            b[i-1][j-1]+=a[i][j];
            b[i][j+1]+=a[i][j];
            b[i][j-1]+=a[i][j];
        }
}
void printarray(int a[11][11])
{
    int i,j;
    for (i=1;i<=9;i++)
        for (j=1;j<=9;j++)
        {
            printf("%d",a[i][j]);
            if (j!=9) printf(" ");
            else printf("\n");
        }
}

int main()
{
    int m,n,i;
    scanf("%d %d",&m,&n);
    int a[11][11]={0},b[11][11]={0};
    a[5][5]=m;
    for (i=0;i<=n;i++)
    {
        if (i%2==0) nextday(a, b);
        else nextday(b, a);
    }
    if(i%2==0) printarray(b);
    else printarray(a);
}