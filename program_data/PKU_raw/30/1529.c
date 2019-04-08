main()
{
    int i,j,k=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%7!=0)
        {
            if(i%10!=7)
            {
                if(i>=10&&((i/10)%7)!=0)
                {
                    //printf("%d ",i);
                    k=k+i*i;
                }
                if(i<10)
                {    
                    //printf("%d ",i);
                    k=k+i*i;
                }
            }
        }
    }
    printf("%d\n",k);
    
}
