int main()
{
  int a[100][100],b[100][100],c[100][100],m,n,p,i,j,k;
  scanf("%d%d",&m,&n);
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  scanf("%d%d",&n,&p);
  for(i=0;i<n;i++)
   for(j=0;j<p;j++)
    scanf("%d",&b[i][j]);
  for(i=0;i<100;i++)
   for(j=0;j<100;j++)
    c[i][j]=0;
  for(i=0;i<m;i++)
    for(j=0;j<p;j++)
      for(k=0;k<n;k++)
        c[i][j]+=a[i][k]*b[k][j];
  for(i=0;i<m;i++)
   for(j=0;j<p;j++)
    printf("%d%c",c[i][j],(j==(p-1)?'\n':' '));
  scanf("%d",&i);
  return 0;
}  
