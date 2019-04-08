int main(){
	int n,s;
	double a,b,c,d;
	a=b=c=d=0;
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&s);
		if (s<=18) a++;
		else if (s<=35) b++;
		else if (s<=60) c++;
		else d++;
	}
	a=a/n*100;
	b=b/n*100;
	c=c/n*100;
	d=d/n*100;
	printf("1-18: %.2lf%%\n",a);
	printf("19-35: %.2lf%%\n",b);
	printf("36-60: %.2lf%%\n",c);
	printf("60??: %.2lf%%\n",d);
	return 0;
}


