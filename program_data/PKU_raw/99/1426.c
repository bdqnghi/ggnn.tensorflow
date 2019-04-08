int main()
{
	int i,n,a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int nian;
		scanf("%d",&nian);
		a+=(nian<=18)? 1:0;
		b+=(nian<=35&&nian>=19)? 1:0;
		c+=(nian<=60&&nian>=36)? 1:0;
		d+=(nian>=61)? 1:0;
	}
	int zong=a+b+c+d;
	printf("1-18: %.2lf%%\n",1.0*100*a/zong);
	printf("19-35: %.2lf%%\n",1.0*100*b/zong);
	printf("36-60: %.2lf%%\n",1.0*100*c/zong);
	printf("60??: %.2lf%%\n",1.0*100*d/zong);
	return 0;
}