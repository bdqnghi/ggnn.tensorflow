main()
{
    int n,a,b,c,d,e;
    scanf("%d",&n);
    a=n/10000;
    b=(n-a*10000)/1000;
    c=(n-a*10000-b*1000)/100;
    d=(n-a*10000-b*1000-c*100)/10;
    e=n-a*10000-b*1000-c*100-d*10;
    if(a)
    printf("%d%d%d%d%d\n",e,d,c,b,a);
    else if(b)
    printf("%d%d%d%d\n",e,d,c,b);
    else if(c)
    printf("%d%d%d",e,d,c);
    else if(d)
    printf("%d%d",e,d);
    else
    printf("%d",e);
    return 0;
}