double main()
{
	double a,b,c,d,w,u,s,m,q;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&w);
	s=(a+b+c+d)/2;
	q=w/2/180*pi;
     u =(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(q)*cos(q);
	 if(u>0)
	 {
	m=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(q)*cos(q));
	printf("%.4f",m);}
	 else
		 printf("Invalid input");
	return 0;
}


