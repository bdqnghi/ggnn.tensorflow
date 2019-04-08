int main()
{
    int m,q,n,i,j,t;
    scanf("%d %d",&m,&q);
    int a[100][100];
    int b[100][100];
    int c[100][100];
    for(i=0;i<m;i++)
    { scanf("\n%d",&a[i][0]);
      for(j=1;j<q;j++)
      scanf(" %d",&a[i][j]);
      }
      scanf("%d %d",&q,&n);
     for(i=0;i<q;i++)
    { scanf("\n%d",&b[i][0]);
      for(j=1;j<n;j++)
      scanf(" %d",&b[i][j]);
      } 
      for(i=0;i<m;i++)
      { 
        for(j=0;j<n;j++)
        {   c[i][j]=0;
        for(t=0;t<q;t++)
        {c[i][j]=(a[i][t])*(b[t][j])+c[i][j];}} }
      for(i=0;i<m;i++)
     { printf("\n%d",c[i][0]);
        for(j=1;j<n;j++)
        printf(" %d",c[i][j]);}
        return 0;
        }
            