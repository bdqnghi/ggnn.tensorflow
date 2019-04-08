
double main()
{
	double yuxian, s, area,x;
	double a, b, c, d, angle;
	scanf("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &angle);
	x = angle*0.5;
    yuxian = cos(x*2*3.1415926/360);
	s = 0.5*(a+b+c+d);//???1/2???0.5
	if( ( (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*yuxian*yuxian ) < 0)
		printf("Invalid input");
	else
	{
		area = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*yuxian*yuxian);
	    printf("%.4lf", area);
	}
	return 0;
}