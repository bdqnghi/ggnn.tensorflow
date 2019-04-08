struct
{float a;
float c;
}num[401];
void main()
{ 
	int n,i,j;
	float sum=0,b,h=0,k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%f",&num[i].a);
	for(i=0;i<n;i++)
	{
		sum=sum+num[i].a;
	}
	b=sum/n;
	for(i=0;i<n;i++)
	{
		num[i].c=fabs(num[i].a-b);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(num[i].c<num[i+1].c)
			{num[400]=num[i];
			num[i]=num[i+1];
			num[i+1]=num[400];
		}}
	}
	for(i=1;i<n;i++)
	{
		if(num[i].c==num[0].c)
			h=h+1;
	}
	for(j=0;j<h-1;j++)
	{
		for(i=0;i<h-1;i++)
		{
			if(num[i].c>num[i+1].c)
			{num[400]=num[i];
			num[i]=num[i+1];
			num[i+1]=num[400];
		}}
	}
	printf("%.0f",num[0].a);
	for(i=1;i<h+1;i++)
		printf(",%.0f",num[i].a);
}