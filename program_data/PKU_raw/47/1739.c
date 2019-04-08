int main()
{
	int a[100];
	int *p=a;
	int n,i,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	if(n==1) printf("%d",*p);
	else
	{
	for(i=0;i<=(n-1)/2;i++)
	{
		t=*(p+i);
		*(p+i)=*(p+n-1-i);
		*(p+n-1-i)=t;
	}
	printf("%d",*p);
	for(i=1;i<n;i++)
		printf(" %d",*(p+i));
	}
	printf("\n");
	return 0;
}
	
