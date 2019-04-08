int main()
{
	int n,k,j;
    double a[100],b[100],c[100],p=0.00,q=0.00,m=0.00;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{scanf("%lf%lf%lf/n",&a[k],&b[k],&c[k]);}
	for(j=0;j<n;j++)
	{
		m=b[j]*b[j]-4*a[j]*c[j];
		p=-b[j]/(2*a[j]);
	   if(p==-0)
		p=0.00000;
		if(m<0){
        q=sqrt(-m)/(2*a[j]);
		printf("x1=%.5lf+%.5lfi;x2=%.5f-%.5fi\n",p,q,p,q);}
		if(m==0){
		printf("x1=x2=%.5f\n",p);}
		if(m>0){
			q=sqrt(m)/(2*a[j]);
     	printf("x1=%.5f;x2=%.5f\n",p+q,p-q);}
	}
	return 0;
}

