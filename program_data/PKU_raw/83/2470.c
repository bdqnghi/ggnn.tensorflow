void main()
{
	int a[10],c=0,i,n;
	float g=0,b;
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {scanf("%d",&a[i]);c=a[i]+c;}
	for (i=0;i<n;i++)
	{
		scanf("%f",&b);
		if(b>=60&&b<64) b=1;
		else if(b>63&&b<68) b=1.5;
		else if(b>67&&b<72) b=2;
		else if(b>71&&b<75) b=2.3;
		else if(b>74&&b<78) b=2.7;
		else if(b>77&&b<82) b=3.0;
		else if(b>81&&b<85) b=3.3;
		else if(b>84&&b<90) b=3.7;
		else if(b>89&&b<=100) b=4;
		else b=0;
		g=g+b*a[i];
	}
	g=g/c;
	printf("%.2f\n",g);
}