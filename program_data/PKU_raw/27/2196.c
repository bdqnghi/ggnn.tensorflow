int main(int argc, char* argv[])
{
	int n,j;
	scanf("%d",&n);
	double a,b,c;
	for(j=0;j<n;j++){
        scanf("%lf %lf %lf",&a,&b,&c);
		if((b*b-4*a*c)>0){
            double x1,x2;
			x1=(-b + sqrt(b*b-4*a*c))/(2*a);
            x2=(-b - sqrt(b*b-4*a*c))/(2*a);
            printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		if((b*b-4*a*c)<0){
			if(b!=0){
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",(-b/(2*a)),sqrt(4*a*c-b*b)/(2*a),(-b/(2*a)),sqrt(4*a*c-b*b)/(2*a));
			}else{
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",0.00000,sqrt(4*a*c-b*b)/(2*a),0.00000,sqrt(4*a*c-b*b)/(2*a));
			}
		}
		if((b*b-4*a*c)==0){
            double x1,x2;
			x1=x2=-b/(2*a);
			printf("x1=x2=%.5lf\n",x1);
		}
	}
	return 0;
}

