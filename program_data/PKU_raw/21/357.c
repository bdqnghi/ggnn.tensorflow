struct num
{
   int a;
   double b;
}num[300];
void main()
{
	int n,i,j;
	double sum=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i].a);
		sum=sum+num[i].a;
	}
	t=sum/n;
	for(i=0;i<n;i++)
	{
		if(num[i].a>t)
			num[i].b=num[i].a-t;
		else
			num[i].b=t-num[i].a;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(num[j].b<num[j+1].b)
			{
				num[300]=num[j];
				num[j]=num[j+1];
				num[j+1]=num[300];
			}
		}
	}
	if(num[0].b!=num[1].b)
		printf("%d\n",num[0].a);
    else if(num[0].b==num[1].b)
	{
		printf("%d",num[0].a);
		printf(",%d\n",num[1].a);
	}
}

