void main()
{
	int i=0,max,max2=0,n,d[300];
	char c;
	do
	{
		scanf("%d%c",&d[i],&c);
		i++;
	}while(c==',');
	n=i;
	max=d[0];
	for(i=1;i<n;i++)
	{
		if(d[i]>max)
		{
			max2=max;
			max=d[i];
		}
		else
		{
			if(d[i]>max2&&d[i]<max)
				max2=d[i];
		}
	}
	if(max2==0)printf("No");
	else
		printf("%d",max2);
}
