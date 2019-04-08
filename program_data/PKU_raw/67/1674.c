int main(){
	double a[1000],b[1000],c,d;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&a[i],&b[i]);
	}
	for(i=1;i<n;i++)
	{
		c=b[0]/a[0];
		d=b[i]/a[i];
		if((d-c)>0.05)
		printf("better\n");
		else if((c-d)>0.05)
			printf("worse\n");
		else
			printf("same\n");
	}
	return 0;
}