
void main()
{
	int i,n;
	int a[100];
	scanf("%d",&n);
	int* p=a;
	for(i=0;i<n;i++)
		scanf("%d",p++);
	int* q=a;
	p--;
	int *end=p;
	while(q<=p)
	{
		int temp=*p;
		*p=*q;
		*q=temp;
		q++;
		p--;
	}
	p=a;
	printf("%d",*(p++));
	for(;p<=end;p++)
		printf(" %d",*p);
}