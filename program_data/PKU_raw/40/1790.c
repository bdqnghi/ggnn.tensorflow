int main(){
	double a,b,c,d,s,k,n;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&n);
	n=n/360*2*PI;
	s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(n/2)*cos(n/2)<0){
		printf("Invalid input");
		return 0;
	}
	k=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(n/2)*cos(n/2));
	printf("%.4lf",k);
	return 0;
}

