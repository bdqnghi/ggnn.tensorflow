main()
{
      int n,i,j,k,sum;
      scanf("%d",&n);
      int a,b;

      for (i=0;i<n;i++)
      {
          scanf("%d %d",&a,&b);
          sum=0;
          int c[100][100][100];
          for (j=0;j<a;j++)
          {
              for (k=0;k<b;k++)
              scanf("%d",&c[i][j][k]);
              
          }
          for (j=0;j<a;j++)
          sum+=c[i][j][0]+c[i][j][b-1];
          for (k=0;k<b;k++)
          sum+=c[i][0][k]+c[i][a-1][k];
          sum=sum-c[i][0][0]-c[i][0][b-1]-c[i][a-1][0]-c[i][a-1][b-1];
          printf("%d\n",sum);
      }
} 

