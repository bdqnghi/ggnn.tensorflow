int check(int *a)
{
    int b[5]={0};
    if (a[4]==1)
    b[0]=1;
    if (a[1]==2)
    b[1]=1;
    if (a[0]==5)
    b[2]=1;
    if (a[2]>1)
    b[3]=1;
    if (a[3]==1)
    b[4]=1;
    int t=1,i;
    for (i=0;i<5;i++)
    if ((a[i]!=1)&&(a[i]!=2))
    {
        if (b[i]==1)
        t=0;
    }
    else
    {
        if (b[i]==0)
        t=0;
    }
    if ((a[4]==2)||(a[4]==3))
    t=0;
    return t;
}
void f(int *a,int count)  //??5????
{
    int i,t=0,j;
    for (i=1;i<6;i++)
    {
        a[count]=i;
        for (j=0;j<count;j++)
        if (a[j]==i)
        {t=1;break;}
        if (t!=1)
        {if (count<4)
        f(a,count+1);
        else
        {
            if (check(a))
            {
                printf("%d",a[0]);
                for (i=1;i<5;i++)
                printf(" %d",a[i]);
            }

        }}
        t=0;
    }
}
main()
{
    int a[5];// A B C D E
    f(a,0);
}
