int main()
{
	int n,i,x;
	double a,b,c,d;
	i=1;
	a=0;
	b=0;
	c=0;
	d=0;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&x);
		if(x<=18){
			a=a+1;
		}else if(x<=35){
			b=b+1;
		}else if(x<=60){
			c=c+1;
		}else{
			d=d+1;
		}
		i=i+1;
	}
	a=100*a/n;
	b=100*b/n;
	c=100*c/n;
	d=100*d/n;
	printf("1-18: %.2lf%%\n",a);
    printf("19-35: %.2lf%%\n",b);
	printf("36-60: %.2lf%%\n",c);
	printf("60??: %.2lf%%\n",d);
	return 0;
}


