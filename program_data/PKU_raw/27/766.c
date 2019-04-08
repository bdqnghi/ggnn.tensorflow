int main(){
	int n;cin >> n;
	double a,b,c,x1,x2;
	while(n--){
		cin >> a >> b >> c;
		if((b*b-4*a*c)>0){
			x1 = (-b)/(2*a);
			x2 = (sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1+x2,x1-x2);
		}else if((b*b-4*a*c)<0){
			x1 = (0-b)/(2*a);
			//if(x1 == 0) x1 = 0;
			x2 = (sqrt(4*a*c-b*b))/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,x2,x1,x2);
		} else{
			printf("x1=x2=%.5f\n",(-b)/(2*a));
		}
	}
	return 0;
}