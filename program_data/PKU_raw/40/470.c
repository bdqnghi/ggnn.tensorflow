int main()
{
	float a,b,c,d,s,S,m,n;
	float A,e;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&A);
	s=(float)(a+b+c+d)/2;
	n=(s-a)*(s-b)*(s-c)*(s-d);
	e=(float)A*3.1415926/360;
	m=a*b*c*d*cos(e)*cos(e);
	if(n<0)
		printf("Invalid input\n");
	else
	{
	S=sqrt(n-m);

	printf("%.4f\n",S);
	}
	return 0;
}