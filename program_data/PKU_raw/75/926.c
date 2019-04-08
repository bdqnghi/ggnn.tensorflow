
void main()
{
	int x[1000]={0},y[1000]={0};
	char c;
	int i=1,k,j=0,t,max=0;
	while((c=getchar())!='\n')
	{
		if(c!=',')
		{
			x[i]=x[i]*10+c-'0';
		}
		else i++;
	}
	k=i;i=1;
	//for(i=1;i<=k;i++) printf("%d ",x[i]);
	while((c=getchar())!='\n')
	{
		if(c!=',')
		{
			y[i]=y[i]*10+c-'0';
		}
		else i++;
	}
	printf("%d ",k);
	for(t=0;t<=1000;t++)
	{
		j=0;
		for(i=1;i<=k;i++)
		{
			if(t>=x[i]&&t<y[i])
				j++;
		}
		if(max<j) max=j;
	}
	printf("%d\n",max);
}

	
	

