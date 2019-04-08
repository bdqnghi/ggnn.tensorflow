main ()
{ 
  int i,j,k,m,n,q;
  int a[100][100],b[100][100],c[100][100];
  scanf ("%d%d",&m,&q);
    for (int x=0;x<m;x++)
      for (int y=0;y<q;y++)
        scanf ("%d",&a[x][y]);
  scanf ("%d%d",&q,&n);
    for (int x=0;x<q;x++)
      for (int y=0;y<n;y++)
        scanf ("%d",&b[x][y]);
  for (i=0;i<m;i++)
     for (j=0;j<n;j++)
        {
          c[i][j]=0;
          for (k=0;k<q;k++)
            c[i][j]+=a[i][k]*b[k][j];
        }
  for (int x=0;x<m;x++)
     for (int y=0;y<n;y++)
       {
        if (y<n-1)
         printf ("%d ",c[x][y]);      
        else 
         printf ("%d\n",c[x][y]);
       } 
}