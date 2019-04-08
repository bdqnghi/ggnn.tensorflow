int main(){
	double a,b,c,d,e,s,m,t;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
		m=(a+b+c+d)/2;
		t=(m-a)*(m-b)*(m-c)*(m-d)-a*b*c*d*cos(e/2*(3.1415926/180))*cos(e/2*(3.1415926/180));
			if(t>0){
	s=sqrt(t);
	printf("%.4lf",s);
			}else if(t<0){
				printf("Invalid input");
			}
			return 0;
}