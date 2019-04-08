int main()
{
	int n,i,j=1,k=1,s,a[10000]={0};
	
	scanf("%d",&n);

	
	for(;j!=0||k!=0;)
	{
		scanf("%d %d",&j,&k);
		a[k]++;
	}
	s=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==n-1)
		{
			printf("%d\n",i);
			s=1;
			break;
		}
	}
	if(s=0)
		printf("NOT FOUND");

	return 0;
}