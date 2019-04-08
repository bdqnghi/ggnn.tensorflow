int main()
{
	int n,i;
	double a,b,c,d,e,s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf%lf%lf",&a,&b,&c);
		d=b*b-4*a*c;

		e=(-1)*b/(2*a);
		if(d>0){
			s=sqrt(d)/(2*a);
			printf("x1=%.5lf;x2=%.5lf\n",e+s,e-s);
		}
		else if(d<0){
			s=sqrt((-1)*d)/(2*a);
			if(e==0)e=0-e;
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",e,s,e,s);
		}
		    else{
			printf("x1=x2=%.5lf\n",e);
		}
	}
	return 0;
}