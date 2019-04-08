int F(int m)
{
  int f[m],i;
  for(i=0;i<m;i++)
  {
    if(i==1||i==0)
    {
      f[i]=1;
    }else{
    f[i]=f[i-1]+f[i-2];
    }
  }
  return f[m-1];  
}
int main()
{
  int n,j;
  scanf("%d",&n);
  int s[n],r[n];
  for(j=0;j<n;j++)
  {
    scanf("%d",&s[j]);
    r[j]=F(s[j]);
  }
  for(j=0;j<n;j++)
  {
    printf("%d\n",r[j]);
  }
  return 0;
}