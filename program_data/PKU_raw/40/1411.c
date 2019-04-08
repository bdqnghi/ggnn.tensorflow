
int main(){
	double a,b,c,d,e,S;
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
	if((((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d) - a*b*c*d*cos(e/360*PI)*cos(e/360*PI))>=0){
	S=sqrt(((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d) - a*b*c*d*cos(e/360*PI)*cos(e/360*PI));
	printf("%.4f",S);
	}else{
		printf("Invalid input");
	}

	
	return 0;

}
 
