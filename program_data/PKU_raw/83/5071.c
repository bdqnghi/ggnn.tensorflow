
int main()
{
	int n,a[10],b[10],i;
	double c[10];    
	scanf("%d",&n);               //?????
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);        //????
	}
	for (i=0;i<n;i++)
	{
		scanf("%d",&b[i]);        //????
	}
	for (i=0;i<n;i++)             //????
	{
		if (b[i]>=90)
			c[i]=4.0;
		else if (b[i]>=85)
			c[i]=3.7;
		else if (b[i]>=82)
			c[i]=3.3;
		else if (b[i]>=78)
			c[i]=3.0;
		else if (b[i]>=75)
			c[i]=2.7;
		else if (b[i]>=72)
			c[i]=2.3;
		else if (b[i]>=68)
			c[i]=2.0;
		else if (b[i]>=64)
			c[i]=1.5;
		else if (b[i]>=60)
			c[i]=1.0;
		else 
			c[i]=0;
	}
	double sum1=0,sum2=0,GPA;
	for (i=0;i<n;i++)
	{
		sum1=sum1+a[i]*c[i];  //??????
		sum2=sum2+a[i];       //????
	}
	GPA=sum1/sum2;
	printf("%.2f",GPA);

	return 0;
}