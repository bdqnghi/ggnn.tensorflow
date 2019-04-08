main()
{
      int m,n,i,j,k,l,sum,t;
       scanf("%d",&m);
       for (i=1;i<=m;i++)
       {
           scanf("%d",&n); 
           sum=60;t=0;          
       for (j=1;j<=n;j++)
       {
           scanf("%d",&l);
           if (sum>l)
           { 
           if (sum-l<3) sum=l;
            else sum=sum-3;
           }
           }   
       printf("%d\n",sum);
       }
    
       }
