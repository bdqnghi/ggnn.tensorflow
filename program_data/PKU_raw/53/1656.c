int main ()
{
	int a[300][2],i,j,n;
	for(i=0;i<300;i++)	
	{
		a[i][1]=0;
		a[i][0]=0;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i][0]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j][0]==a[i][0])
				a[j][1]=1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i][1]==0)
		{
			if(i>=1)
			printf(",%d",a[i][0]);
			else if(i==0)
				printf("%d",a[0][0]);
		}
	}
}
