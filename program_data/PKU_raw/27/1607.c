int main()
{
    int n,j;
	double a[100],b[100],c[100],x1,x2,t;
	double u,v;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%lf%lf%lf",&a[j],&b[j],&c[j]);
	}
	for(j=0;j<n;j++){
		t=b[j]*b[j]-4*a[j]*c[j];
		if(t>0){
			x1=(-b[j] + sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
			x2=(-b[j] - sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		if(t==0){
			x1=(-b[j] + sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
			x2=(-b[j] - sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
			printf("x1=x2=%.5lf\n",x1);
		}
		if(t<0){
			u=-b[j]/(2*a[j]);
			v=sqrt(-(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",u,v,u,v);
		}
	}
return 0;
}