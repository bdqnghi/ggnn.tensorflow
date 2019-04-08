int main()
{
	int num[100],str[100];
	int i,j,k,l,m,n,index=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("%d",num[0]);
	for(i=1;i<n;i++)
	{
		index=0;
		for(j=0;j<i;j++)
		{
			if(num[i]==num[j])
				index++;
		}
		if(index==0)
			printf(",%d",num[i]);
	}
}
