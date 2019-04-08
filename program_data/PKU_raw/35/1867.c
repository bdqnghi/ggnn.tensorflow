int main()
{
  int a[10][10],m,n,i,j,max,p,is;
  scanf("%d,%d",&m,&n);
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
  for(i=0;i<m;i++)
  {
	max=a[i][0];
	p=0;
	for(j=1;j<n;j++)
	if(max<a[i][j])
	{max=a[i][j];p=j;}
	is=1;
	for(j=0;j<m;j++)
		if(a[j][p]<a[i][p])
	{is=0;break;}
	if(is){printf("%d+%d\n",i,p);return 0;}
  }
  printf("No\n");
  return 0;
}
