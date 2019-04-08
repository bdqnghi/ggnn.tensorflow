// ????????????.cpp : ??????????????
//


int main()
{//declaration
	double a,b,c,d,s,S,angle2,angle,S2;
	const double Pi=3.1415926;
//input
	scanf("%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d);
	scanf("%lf",&angle2);
//process
	angle=angle2/2*2*Pi/360;
	s=(a+b+c+d)/2;
	S2=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle)*cos(angle);
	if(S2>0)printf("%.4f",sqrt(S2));
	else printf("Invalid input");
	return 0;
}

