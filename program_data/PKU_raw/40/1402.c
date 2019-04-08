int main()
{
	double a[5],S,s,q,w;
	scanf("%lf%lf%lf%lf%lf",&(a[1]),&(a[2]),&(a[3]),&(a[4]),&(a[5]));
	s=(a[1]+a[2]+a[3]+a[4])/2;
	w=(a[5]*PI)/360;
	q=(s-a[1])*(s-a[2])*(s-a[3])*(s-a[4])-a[1]*a[2]*a[3]*a[4]*cos(w)*cos(w);
	if(q>=0)
	{
		S=sqrt(q);
		printf("%.4lf",S);
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
}
