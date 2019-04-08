main()
{
    int a[100000],b[100000],i,n,j,k,t=0,x=0;
    scanf("%d",&n);
    for(i=0;;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]==0&&b[i]==0) break; 
        t=t+1;                
    }
    for(i=0;i<t;i++)
    {
        k=0,x=0;            
        for(j=0;j<t;j++)
        {
            if(b[j]==b[i])
            k=k+1; 
            if(a[j]==b[i])
            x=1;               
        } 
        if(k==n-1&&x==0)
        {
        printf("%d",b[i]);
        break;          
        }                
    }
     if(i==t&&k!=n-1)
        printf("NOT FOUND");  
        
}