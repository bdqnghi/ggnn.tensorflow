int main()
{
  int k,m,n,i,j1,j2,e1,e2,sum;
  int juzhen[100][100];
  scanf("%d\n",&k);
  for(i=0;i<k;i++)
  {
    scanf("%d %d",&m,&n);
    for(j1=0;j1<m;j1++)
    {
      for(e1=0;e1<n;e1++)
       {
         scanf("%d",&juzhen[j1][e1]);
       }
    }
    sum=0;
    for(j2=0;j2<n;j2++)
    {
      sum=sum+juzhen[0][j2]+juzhen[m-1][j2];
    }
    for(e2=1;e2<m-1;e2++)
    {
      sum=sum+juzhen[e2][0]+juzhen[e2][n-1];
    }
    printf("%d\n",sum);
  }
  return 0;
}
