
int huan(int n,int m)
{

  scanf("%d%d",&n,&m);
  if (n<0||n>4||m<0||m>4)
	  return 0;
  else
  return 1;
}

int main()
{
int a[5][5],n,m,i,j,b[5];

 for (i=0;i<5;i++)
  {
    for (j=0;j<5;j++)
	{
	  scanf("%d",&a[i][j]);
	}
  }
scanf("%d%d",&n,&m);
if (huan(n,m)==0)
  printf("error\n");
if (huan(n,m)==1)
{
	for(i=0;i<5;i++)
	{
	  b[i]=a[n][i];
	  a[n][i]=a[m][i];
	  a[m][i]=b[i];
	}
  for (i=0;i<5;i++)
  {
    for (j=0;j<4;j++)
	{
	  printf("%d ",a[i][j]);
	}
	printf("%d\n",a[i][4]);
  }
}
	return 0;
}
