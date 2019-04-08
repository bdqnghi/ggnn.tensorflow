
double  mianji(double x,double y,double z,double m,double n)
{
	double  pan,s;
	s=(x+y+z+m)/2;
	pan=sqrt((s-x)*(s-y)*(s-z)*(s-m)- x*y*z*m*cos(n*pai/180)*cos(n*pai/180)); 
	if (pan>=0)
		return pan;
	else {
		return -1;
	}
}
int main()
{
	double a,b,c,d,q,mian;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&q);
	mian=mianji(a,b,c,d,q/2);
	if (mian==-1){
	printf("Invalid input\n");
	}
	else {
		printf("%.4lf\n",mian);}
	return 0;
}

