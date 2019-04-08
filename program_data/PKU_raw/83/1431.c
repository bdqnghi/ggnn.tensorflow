int main()
{
	int n,a[10];
	float b[10],x,y=0,sum=0;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{	
		scanf("%f",&b[i]);
	}
	for(i=0;i,n;i++)
	{
	if(b[i]<=100&&b[i]>=90)
		b[i]=4.0;
	else if(b[i]<=89&&b[i]>=85)
		b[i]=3.7;
	else if(b[i]<=84&&b[i]>=82)
		b[i]=3.3;
	else if(b[i]<=81&&b[i]>=78)
		b[i]=3.0;
	else if(b[i]<=77&&b[i]>=75)
		b[i]=2.7;
	else if(b[i]<=74&&b[i]>=72)
		b[i]=2.3;
	else if(b[i]<=71&&b[i]>=68)
		b[i]=2.0;
	else if(b[i]<=67&&b[i]>=64)
		b[i]=1.5;
	else if(b[i]<=63&&b[i]>=60)
		b[i]=1.0;
	else if(b[i]<60)
		b[i]=0;
	x=b[i]*a[i];
	y=y+x;
	}
	printf("%.2f",y/sum);
	return 0;
}

	
