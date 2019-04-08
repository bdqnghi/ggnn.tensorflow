int a[25];
int n;
int changdu(int i)
{
	int j,max;
	max=0;
	if(i==n-1)
	max=0;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<=a[i])
	{
		if(changdu(j)>max)
		max=changdu(j);
	}
	}
	return(max+1);
	
}
int main()
{
	int max,i;
	max=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(changdu(i)>max)
		max=changdu(i);
	}
	printf("%d",max);
	
} 
