int main(int argc, char* argv[])
{
	double a,b,c,d,y,x,S,s,m;
	scanf ("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
	s=(a+b+c+d)/2;
    y=x*PI/180;
	m=cos(y/2);
	if (((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*m*m)<0)
		printf ("Invalid input");
	else{
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*m*m); 
	printf ("%.4lf\n",S);
	}
	return 0;
}