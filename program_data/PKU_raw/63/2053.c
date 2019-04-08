main()
{
      int m,q,n;
      
      //input matrix a
      scanf("%d %d",&m,&q);
      
      int **a;
      a=(int **)malloc(m*sizeof(int *));
      for (int i=0;i<m;i++)
      a[i]=(int *)malloc(q*sizeof(int));
      
      for (int i=0;i<m;i++)
      for (int j=0;j<q;j++)
      scanf("%d",&a[i][j]);
      
      //input matrix b
      scanf("%d %d",&q,&n);
      
      int **b;
      b=(int **)malloc(q*sizeof(int *));
      for (int i=0;i<q;i++)
      b[i]=(int *)malloc(n*sizeof(int));
      
      for (int i=0;i<q;i++)
      for (int j=0;j<n;j++)
      scanf("%d",&b[i][j]);
      
      //deifne matrix c
      int **c;
      c=(int **)malloc(m*sizeof(int *));
      for (int i=0;i<m;i++)
      c[i]=(int *)malloc(n*sizeof(int));
      
      //start multimatrix
      /*for (int i=0;i<m;i++)
      for (int j=0;j<n;j++)
      {
          int s=0;
          for (int w=0;w<q;w++)
          s=s+a[i][w]*b[w][j];
          c[i][j]=s;
      }
      */
      for(int i=0;i<m;i++)
         for(int j=0;j<n;j++)
            for(int k=0;k<q;k++) c[i][j]=c[i][j]+a[i][k]*b[k][j];
      //output
      /*for (int i=0;i<m;i++)
      for (int j=0;j<n;j++)
      {
          if (j==0)
          printf("%d",c[i][j]);
          else if (j==n-1)
          printf(" %d\n",c[i][j]);
          else
          printf(" %d",c[i][j]);
      }
      */
      int i,j;
      for(i=0;i<m;i++)
      {
         for(j=0;j<n-1;j++) printf("%d ",c[i][j]);
         printf("%d\n",c[i][j]);
      }  

}