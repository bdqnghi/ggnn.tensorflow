int n;
int main()
{
	scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		double a,b,c;
		double x1 = 0,x2 = 0;
		scanf("%lf%lf%lf",&a,&b,&c);
		if(b * b - 4 * a * c > 0){
			x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
			x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		else {
			if(b * b - 4 * a * c == 0){
			x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
			printf("x1=x2=%.5lf\n",x1);
			}
			else{
				x1 = sqrt(4 * a * c - b * b) / (2 * a);
				if(b == 0)
				printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",x1,x1);
				else
				printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",(-1 * b) / (2 * a),x1,(-1 * b) / (2 * a),x1);
			}
		}
	}
	return 0 ;
}