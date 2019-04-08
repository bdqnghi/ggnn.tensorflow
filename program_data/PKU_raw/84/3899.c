void main()
{
	int n,a,i,b,c,max1,max2;
	scanf("%d",&n);
	i=1;
    scanf("%d",&a);
    scanf("%d",&b);
	if(a<b)
	{
		max1=b;
		max2=a;
	}
	else if(a>b)
	{
		max1=b;
		max2=a;
	}

	while(i<=(n-2))
	{
		scanf("%d",&c);
		if(c>=max2&&c<max1)
		{
			max2=c;
			max1=max1;
		}
		else if(c<max2)
		{
			max2=max2;
			max1=max1;
		}
		else if(c>=max1)
		{
			max2=max2;
			max1=c;
		}
		i++;
	}
	printf("%d\n",max1);
	printf("%d",max2);
}

