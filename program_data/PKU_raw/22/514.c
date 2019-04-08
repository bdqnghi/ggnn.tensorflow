int main()
{
	int d[400];
	int r=0;
	do
	{
		d[r]=-10000;
		r++;
	}while(r<300);
	scanf("%d",&d[0]);
	int i=1;
	do
	{
		scanf(",%d",&d[i]);
		i++;
	}while(i<300);
	int b;
	int a=d[0];
	i=0;
	if(d[1]!=-10000)
	{
		do
		{if(d[i]>a)
		{a=d[i];}
		i++;
		}while(i<300);
		int num=0;
		i=0;


	   do
	   {
			if(a!=d[i])
			{b=d[i];break;}
			i++;
    	}while(i<300);

		i=0;
		do
		{
			if(d[i]>b)
			{
				if(d[i]!=a)
				{b=d[i];}

			}
			i++;
		}while(i<300);
		if(b!=-10000)
		{printf("%d\n",b);}
		else
		{printf("No");}
	}
	else if(d[1]==-10000)
	{printf("No");}
	return 0;
}
		