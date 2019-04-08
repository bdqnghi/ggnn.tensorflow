int f(int n)
{
    int m=0;
    int i=2;
    for(;i<n;)
    {
    if(n%i==0)
    break;
    i++;
    }
    {
    if(i==n)
    m=1;
    }   
    return m;
}   
main()
{
    int n,k;
    
    scanf("%d",&n);
    for (int i=3;i<=(n/2);i++)
    {   k=n-i;
        {if (f(i)==1&&f(k)==1)
        printf("%d %d\n",i,k);
        }
    }
    getchar();
    getchar();
    return 0;
}

      
      
