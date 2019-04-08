main()
{
      int m,n,i,j,k,l;
      int a[10030];
      int b[10030]; 
      for (i=0;i<10020;i++)
      {
          a[i]=0;
          b[i]=0;
          } 
      scanf("%d",&n);
    
      while (1) 
      {
            scanf("%d %d",&i,&j);
            if ((i==0)&&(j==0)) break; 
            a[j]++;
            b[i]++; 
            }
            k=0; 
      for (l=0;l<n;l++)
      if ((a[l]==n-1)&&(b[l]==0)) 
      {
                                printf("%d\n",l);
                                k=1; 
                                } 
                                if (k==0) printf("NOT FOUND");
                             
                                } 
       
