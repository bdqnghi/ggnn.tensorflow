
int main()
{
	float a,b,c,d,e,f,s,k,h;
	scanf ("%f%f%f%f%f",&a,&b,&c,&d,&e);
	f=(3.1415926*e)/360;
	s=(a+b+c+d)/2;
	k=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f));
	if (((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f))<0)
		printf ("Invalid input");
	else
		printf("%.4f",k);
}
