int main()
{
	char zfc[10000],*pz;
	gets(zfc);
	pz=zfc;
	int cd[100]={0};
	int i;
	for(i=0;*pz!='\0';i++)
	{
		while(*pz!=32&&*pz!='\0')
		{
			cd[i]++;
			pz++;
		}
		if(*pz!='\0')
		{
			pz++;
		}
	}
	int t=i;
	int max=0,min=0;
	for(i=0;i<t;i++)
	{
		if (cd[i]>cd[max])
		{
			max=i;
		}
	}
	for(i=0;i<t;i++)
	{
		if(cd[i]<cd[min])
		{
			min=i;
		}
	}
	int sum[100]={0};
	int j;
    for(i=0;i<t;i++)
	{
		for(j=0;j<=i;j++)
		{
			sum[i]=sum[i]+cd[j]+1;
		}
	}
	if (max==0)
	{
		for(i=0,pz=zfc;i<sum[0]-1;i++,pz++)
		{
			printf("%c",*pz);
		}
	}
	if (max!=0)
	{
		for(i=0,pz=zfc;i<sum[t-1];i++,pz++)
		{
			if(i>=sum[max-1]&&i<(sum[max]-1))
			{
				printf("%c",*pz);
			}
		}
	}
	printf("\n");
	if (min==0)
	{
		for(i=0,pz=zfc;i<sum[0]-1;i++,pz++)
		{
			printf("%c",*pz);
		}
	}
	if (min!=0)
	{
		for(i=0,pz=zfc;i<sum[t-1];i++,pz++)
		{
			if(i>=sum[min-1]&&i<(sum[min]-1))
			{
				printf("%c",*pz);
			}
		}
	}
	return 0;
}
