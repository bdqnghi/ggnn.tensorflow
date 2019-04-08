int main()
{
	int a[100];
	int i=0,n,j,max,second;
	scanf("%d",&n);
	while(i<n)
	{
	scanf("%d",&a[i]);
	i=i+1;
	}
	i=0;
	max=a[0];
	while(i<n)
	{
	if(max<a[i]) 
	{
		max=a[i];
	    j=i;
	}
	    i=i+1;
	}
	i=0;
	if(j!=0) second=a[0];
	else second=a[1];
    while(i<n)
	{
		if(second<a[i]&&a[i]<max) second=a[i];
		i=i+1;
	}
	printf("%d\n%d\n",max,second);
}
