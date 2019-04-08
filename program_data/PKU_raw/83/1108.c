void main()
{
	int n,i;
	float total=0.0,totalII=0.0,GPA,a[10],b[10],c[10],d[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%f",&a[i]);
	for(i=0;i<n;i++)
	scanf("%f",&b[i]);
	for(i=0;i<n;i++)
	{
		if(b[i]<=100&&b[i]>=90)c[i]=4.0;
		else if(b[i]<=89&&b[i]>=85)c[i]=3.7;
		else if(b[i]<=84&&b[i]>=82)c[i]=3.3;
		else if(b[i]<=81&&b[i]>=78)c[i]=3.0;
		else if(b[i]<=77&&b[i]>=75)c[i]=2.7;
		else if(b[i]<=74&&b[i]>=72)c[i]=2.3;
		else if(b[i]<=71&&b[i]>=68)c[i]=2.0;
		else if(b[i]<=67&&b[i]>=64)c[i]=1.5;
		else if(b[i]<=63&&b[i]>=60)c[i]=1.0;
		else if(b[i]<=60&&b[i]>=0)c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		d[i]=a[i]*c[i];
	}
	for(i=0;i<n;i++)
	{
		total=total+d[i];
		totalII=totalII+a[i];
	}
	GPA=total/totalII;
	printf("%.2f",GPA);
	return;
}