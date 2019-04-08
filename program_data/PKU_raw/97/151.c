int main(){
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
	a=n/100;
    b=(n%100)/50;
	c=(n-100*a-50*b)/20;
	d=(n-100*a-50*b-20*c)/10;
	e=(n%10)/5;
	f=n%10-e*5;
	printf("%d\n",a);
	printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
	return 0;
}
