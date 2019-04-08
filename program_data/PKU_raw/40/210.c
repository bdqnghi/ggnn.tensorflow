double mianji(double a,double b,double c,double d,double e){
	double s,m,n,p;
	s=1/2.0*(a+b+c+d);
	p=e/180*pai;
	m=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(p/2.0),2);
	if(m<0)
		printf("Invalid input\n");
	else{
               n=sqrt(m);
	      return n;
         }
}
int main(){
	double a,b,c,d,e;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	double n;
	n=mianji(a,b,c,d,e);
	printf("%.4lf",n);
	return 0;
}