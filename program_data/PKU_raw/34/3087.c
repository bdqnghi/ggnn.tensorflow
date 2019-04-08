main()
{
    int i,j,k;
    scanf("%d",&i);
    if (i==1)
    printf("End");
    for (;i!=1;)
    {
    if  (i%2==0)
    {j=i/2;
    printf("%d/2=%d\n",i,j);}
    else
    {j=3*i+1;
    printf("%d*3+1=%d\n",i,j);}
    if (j==1)
    {printf("End");
    break;}
    else
    {
        if  (j%2==0)
    {i=j/2;
    printf("%d/2=%d\n",j,i);}
    else
    {i=3*j+1;
    printf("%d*3+1=%d\n",j,i);}
       if (i==1)
       {printf("End");
       break;}
    }
    }
}