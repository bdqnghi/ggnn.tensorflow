int main()
{
	char a[5200]={'\0'},b[5200]={'\0'};
	int i,k=0,j=0,t,sum=0,e=0,max=0;
	int x[1100]={0},y[1100]={0};
	int z[1100]={0};
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if('0'<=a[i] && a[i]<='9')
		{
			t=a[i]-'0';
			sum=sum*10+t;
		}
		else
		{
			x[e]=sum;
			e++;
			sum=0;
		}
	}
	x[e]=sum;
	sum=0;
	e=0;
	for(i=0;b[i]!='\0';i++)
	{
		if('0'<=b[i] && b[i]<='9')
		{
			t=b[i]-'0';
			sum=sum*10+t;
		}
		else
		{
			y[e]=sum;
			e++;
			sum=0;
		}
	}
	y[e]=sum;
	e++;
	sum=0;
	for(i=0;i<=1000;i++)
	{
		sum=0;
		for(j=0;j<e;j++)
		{
			if(x[j]<=i && i<y[j])
			{
				sum++;
			}
		}
		z[i]=sum;
	}
	for(i=0;i<=1000;i++)
	{
		if(max<z[i])
		{
			max=z[i];
		}
	}
	printf("%d %d",e,max);


}






	

