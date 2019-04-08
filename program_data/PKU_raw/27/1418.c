int main()
{
	double a[len],b[len],c[len],x[len],y[len],x1,x2,d;
	int n,i;
	char m='i';
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n;i++){
		if((b[i]*b[i]-4*a[i]*c[i])>0){
			x[i]=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
		    y[i]=(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
		    printf("x1=%.5lf;x2=%.5lf\n",x[i],y[i]);
		}
		if((b[i]*b[i]-4*a[i]*c[i])==0){
			printf("x1=x2=%.5lf\n",-b[i]/(2*a[i]));
		}
		if((b[i]*b[i]-4*a[i]*c[i])<0){
           d=sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i]);
		   printf("x1=%.5lf+%.5lf%c;x2=%.5lf-%.5lfi\n",-b[i]/(2*a[i]),d,m,-b[i]/(2*a[i]),d,m);
		}
	}
	return 0;
}