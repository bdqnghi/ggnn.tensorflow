int main()
{
	int n,i,j,a[400],b[400]={0},*p;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(*(p+j)!=*(p+i))
				b[i]++;
			
		}
		if(b[i]==i)
		printf(",%d",*(p+i));
		
	}
}
