double pai=3.1415926;
void main()
{
	double a, b, c, d, x, y_hudu;
	double s, S;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);
	scanf("%lf", &x);
	s = (a+b+c+d)/2;
	y_hudu=(x/360)*pai;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(y_hudu)*cos(y_hudu)<0) printf("Invalid input");
	else {S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(y_hudu)*cos(y_hudu));printf("%.4f",S);};
}