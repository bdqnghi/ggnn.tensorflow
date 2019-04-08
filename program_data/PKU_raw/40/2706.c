int main()
{
	double a,b,c,d,alf2,mj;
	double Squ(double a1,double b1,double c1,double d1,double alf21);
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&alf2);
	mj=Squ(a,b,c,d,alf2);
	if(mj<0)
		printf("Invalid input\n");
	else
		printf("%.4lf\n",mj);
	return 0;
}
double Squ(double a1,double b1,double c1,double d1,double alf21)
{
	double s,S,alf;
	s=(a1+b1+c1+d1)/2;
	alf=alf21/360*3.1415926;
	
	if(((s-a1)*(s-b1)*(s-c1)*(s-d1) - a1*b1*c1*d1*pow(cos(alf),2))>=0)
	{
		S=sqrt((s-a1)*(s-b1)*(s-c1)*(s-d1) - a1*b1*c1*d1*pow(cos(alf),2));
	
	}
	else
		S=-1;
   return S;
}
