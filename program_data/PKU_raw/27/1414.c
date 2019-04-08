int main()
{
	int n,i;
	double a,b,c;
	scanf("%d\n",&n);

	for(i=0;i<n;i++){
		scanf("%lf %lf %lf",&a, &b, &c);
		if(b*b-4*a*c!=0){

		if(a>0){
			if(b*b-4*a*c>0){
				printf("x1=%.5lf;x2=%.5lf\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
			}
			else if(b*b-4*a*c<0){
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-b/(2*a),sqrt(4*a*c-b*b)/(2*a),-b/(2*a),sqrt(4*a*c-b*b)/(2*a));
			}
		}

		else if(a<0){
			if(b*b-4*a*c>0){
				printf("x1=%.5lf;x2=%.5lf\n",(-b-sqrt(b*b-4*a*c))/(2*a),(-b+sqrt(b*b-4*a*c))/(2*a));
			}
			else if(b*b-4*a*c<0){
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-b/(2*a),-sqrt(4*a*c-b*b)/(2*a),-b/(2*a),-sqrt(4*a*c-b*b)/(2*a));
			}
		}
		}
	

		else{
			printf("x1=x2=%.5lf\n",-b/(2*a));
		}
	}
	return 0;
}