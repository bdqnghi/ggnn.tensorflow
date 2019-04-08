int main(){
	double a,b,c,d,x,y,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
	if(x>0){
		if(x<360){
           s=(a+b+c+d)/2;
	       y=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x/360*3.1415926)*cos(x/360*3.1415926);
	       if(y<0){
		       printf("Invalid input");
		   }else{
		       S=sqrt(y);
		       printf("%.4lf",S);
		   }
		}
	}
	return 0;
}
