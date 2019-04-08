
int main()
{
	int n,i,a[10],b[10],sum;
	double GPA,c,d;
	GPA=0,sum=0,c=0.0,d=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		if(b[i]<=100&&b[i]>=90)
		{
			c=4.0;
		}
		else if(b[i]<=89&&b[i]>=85)
		{
			c=3.7;
		}
		else if(b[i]<=84&&b[i]>=82)
		{
			c=3.3;
		}
		else if(b[i]<=81&&b[i]>=78)
		{
			c=3.0;
		}
		else if(b[i]<=77&&b[i]>=75)
		{
			c=2.7;
		}
		else if(b[i]<=74&&b[i]>=72)
		{
			c=2.3;
		}
		else if(b[i]<=71&&b[i]>=68)
		{
			c=2.0;
		}
		else if(b[i]<=67&&b[i]>=64)
		{
			c=1.5;
		}
		else if(b[i]<=63&&b[i]>=60)
		{
			c=1.0;
		}
		else
		{
			c=0.0;
		}
		d+=c*(a[i]*1.0);
	}
	GPA+=d/(sum*1.0);
	printf("%.2lf",GPA);
	return 0;
}