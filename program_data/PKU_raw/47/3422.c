int main()
{
  int sz[max],dx[max],n,i,m;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  scanf("%d",&(sz[i]));
  }
  for(m=0,i=n-1;i>0,m<n-1;i--,m++)
  {
  dx[m]=sz[i];
  printf("%d ",dx[m]);
  }
  dx[n-1]=sz[0];
  printf("%d\n",dx[m]);
return 0;
}
