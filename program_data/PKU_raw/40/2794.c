float area(float a,float b,float c,float d,float angle){
	float s,e;
	s=(a+b+c+d)/2;
	e=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(angle/2/180*3.1415926)*cos(angle/2/180*3.1415926);
	if(e<0){
		return -1;
	}
	else{
		return sqrt(e);
	}
}

int main(){
	float a,b,c,d,angle;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&angle);
	if(area(a,b,c,d,angle)==-1){
		printf("Invalid input");
	}else{
		printf("%.4f",area(a,b,c,d,angle));
	}
	return 0;
}