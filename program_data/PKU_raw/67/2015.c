void main()
{
	int cases;
	double x,y,rate;
	scanf("%d",&cases);
	cases--;
	scanf("%lf %lf",&x,&y);
	rate=y/x;
	while(cases--){
		scanf("%lf %lf",&x,&y);
		if(y/x-rate>0.05)printf("better\n");
		else if(rate-y/x>0.05)printf("worse\n");
		else printf("same\n");
	}
}