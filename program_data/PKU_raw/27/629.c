int main(){
	double a,b,c;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
	if(b!=0){
		if(b*b-4.0*a*c==0){
			printf("x1=x2=%.5lf\n",(double)(-b/(2*a)));
			}else{
			if(b*b-4.0*a*c>0) printf("x1=%.5lf;x2=%.5lf\n",(-1.0*b+sqrt(b*b-4*a*c))/(2.0*a),(-1.0*b-sqrt(b*b-4*a*c))/(2.0*a));
			else  printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-1.0*b/(2.0*a),sqrt(abs(b*b-4*a*c))/(2.0*a),-1.0*b/(2.0*a),sqrt(abs(b*b-4*a*c))/(2.0*a));
			}
		}else{
			if(b*b-4.0*a*c==0){
			printf("x1=x2=%.5lf\n",(double)0.00000);
			}else{
			if(b*b-4.0*a*c>0) printf("x1=%.5lf;x2=%.5lf\n",(sqrt(b*b-4*a*c))/(2.0*a),(sqrt(b*b-4*a*c))/(2.0*a));
			else  printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",sqrt(abs(b*b-4*a*c))/(2.0*a),sqrt(abs(b*b-4*a*c))/(2.0*a));
			}
			}
		}
	return 0;
	}
