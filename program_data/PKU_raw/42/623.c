void main()
{
	int n,i,sum=0,j;
	scanf("%d\n",&n);
	int string[100000];
	int *p=string;
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	int k;
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(string[i]!=k)
		{
			printf("%d",*(p+i));
			break;
		}
	}
	for(j=i+1;j<n;j++)
	{
		if(string[j]!=k)
			printf(" %d",*(p+j));
	}
}

