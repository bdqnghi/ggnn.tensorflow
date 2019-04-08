main()
{   
    int n,i,a,x,y;
    scanf("%d",&n);
    for(i=1;i<=n*n;i++)    {scanf("%d",&a);if(a==0) {x=i;break;}
    }
    for(i=x+1;i<=n*n;i++)
    {scanf("%d",&a);if(a==0) y=i;}
    printf("%d",(y/n-x/n-1)*(y%n-x%n-1));
    
    return 0;
}

