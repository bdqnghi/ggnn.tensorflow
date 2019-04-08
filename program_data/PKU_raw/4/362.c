int max(int a,int b)
{
	if(a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int min(int a,int b)
{
	if(a<=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	int a[100][100];
	int hang,lie;
	int i,j,k;
	scanf("%d%d",&hang,&lie);
	for(i=0;i<=hang-1;i++)
	{
		for(j=0;j<=lie-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(k=0;k<=hang+lie-2;k++)
	{
		   for(i=max(0,k-lie+1);i<=min(hang-1,k);i++)
		   {
			   printf("%d\n",a[i][k-i]);
		   }
	}
	return 0;
}