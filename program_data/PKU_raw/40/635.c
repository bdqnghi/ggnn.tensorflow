int main()
{
	double a,b,c,d,e,s,g,h,i;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	i = e*PI/180;
	s = (a+b+c+d)/2;
	g = (s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(i/2)*cos(i/2);
    h = sqrt(g);
	if(e>0&&e<360)
		if(g>0)
		  printf("%.4lf\n",h);
	    else printf("Invalid input");
	return 0;
}
