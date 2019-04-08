int main()
{
	double a,b,c,d,s,S,k,e;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&k);
	k=k/2;
	k=k/180*PI;
	s=(a+b+c+d)/2;
	e=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k)*cos(k);
	if(e<0)
		printf("Invalid input");
	else
	{S = sqrt(e); 
	printf("%.4f",S);
	}
	return 0;
}