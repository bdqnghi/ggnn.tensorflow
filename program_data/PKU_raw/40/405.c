int main(int argc, char* argv[])
{
	double a,b,c,d,p,q,s,y;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&p);
	s=0.5*(a+b+c+d);
	q=0.5*p/180*3.1415926;
	if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(q)*cos(q))>=0){
		y=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(q)*cos(q));
	    printf("%.4lf\n",y);
	}
	else{
		printf("Invalid input\n");
	}
	return 0;
}