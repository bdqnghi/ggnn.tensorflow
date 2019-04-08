int main()
{
	double a,b,c,d,pi=3.1415926,S,s,j,m;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&j);
	j=pi*j/360;
	s=(a+b+c+d)/2;
	m=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(j)*cos(j);
	if(m<0)printf("Invalid input");
	else
		{
			S=sqrt(m);
			printf("%.4lf\n",S);
		}
	return 0;
}