//
//  main.c
//  ???? ? ??????????
//
//  Created by zhaoze on 13-11-5.
//  Copyright (c) 2013? zhaoze. All rights reserved.
//


void next(int c[],int x)
{
    int i,j;
    c[0]++;
    for (i=1; c[0]*c[1]*c[2]*c[3]*c[4]*c[5]*c[6]*c[7]*c[8]*c[9]*c[10]*c[11]*c[12]*c[13]*c[14]>x; i++)
    {
        c[i]++;
        for (j=0; j<i; c[j++]=c[i]);
        if (c[14]==2)  break;
    }
}


int reslove(int x)
{
    int c[15]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int p=0;
    while (c[0]*c[1]*c[2]*c[3]*c[4]*c[5]*c[6]*c[7]*c[8]*c[9]*c[10]*c[11]*c[12]*c[13]*c[14]<=x)
    {
        if (c[0]*c[1]*c[2]*c[3]*c[4]*c[5]*c[6]*c[7]*c[8]*c[9]*c[10]*c[11]*c[12]*c[13]*c[14]==x) p++;
        next(c, x);
    }
    return p;
}


void main()
{
    int i=0,n,a;
    scanf("%d",&n);
    while (i++<n)
    {
        scanf("%d",&a);
        printf("%d\n",reslove(a));
    }
    
    
    /*
    *int c[15]={2,2,2,2,1,1,1,1,1,1,1,1,1,1,1};
    *int x=20;
    *{next(c, x);
    *printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d \n",
    *      c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8],c[9],c[10],c[11],c[12],c[13],c[14]);}
    */
}