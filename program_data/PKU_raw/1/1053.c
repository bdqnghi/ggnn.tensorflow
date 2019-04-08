
int f(int a,int x)
{
	int count=1,i;
	for(i=x;i<a;i++)
		if(a%i==0)
			count+=f(a/i,i);
	if(i==a)
		return count;
	else
		return 0;
}

void main()
{
	int n,a;
	scanf("%d",&n);
	for(;n>0;n--)
	{
		scanf("%d",&a);
		if(a==1||a==2)
			printf("1\n");
		else
			printf("%d\n",f(a,2));
	}
}
