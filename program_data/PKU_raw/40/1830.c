int main(){
    double a, b, c, d, e, k, s, S;
    scanf("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
    s = (a+b+c+d)/2;
    #define q 3.1415926
	S = sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*q/360)*cos(e*q/360));
	k =(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*q/360)*cos(e*q/360);
	if(k>0){
		printf("%.4lf", S);
	}
	else if(k<0){
		printf("Invalid input");
	}
     return 0;
}