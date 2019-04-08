int main()
{
    int n,i,sum1=0,x[10];
	double sum2=0,m[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%d",&x[i]);
		sum1+=x[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%lf",&m[i]);
		if(m[i]>=90)m[i]=4;
		else if(m[i]>=85)m[i]=3.7;
        else if(m[i]>=82)m[i]=3.3;
        else if(m[i]>=78)m[i]=3.0;
        else if(m[i]>=75)m[i]=2.7;
        else if(m[i]>=72)m[i]=2.3;
        else if(m[i]>=68)m[i]=2.0;
        else if(m[i]>=64)m[i]=1.5;
        else if(m[i]>=60)m[i]=1;
		else m[i]=0;
	}
	for(i=0;i<n;i++)
	{
        sum2+=(x[i]*m[i]);
	}
	printf("%.2lf",sum2/sum1);
	return 0;
}