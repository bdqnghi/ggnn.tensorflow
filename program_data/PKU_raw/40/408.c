void main()
{
	float a,b,c,d,x,s;	
	scanf("%f\n",&a);
	scanf("%f\n",&b);
	scanf("%f\n",&c);
	scanf("%f\n",&d);
	scanf("%f",&x);
	float y,z;
	y=x*PI/360;
	z=(a+b+c+d)/2; 
	if( sqrt((z-a)*(z-b)*(z-c)*(z-d) - a*b*c*d*cos(y)*cos(y))>=0)
	{
		s=sqrt((z-a)*(z-b)*(z-c)*(z-d) - a*b*c*d*cos(y)*cos(y));
	    printf("%.4f",s);
	}
	else
		printf("Invalid input\n");
}

