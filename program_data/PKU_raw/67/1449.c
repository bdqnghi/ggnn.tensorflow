int main()
{
	int n,i,a[100],b[100];
	double c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);}
	c[0]=(double)b[0]/a[0];
	for(i=1;i<n;i++){
		c[i]=(double)b[i]/a[i];
		if((double)(c[i]-c[0])>0.05)
			printf("better\n");
		if((double)(c[i]-c[0])<-0.05)
			printf("worse\n");
		if((double)(c[i]-c[0]<=0.05)&&(double)(c[i]-c[0])>=-0.05)
			printf("same\n");
	}
	return 0;
}
