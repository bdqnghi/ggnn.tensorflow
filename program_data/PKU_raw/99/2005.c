int main()
{
	double n;
	scanf("%lf",&n);
	int man[100];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&(man[i]));
	}
	double a=0,b=0,c=0,d=0;
	for(i=0;i<n;i++){
		if(man[i]>=1&&man[i]<=18)
			a++;
		if(man[i]>=19&&man[i]<=35)
			b++;
		if(man[i]>=36&&man[i]<=60)
			c++;
		if(man[i]>=61)
			d++;
	}
	double x,y,z,w;
	x=100*(a/n);
	y=100*(b/n);
	z=100*(c/n);
	w=100*(d/n);
	printf("1-18: %.2lf%%\n",x);
	printf("19-35: %.2lf%%\n",y);
    printf("36-60: %.2lf%%\n",z);
	printf("60??: %.2lf%%\n",w);
	return 0;
}