int main()
{
	int n,i;
	scanf("%d",&n);
	float a[100],b[100],c[100];
	double x1,x2,m,p,q;
	for(i=0;i<n;i++){
        scanf("%f%f%f",&a[i],&b[i],&c[i]);
	}
        	for(i=0;i<n;i++){
        m = b[i]*b[i]-4*a[i]*c[i];
		if (m > 0){
			x1=(-b[i]+sqrt(m))/(2*a[i]);
		    x2=(-b[i]-sqrt(m))/(2*a[i]);
			printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		    else if (m == 0){
			x1=-b[i]/(2*a[i]);
		    printf("x1=x2=%.5lf\n",x1);
			}
		        else if (m < 0){
                p=-b[i]/(2*a[i]);
		        q=sqrt(-m)/(2*a[i]);
		        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
				}
	}
	return 0;
}
