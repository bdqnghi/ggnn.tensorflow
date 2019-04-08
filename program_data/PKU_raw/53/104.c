int main()
{
	int i,j,n,a[300];
	int *p;
	p=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=797)
		{
			for(j=1;j<n-i;j++)
			{
			
				if(*(p+i)==*(p+i+j))
					*(p+i+j)=797;
			}
		}
	}
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		if(*(p+i)!=797)
			printf(",%d",*(p+i));
	}
	return 0;
}


