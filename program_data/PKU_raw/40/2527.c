int main()
{
	double a,b,c,d,s,p,q,size;			/*p???????????*/
	double sumangel,angel;
	const double PI=3.1415926;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&sumangel);
	s=(a+b+c+d)/2;
	angel=sumangel/180*PI/2;
	q=cos(angel);
	p=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*q*q;
	if(p>=0)
	{
		size=sqrt(p);
		printf("%.4f\n",size);
	}
	else
		printf("Invalid input");
	return 0;
}
