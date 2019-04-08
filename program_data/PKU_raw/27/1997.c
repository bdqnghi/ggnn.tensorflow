int main(int argc, char* argv[])
{
	int n,j;
	double a[100],b[100],c[100];
	double x1,x2,xi,x0;
	scanf("%d",&n);
	
	for(j=0;j<n;j++)
	{
		scanf("%lf%lf%lf",&a[j],&b[j],&c[j]);
	}
	for(j=0;j<n;j++)
	{

		if((b[j]*b[j]-4*a[j]*c[j])>=0){
			x1=(-b[j]+sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
            x2=(-b[j]-sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
			if(x1!=x2)printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
			else printf("x1=x2=%.5lf\n",x1);
		}
		
		if((b[j]*b[j]-4*a[j]*c[j])<0){
			xi=sqrt(-b[j]*b[j]+4*a[j]*c[j])/(2*a[j]);
			x0=b[j]/(2*a[j]);
			if (x0!=0)x0=-x0;
			
			printf("x1=%.5lf+%.5lfi;",x0,xi);
			printf("x2=%.5lf-%.5lfi\n",x0,xi);
			
		}
		
	}   
	
	return 0;
}
