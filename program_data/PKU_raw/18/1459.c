void f1(int a[][100],int k)
{
	int i,j,min;
	for(j=0;j<k;j++)
	{
		min=a[j][0];
		for(i=1;i<k;i++) { if(a[j][i]<min) min=a[j][i];}
		for(i=0;i<k;i++) {a[j][i]=a[j][i]-min;}
	}
	for(i=0;i<k;i++)
	{
		min=a[0][i];
		for(j=0;j<k;j++) {if(a[j][i]<min) min=a[j][i];}
		for(j=0;j<k;j++)  {a[j][i]-=min;}
	}
}
void f2(int a[][100],int k)
{
	int i,j;
	for(i=0;i<k;i++)
	{
		for(j=1;j<k-1;j++) a[i][j]=a[i][j+1];
	}
	for(i=0;i<k;i++)
	{
		for(j=1;j<k-1;j++) a[j][i]=a[j+1][i];
	}
}
main()
{
	int n,z,k;
	scanf("%d",&n);k=n;
	for(z=0;z<n;z++)
	{
		int i,j,sum=0;
		int a[100][100];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)  scanf("%d",&a[i][j]);
		}
		k=n;
		for(k;k>1;k--)
		{
			f1(a,k);
			sum+=a[1][1];
			f2(a,k);
		}
		printf("%d\n",sum);
	}
	return 0;
}