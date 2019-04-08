
int main(){
	double c,d,e,f,g,h,i,s;
	scanf("%lf%lf%lf%lf%lf",&c,&d,&e,&f,&g);
	i = (g/360)*PI;
	s = (c+d+e+f)/2.0;
	h = (s-f)*(s-e)*(s-c)*(s-d) - e*f*c*d*(cos(i))*(cos(i)); //?????????
	
	if(h<0){
		printf("Invalid input\n");
	}
	else{
	double a, x2, x1;
	a = h;
	x1 = 1;
	x2 = (x1+a/x1)/2.0;
	while(x2-x1 > JINGDU || x1-x2 > JINGDU){
		x1 = x2;
		x2 = (x1+a/x1)/2.0;
		} 
	printf("%.4f\n",x2);
	}
	return 0;
}

