int main(){
	double n;
	scanf("%lf",&n);
	int i;
	int m;
	double a=0,b=0,c=0,d=0;
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m>=1&&m<=18){
			a++;
		}
		else if(m>18&&m<36){
			b++;
		}
		else if(m>35&&m<61){
			c++;
		}
		else{
			d++;
		}
	}
	a=100*a/n;
	b=100*b/n;
	c=100*c/n;
	d=100*d/n;
	printf("1-18: %.2lf",a);
	printf("%%\n");
	printf("19-35: %.2lf",b);
	printf("%%\n");
	printf("36-60: %.2lf",c);
	printf("%%\n");
	printf("60??: %.2lf",d);
	printf("%%");
	return 0;
}