int main()
{
	int n,i;
	float per,per1,a1,b1,a,b;
	scanf("%d",&n);
	scanf("%f%f",&a1,&b1);
	per1=b1/a1;
	for(i=1;i<n;i++)
	{
		scanf("%f%f",&a,&b);
		per=b/a;
		if(per-per1>0.05)
		{
			printf("better\n");
		}
		else if(per1-per>0.05)
		{
			printf("worse\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}