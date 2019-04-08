int main()
{
	int i,n,point[10],grade[10];
	double pg[10],sum1,sum2,gpa;
	scanf("%d", &n);
	sum1=0;
	sum2=0;
	for(i=0;i<n;i++)
	{
		scanf("%d", &point[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d", &grade[i]);
	}
	for(i=0;i<n;i++)
	{
		if(grade[i]>89&&grade[i]<=100)
		{
			pg[i]=4.0;
		}
		if(grade[i]>84&&grade[i]<=89)
		{
			pg[i]=3.7;
		}
		if(grade[i]>81&&grade[i]<=84)
		{
			pg[i]=3.3;
		}
		if(grade[i]>77&&grade[i]<=81)
		{
			pg[i]=3.0;
		}
		if(grade[i]>74&&grade[i]<=77)
		{
			pg[i]=2.7;
		}
		if(grade[i]>71&&grade[i]<=74)
		{
			pg[i]=2.3;
		}
		if(grade[i]>68&&grade[i]<=71)
		{
			pg[i]=2.0;
		}
		if(grade[i]>63&&grade[i]<=67)
		{
			pg[i]=1.5;
		}
		if(grade[i]>59&&grade[i]<=63)
		{
			pg[i]=1.0;
		}
		if(grade[i]<=59)
		{
			pg[i]=0;
		}
		sum1=sum1+pg[i]*point[i];
		sum2=sum2+point[i];
	}
	gpa=sum1/sum2;
	printf("%.2lf",gpa);
	return 0;
}