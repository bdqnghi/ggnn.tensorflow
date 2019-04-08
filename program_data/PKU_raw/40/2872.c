
void main()
{
	double square(double x,double y,double z,double w,double m);
	double S,a,b,c,d,M;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&M);
	S=square(a,b,c,d,M);
	if(S>0){
	    printf("%.4lf",sqrt(S));
	}else{
	    printf("Invalid input");
	}
}

double square(double x,double y,double z,double w,double m)
{
	double k;
	double SQUARE;
	k=(x+y+z+w)/2;
	double p,q;
	p=(k-x)*(k-y)*(k-z)*(k-w);
         double hudu;
	hudu=PI*m/180;
	q=x*y*z*w*cos(hudu/2)*cos(hudu/2);
	SQUARE=p-q;
	return SQUARE;
}