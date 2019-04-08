void main()
{
	int i,t=0,a[50],max,lower,k=0;
	char c[50];
	do
	{
		scanf("%d%c",&a[t],&c[t]);
		t++;
	}
	while(c[t-1]==',');
	max=a[0];
	for(i=0;i<=t-1;i++)
	{
		if(a[i]>max)max=a[i];
		
	}
	for(i=0;i<=t-1;i++)
	{
		if(a[i]<max)k=k+1;
		else
			k=k+0;
	}
	if(k==0)
		printf("No\n");
	else
	{
		for(i=0;i<=t-1;i++)
		{
			if(a[i]<max)
			{
				lower=a[i];
				break;
			}
			else
				continue;
		}
		for(i=0;i<=t-1;i++)
		{
			if((a[i]>lower)&&(a[i]<max))
				lower=a[i];
		}
		printf("%d\n",lower);
	}
}





