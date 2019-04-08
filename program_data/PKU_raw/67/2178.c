int main()
{int n,i;
	double a,b,c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){scanf("%lf %lf",&a,&b);c[i]=b/a;}
	for(i=1;i<n;i++){if(c[i]-c[0]>0.05)printf("better\n");
		else if(c[0]-c[i]>0.05)printf("worse\n");
		else{printf("same\n");}}

    
}