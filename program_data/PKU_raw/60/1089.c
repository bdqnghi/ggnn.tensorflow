int sushu(int a)
{
	int i,k;
	k=sqrt(a);
	for(i=2;i<=k;i++)
		if(a%i==0)
			break;
	if(i>k) return 1;
	else return 0;
}

void main()
{
	int n,i,mark=0;
	scanf("%d",&n);
	for(i=3;i<n;i=i+2)
	{
		if(sushu(i)==1)
		{
			if(i+2>n)
				break;
			else if(sushu(i+2)==1)
			{
				printf("%d %d\n",i,i+2);
				mark=1;
			}
		}
	}
	if(mark==0)
		printf("empty");
}
