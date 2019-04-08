double function(int x)
{
	if(x>=90&&x<=100)
	{
		return 4.0;
	}
    else if(x>=85&&x<=89)
	{
		return 3.7;
	}
	else if(x>=82&&x<=84)
	{
		return 3.3;
	}
	else if(x>=78&&x<=81)
	{
		return 3.0;
	}
	else if(x>=75&&x<=77)
	{
		return 2.7;
	}
	else if(x>=72&&x<=74)
	{
		return 2.3;
	}
	else if(x>=68&&x<=71)
	{
		return 2.0;
	}
	else if(x>=64&&x<=67)
	{
		return 1.5;
	}
	else if(x>=60&&x<=63)
	{
		return 1.0;
	}
	else if(x<60)
	{
		return 0;
	}
}
int main()
{
	int n,j,sum1=0;
	double sum2=0;
	int a[10],b[10];
	double c[10];
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>a[j];
		sum1+=a[j];
	}
	for(j=0;j<n;j++)
	{
		cin>>b[j];
		c[j]=function(b[j]);
		sum2+=c[j]*a[j];
	}
	printf("%.2f\n",sum2/sum1);
	return 0;
}