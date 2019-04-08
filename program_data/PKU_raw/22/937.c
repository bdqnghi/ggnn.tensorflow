int main()
{
	int a[10000],i=1,m,max,max2=0;
	char b;
	scanf("%d%c",&a[1],&b);
	max=a[1];
	while(b==',')
	{
		i++;
		scanf("%d%c",&a[i],&b);
		if(max<a[i])
		max=a[i];
	}
	for(m=1;m<=i;m++)
	{
		if(a[m]==max)
		continue;
		else
		{
			max2=a[m];
		}
	}
	if(max2==0)
	printf("No");
	else
	{
		for(m=1;m<=i;m++)
		{
			if(a[m]==max)
			continue;
			else
			{
				if(max2<a[m])
				max2=a[m];
			}
		}
		printf("%d",max2);
	}
	return 0;
} 