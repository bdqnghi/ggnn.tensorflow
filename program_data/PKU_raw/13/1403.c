int main()
{

	int a[20000],i,n,k,j,m;
	scanf("%d",&n);m=n;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<i;k++)
		{
			if(a[i]==a[k])
			{
		//	m--; 
			n--;
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}i--;
			}
		}
		
	}
	for(i=0;i<n;i++)
    if(i<n-1)
	{printf("%d ",a[i]);}
	else {printf("%d",a[n-1]);}
	return 0;
}
