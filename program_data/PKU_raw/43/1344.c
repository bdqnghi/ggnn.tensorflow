int main()
{
  int m,i,j,k;
  scanf("%d",&m);
  for(i=3;i<=m/2;i++)
{
  for(j=2;j<i;j++)
  if(i%j==0) break;

  if(j<i) continue;
    for(k=2;k<m-i;k++)

        if((m-i)%k==0) break;

  if(k<(m-i)) continue;
  printf("%d %d\n",i,m-i);
}
  return 0;
}