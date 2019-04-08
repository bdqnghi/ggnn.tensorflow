int main ()
{
	int n,p=0;
	scanf("%d",&n);
	int a[10000];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
	for(int k=1;k<n;k++)
	{
		for(int m=0;m<k;m++)
		{
			if(a[k]==a[m])
			{
				p=1;
				break;
			}
		}
		if(p==0)
			{
			printf(",%d",a[k]);
			}
		else
			{
				p=0;
			}
	}
	return 0;
}
