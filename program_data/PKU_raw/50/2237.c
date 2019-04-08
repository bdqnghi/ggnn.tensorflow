main()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,t,w,x;
    scanf("%d",&w);
    for(i=1;i<12;i++)
    {
        a[i]=a[i-1]+a[i];              
    }
    x=13-w;
    if(13-x==7)  printf("1\n");
    for(i=1;i<12;i++)
    {
            if((a[i-1]+13-x)%7==0)
            printf("%d\n",i+1);                     
    }
   
}
