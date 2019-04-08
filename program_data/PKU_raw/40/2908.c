double mianji(double a,double b,double c,double d,double alpha){
	double jiao,s,S,S2;
	jiao=alpha/180*PI/2;
	s=(a+b+c+d)/2;
	S2=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(jiao)*cos(jiao);
	if(S2<0){
	return 0;
	}else{
	S=sqrt(S2);
	return S;
	}
}
int main(int argc, char* argv[])
{
	double a,b,c,d,alpha;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&alpha);
	if(mianji(a,b,c,d,alpha)==0){
		printf("Invalid input\n");
	}else{
		printf("%.4lf\n",mianji(a,b,c,d,alpha));
	}
	return 0;
}