
int main()
{
	float a,b,c,d,e,s,S;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	s=1.0/2*(a+b+c+d); 
	if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360))<0)
	{
		printf("Invalid input");}
	else {
S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360)); 
	printf("%.4lf",S);}
	return 0;
}

