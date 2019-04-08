int main()
{
	int i=1,n,k,a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&k);
		if(k>=1&&k<=18)
			a++;
		if(k>=19&&k<=35)
			b++;
		if(k>=36&&k<=60)
			c++;
		if(k>=61)
			d++;
		i++;
	}
    printf("1-18: %.2lf%%\n",(double)a*100/(double)n);
	printf("19-35: %.2lf%%\n",(double)b*100/(double)n);
	printf("36-60: %.2lf%%\n",(double)c*100/(double)n);
	printf("60??: %.2lf%%\n",(double)d*100/(double)n);
}