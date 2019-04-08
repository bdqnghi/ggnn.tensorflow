
int main()
{
	int a[PI];
	int i,sum,num,tmp;

	scanf("%d",&num);
	sum=0;
	for (i=1;i<=num;i++)
	{
		a[0]=i%10;
		a[1]=i/10;
		tmp=i%7;
		if (a[0]!=7&&a[1]!=7&&tmp!=0)
		{
			sum+=i*i;
		}
	}
	printf("%d",sum);
	return 0;
}
