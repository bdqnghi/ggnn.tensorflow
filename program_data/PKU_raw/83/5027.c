//
//  main.c
//  ???
//
//  Created by zhaoze on 13-11-7.
//  Copyright (c) 2013? zhaoze. All rights reserved.
//


void main()
{
    int n,sum=0,i=0;
    int a[10]={0};
    float GPA[10]={0.0},h=0.0;
    float tran(float n);
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for (i=0; i<n; i++)
    {
        scanf("%f",&GPA[i]);
        GPA[i]=tran(GPA[i]);
        //printf("%.5f",GPA[i]);
    }
    for (i=0; i<n; i++)
    {
        h+=GPA[i]*a[i];
    }
    printf("%.2f",h/sum);

}

//
 float tran(float n)
{
    float h=0.0;
    if (n>=90&&n<=100) h=4.0;
    else if (n>=85&&n<=89) h=3.7;
    else if (n>=82&&n<=84) h=3.3;
    else if (n>=78&&n<=81) h=3.0;
    else if (n>=75&&n<=77) h=2.7;
    else if (n>=72&&n<=74) h=2.3;
    else if (n>=68&&n<=71) h=2.0;
    else if (n>=64&&n<=67) h=1.5;
    else if (n>=60&&n<=63) h=1.0;
    else h=0.0;
    return h;
}