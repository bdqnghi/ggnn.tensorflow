int main()
{
	int n,j;
	double a[20],b[20],c[20],x1[20],x2[20];
	scanf("%d",&n);
	for(j=0;j<=n-1;j++)
	{
		scanf("%lf%lf%lf",&a[j],&b[j],&c[j]);
	}
	for(j=0;j<=n-1;j++)
	{
		if(b[j]*b[j]-4*a[j]*c[j]>=0){
			if(b[j]*b[j]-4*a[j]*c[j]>0){
				x1[j]=(-b[j]+sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
		        x2[j]=(-b[j]-sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]);
		        printf("x1=%.5lf;x2=%.5lf\n",x1[j],x2[j]);
			}else {
				x1[j]=x2[j]=-b[j]/(2*a[j]);
				printf("x1=x2=%.5lf\n",x1[j]);
				}
		}		
		else {x1[j]=-b[j]/(2*a[j]);x2[j]=sqrt(4*a[j]*c[j]-b[j]*b[j])/(2*a[j]);if(-b[j]/(2*a[j])!=0){
		      printf("x1=%.5lf",x1[j]);printf("+");printf("%.5lf",x2[j]);printf("i;");
              printf("x2=%.5lf",x1[j]);printf("-");printf("%.5lf",x2[j]);printf("i\n");}
		      else{printf("x1=%.5lf",-x1[j]);printf("+");printf("%.5lf",x2[j]);printf("i;");
              printf("x2=%.5lf",-x1[j]);printf("-");printf("%.5lf",x2[j]);printf("i\n");}
		}
	}
	return 0;
}