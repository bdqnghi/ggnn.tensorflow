int main(){
	int x,a,b,c,d,e,f,a1,b1,c1,d1,e1;
	scanf("%d",&x);
	a=x/100;
	a1=x%100;
	b=a1/50;
	b1=a1%50;
	c=b1/20;
	c1=b1%20;
	d=c1/10;
	d1=c1%10;
	e=d1/5;
	e1=d1%5;
	f=e1;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	return 0;
}
