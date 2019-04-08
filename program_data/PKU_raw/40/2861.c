double S(double a,double b,double c,double d,double e);

int main(){
	double bian[4],jiao,banjiao;
	double z;
	int i;
	for(i=0;i<4;i++){
		scanf("%lf",&bian[i]);
	}
	scanf("%lf",&jiao);
	banjiao=jiao/360.0*PI;
	z=S(bian[1],bian[2],bian[3],bian[0],banjiao);
	if(z>0){
		printf("%.4lf",z);
	}else{
		printf("Invalid input");
	}
	return 0;
}
double S(double a,double b,double c,double d,double e){
	double jieguo,s,zhi;
	s=(a+b+c+d)/2.0;
	zhi=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(e),2);
	jieguo=sqrt(zhi);
	
	return(jieguo);
}
