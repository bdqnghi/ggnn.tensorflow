
int main()
{
	int n,t,max,max2,i;
	scanf("%d",&n);
	scanf("%d",&t);
	max=max2=t;
	for (i=1;i<n;i++)
	{
		scanf("%d",&t);
		if (t>max)
		{
			max2=max;
			max=t;
		}
		else if (t>max2)
			max2=t;
		}
	printf("%d\n",max,max2);
	printf("%d\n",max2);
	return 0;
}