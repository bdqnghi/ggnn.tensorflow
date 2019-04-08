int main()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},b[12],i,w;
    scanf("%d",&w);
    w=w+12;
    for(i=0;i<12;i++)
        b[i]=a[i]%7;
    if(w%7==5) printf("1\n");
    for(i=0;i<11;i++)
    {
        w=w+a[i];
        if(w%7==5) printf("%d\n",i+2);
    }
    return 0;
}
