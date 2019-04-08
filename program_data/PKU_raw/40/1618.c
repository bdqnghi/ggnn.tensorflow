

int main()
{
	double a[4];
	double angle;
	double s=0.0;
	double S=0;
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%lf",&a[i]);
		s+=a[i];
	}
	s/=2;
	scanf("%lf",&angle);
	angle=angle/360*PI;
	S=(s-a[0])*(s-a[1])*(s-a[2])*(s-a[3])-a[0]*a[1]*a[2]*a[3]*cos(angle)*cos(angle);
	if(S<0)
	{
		printf("Invalid input");
		return 0;
	}
	S=sqrt(S);
	printf("%.4lf",S);
	return 0;
}

