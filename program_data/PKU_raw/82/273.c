
int main()
{
	int n,a,b,i;
	int count=0,t=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
		if (a>=90 && a<=140 && b>=60 && b<=90)
			count++;
		else
			if (count>t)
			{
				t=count;
				count=0;
			}
			else
				count=0;
	}
	if (count>t)
	{
		printf("%d\n",count);
	}
	else
	{
		printf("%d\n",t);
	}
	return 0;
}