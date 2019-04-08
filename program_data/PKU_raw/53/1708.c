int main ()
{
	int n,a[300][2],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i][0]);
		a[i][1]=1;
	}
	for(i=0;i<n;i++)
	{
		if(a[i][1]==1)
		{
			for(j=i+1;j<n;j++)
				if(a[j][0]==a[i][0]) a[j][1]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i][1]==1) 
		{
			if(i!=0)
			printf(",%d",a[i][0]);
			else printf("%d",a[i][0]);
		}
	}
}
