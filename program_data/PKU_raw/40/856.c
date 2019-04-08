int main()
{
	double a,b,c,d,r,w,s,S;
	a=b=c=d=r=0;
	r>0&&r<360;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&r);
	s=(a+b+c+d)/2;
	w=3.1415926*r/360;
	S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(w)*cos(w));
	if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(w)*cos(w))<0)
	{
		printf("Invalid input");
	}
	else
	{
		printf("%.4lf",S);
	}
	return 0;
}
