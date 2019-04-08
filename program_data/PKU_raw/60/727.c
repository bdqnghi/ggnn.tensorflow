int f(int t)
{
    int a=(int)sqrt(t);
    int x=0;
    for(int i=2;i<=a;i++)
    {
        if(t%i==0) x++;
    }
    if(x==0) return 1;
    else return 0;
}
main()
{
     int n;
     scanf("%d",&n);
     if(n<5) printf("empty");
     for(int i=2;i<=n-2;i++)
     {
         if(f(i)&&f(i+2)) printf("%d %d\n",i,i+2);
     }
     getchar();
     getchar();
     getchar();
}
