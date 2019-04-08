int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
		double a,b,c,x1,x2;
		scanf("%lf %lf %lf",&a,&b,&c);
		double d=b*b-4*a*c;
		if(d>0){
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
		    x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);}
		else if(d==0){
			x1=-b/(2*a);
			printf("x1=x2=%.5lf\n",x1);}
		else{
			if(b!=0){
			x1=-b/(2*a);
			x2=sqrt(4*a*c-b*b)/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);}
			else{
            x1=b/(2*a);
			x2=sqrt(4*a*c-b*b)/(2*a);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x2,x1,x2);}
		}
	}


	return 0;
}


