int main(){
	float a,b,c,d,e;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&e);
	double s,h;
	h=(((b+c+d-a)/2)*((a-b+c+d)/2)*((a+b-c+d)/2)*((a+b+c-d)/2)-a*b*c*d*(cos(e*3.1415926/360))*(cos(e*3.1415926/360)));
	if(h<0) printf("Invalid input");
	else{ s=sqrt(h); 
	printf("%.4f",s);}}
