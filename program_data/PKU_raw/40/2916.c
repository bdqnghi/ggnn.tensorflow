double calarea(double a,double b,double c,double d,double alpha2);

int main() {
	double A,B,C,D,ALPHA2;
	double area;
	scanf("%lf%lf%lf%lf%lf",&A,&B,&C,&D,&ALPHA2);
	area=calarea(A,B,C,D,ALPHA2);
	if(area!=0){
		printf("%.4lf\n",area);
	}  
	return 0;
}

double calarea(double a,double b,double c,double d,double alpha2){
	double s,S,alpha;
	s=(double)(a+b+c+d)/2;
	alpha=((alpha2*PI)/(180*2));
	S=((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(alpha)*cos(alpha)); 
	if(S>0){
		return sqrt(S);
	}
	else {
		printf("Invalid input\n");
		return 0;
	}
}
