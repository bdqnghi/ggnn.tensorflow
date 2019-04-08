
int main(int argc, char* argv[])
{
    int n,i;
	scanf("%d",&n);i=n;
	double a[n],b[n],c[n];
	double x1[n],x2[n];
	for(;n>0;n--){
		scanf("%lf %lf %lf",&a[n],&b[n],&c[n]);
		if(b[n]*b[n]-4*a[n]*c[n]<0){			 
			 x1[n]=-b[n]/(2*a[n]);
		     x2[n]=sqrt(4*a[n]*c[n]-b[n]*b[n])/(2*a[n]);
		}
        else {
		        x1[n]=(-b[n]+sqrt(b[n]*b[n]-4*a[n]*c[n]))/(2*a[n]);
                x2[n]=(-b[n]-sqrt(b[n]*b[n]-4*a[n]*c[n]))/(2*a[n]);
			}
	}
	for(;i>0;i--){
		if(b[i]*b[i]-4*a[i]*c[i]>0)  printf("x1=%.5lf;x2=%.5lf\n",x1[i],x2[i]);
        else if(x1[i]-x2[i]==0)  printf("x1=x2=%.5lf\n",x1[i]);
		else if(b[i]*b[i]-4*a[i]*c[i]<0)   printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1[i],x2[i],x1[i],x2[i]);
	}
	return 0;
}