void s(float a,float b,float c,float d,float e)
{
	float f,g,h;
	f=(a+b+c+d)/2;
	g=(e/360)*3.1415926;
	if(((f-a)*(f-b)*(f-c)*(f-d)-a*b*c*d*cos(g)*cos(g))>0)
	{
		h=sqrt((f-a)*(f-b)*(f-c)*(f-d)-a*b*c*d*cos(g)*cos(g));
		printf("%.4f\n",h);
	}
	if(((f-a)*(f-b)*(f-c)*(f-d)-a*b*c*d*cos(g)*cos(g))<=0)
	{
		printf("Invalid input\n");
	}
}
void main()
{
	float S,a,b,c,d,e;
	scanf("%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&e);
	s(a,b,c,d,e);
}

