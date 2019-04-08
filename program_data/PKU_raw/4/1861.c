
main()
{
      int (*p)[100],i,j,k,m,n,flag=0;
      p=(int(*)[100])calloc(100,100*sizeof(int));
      scanf("%d %d",&m,&n);
      for(i=0;i<m;i++)
       for(j=0;j<n;j++)
       scanf("%d",*(p+i)+j);
      for(i=0;i<n;i++)
      { 
        for(k=i;k>=0;k--)
        {
        if(i-k<=m-1) {printf("%d\n",*(*(p+i-k)+k));}
        flag=i;
        }
      }
      if(flag==n-1)
      {
       for(j=1;j<m;j++)
       {
         for(k=j;k<m;k++)
         {
           if((n+j-k-1)<=(n-1)&&(n+j-k-1)>=0)             { printf("%d\n",*(*(p+k)+n+j-k-1));}
         }
         } 
         }
    
}
