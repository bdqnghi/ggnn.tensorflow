int main()
{
	int numb,a[100],b[100],i,N=0,y,M=0,m=65535;
	float c[100],S=0,t;
	scanf("%d",&numb);
	for (i=0;i<numb;i++)
	{
		scanf("%d",&a[i]);
		N=N+a[i];
	}
	for (i=0;i<numb;i++)
	{
		scanf("%d",&b[i]);
		if (b[i]<101&&b[i]>89)
		c[i]=4.0;
		if (b[i]<90&&b[i]>84)
		c[i]=3.7;
		if (b[i]<85&&b[i]>81)
		c[i]=3.3;
		if (b[i]<82&&b[i]>77)
		c[i]=3.0;
		if (b[i]<78&&b[i]>74)
		c[i]=2.7;
		if (b[i]<75&&b[i]>71)
		c[i]=2.3;
		if (b[i]<72&&b[i]>67)
		c[i]=2.0;
		if (b[i]<68&&b[i]>63)
		c[i]=1.5;
		if (b[i]<64&&b[i]>59)
		c[i]=1.0;
		if (b[i]<60&&b[i]>=0)
		c[i]=0;
		S=c[i]*a[i]+S;
	}
	t=S/N;
	printf("%.2f",t);
	return 0;
}