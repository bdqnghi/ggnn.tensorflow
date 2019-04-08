int main()
{
	int m,n,i,j;
	scanf("%d",&m);
	int *a=(int*)malloc(m*sizeof(int));
	float b[100],f1=1,f2=1,f3;
	for (i=1;i<=m;i++)
	{
		scanf("%d",&a[i-1]);
		b[i-1]=0;
		for (j=1;j<=a[i-1];j++)
		{
			f3=f1+f2;
			b[i-1]+=f3/f2;
			f1=f2;
			f2=f3;
		}
	f1=1,f2=1,f3=0;
	}
	for (i=1;i<=m;i++)
	{printf("%.3f\n",b[i-1]);}
	
	
	
	
}