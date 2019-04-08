int main()
{
	int a[100000];
	int n,i,k,num=0;
	int *p=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	scanf("%d",&k);
	for(i=0;i<n-num;i++)
	{
		if(*(p+i)==k)
		{
			int *j=p+i;
			for(;j<a+n-num;j++)
			{
				*j=*(j+1);
			}
			i--;
			num++;
		}
	}
	for(i=0;i<n-num-1;i++)
	{
		printf("%d ",*(p+i));
	}
printf("%d",*(p+n-num-1));
	return 0;
}