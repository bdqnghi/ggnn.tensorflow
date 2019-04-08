int n,m,a[5][5];
void jisuan(int n,int m)
{ 
	int b[5],i;
	for(i=0;i<5;i++)
	{
	       b[i]=a[n][i];
		   a[n][i]=a[m][i];
		   a[m][i]=b[i]; 
	}
}
int huanhang(int n,int m)
{
   int b[5],i;
   if(n<=4&&n>=0&&m<=4&&m>=0)
   {
      for(i=0;i<5;i++)
	  {
	       b[i]=a[n][i];
		   a[n][i]=a[m][i];
		   a[m][i]=b[i]; 
	  }
	  return 1;
   }
   else
	    return 0;
}
int main()
{
	int i, j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d", &a[i][j]);
	}
	scanf("%d%d", &n, &m);
	if(huanhang(n,m)==0)
	printf("error\n");
	if(huanhang(n,m)==1)
	{
		jisuan(n,m);
		for(i=0;i<5;i++)
		{
		    for(j=0;j<4;j++)
			    printf("%d ",a[i][j]);
			printf("%d",a[i][4]);
			printf("\n");
		}
	}
	return 0;
}
