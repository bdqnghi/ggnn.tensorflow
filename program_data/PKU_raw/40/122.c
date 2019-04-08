int main()
{
	double a,b,c,d,e,s,S;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	s = (a+b+c+d)/2; 
	if ((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*PI/360)*cos(e*PI/360)<0)
	{printf("Invalid input");return 0;}
	S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*PI/360)*cos(e*PI/360));
	printf("%.4f\n",S);
	return 0;
}

