void main()
{
	float a,b,c,d,s,m;
	double e,f,g,h,i,j,k;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&m);
	s=(a+b+c+d)/2;
	e=(s-a)*(s-b)*(s-c)*(s-d);
	k=m*3.1415926/180;
	f=cos(k);
	g=(f+1)/2;
	h=a*b*c*d*g;
	i=e-h;
	if(i<0)
		printf("Invalid input\n");
	else
	{
		j=sqrt(i);
		printf("%.4f\n",j);
	}
}