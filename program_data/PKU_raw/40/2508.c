int main(){
	int i;
	double a,b,c,d,e,f,s,S,p,sz[5];
	for(i=0;i<5;i++){
		scanf("%lf",&sz[i]);
	}
	a=sz[0];
	b=sz[1];
	c=sz[2];
	d=sz[3];
	e=sz[4];
	f=(e/360)*PI;
	s=(a+b+c+d)/2;
	p=((s-a)*(s-b)*(s-c)*(s-d))-(a*b*c*d*cos(f)*cos(f));
	if(p<0){
		printf("Invalid input");
	}
	else{
			S=sqrt(p);
		printf("%.4lf",S);
	}
	return 0;
}