int m,n,i,y,q=12;
main()
{
    scanf("%d",&m);
    for(n=3;n<=m-2;n++)
    {
        for (i=2;i<=n-1;i++)
        {
            if(n%i==0)
                y=1;
        
        }
        if (y!=1)
        {
            for (i=2;i<=n+1;i++)
            {
                if((n+2)%i==0)
                    y=1;
            
            }
            if (y!=1)
            {
                printf("%d %d\n\n",n,n+2);
                q=3;
                
            }
                
        
        }y=12;
    }
    if(q==12)
    printf("empty");
}