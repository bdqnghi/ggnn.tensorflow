int main()
{
	int n;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	double g,h,j,k;
	int num;
	int i=1;
	scanf("%d\n",&n);
	while(i<=n){
		scanf("%d",&num);
		if(num<19){
			a++;
		}else if(num<36){
			b++;
		}else if(num<61){
			c++;
		}else{
			d++;
		}
		i++;
	}
	g=1.0*a/n*100;
		h=1.0*b/n*100;
		j=1.0*c/n*100;
		k=1.0*d/n*100;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",g,h,j,k);
	return 0;
}
