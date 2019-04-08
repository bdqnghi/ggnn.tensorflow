void main()
{
	float a,b,c,d,s,angle2;
	double S,sum,PI=3.1415926,angle;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	s=(a+b+c+d)/2;
	scanf("%f",&angle2);
	angle=angle2/2/180*PI;
	sum=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(angle)*cos(angle);
	if(sum>=0)
	{
    	S = sqrt(sum);
		printf("%.4f",S);
	}
	else printf("Invalid input");

}

