main()
{
     int num[1000][300],n[1000],m[1000],f[1000];
     int i,j,k,l,M,N,T,t,x;
     i=0;
     while(i>=0)
       {scanf("%d %d",&n[i],&m[i]);
        if(n[i]==0&&m[i]==0)
         {i=i+1;
          break;}
        else  
          i=i+1;}
     T=i;
     for(i=1;i<=T;i++)
       for(j=1;j<=n[i-1];j++)
        num[i-1][j]=1;
     for(i=1;i<=T;i++)
      {N=n[i-1];
       M=m[i-1];
       t=N;
       k=1;
       x=0;
       while(t>1)
        { do {
               if(num[i-1][k]==1)
               {x=x+1;
                k=k+1;}
               else
                k=k+1;
               if(k==(N+2))
                k=1;}
          while(x<M);
          num[i-1][k-1]=0;
          t=t-1;
          x=0;     
 }   }    
       for(i=1;i<=T;i++)     
           for(j=1;j<=n[i-1];j++)
             if(num[i-1][j]==1)
               f[i]=j;          
       for(i=1;i<=T;i++)
        for(j=1;j<=n[i-1];j++) 
         if(num[i-1][j]==1)
           printf("%d\n",f[i]);
}  