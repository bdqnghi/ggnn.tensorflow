
int a[100][100];
int main()
{
  int k,m,n,sum,i,j;
  scanf("%d",&k);
  while(k--)
  {
    memset(a,0,sizeof(a));
    scanf("%d%d",&m,&n);
    sum=0;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
       scanf("%d",&a[i][j]);
       if(i==0||i==m-1||j==0||j==n-1)
       sum+=a[i][j];
    }
    
    printf("%d\n",sum);
}
     return 0;
}
