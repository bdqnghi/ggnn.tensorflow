int main()
{
	double a[5],s,S,c,b;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%lf",&a[i]);
	}
	b=a[0]*a[1]*a[2]*a[3]*cos(a[4]/2*pai/180)*cos(a[4]/2*pai/180);
	s=1.0/2*(a[0]+a[1]+a[2]+a[3]);
	c=(s-a[0])*(s-a[1])*(s-a[2])*(s-a[3]);
	if(c<b)
	{
		printf("Invalid input");
	}
	else
	{
		S=sqrt(c-b);
	printf("%.4lf\n",S);
	}
	return 0;
	
}
