
void main()
{
	int a[500];
	int n,b,i=0,k,p,j;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&b);
		if(b%2!=0)
		{
			a[i]=b;
			i++;
		}
	}
	for(j=0;j<i;j++)
	{
		for(k=j+1;k<i;k++)
		{
			if(a[j]>a[k])
			{
				p=a[j];
				a[j]=a[k];
				a[k]=p;
			}
		}
	}
	printf("%d",a[0]);
	for(j=1;j<i;j++)
	{
		printf(",%d",a[j]);
	}
}
