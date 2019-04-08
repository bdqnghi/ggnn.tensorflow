int main(){
	int m,a,b,c,d,e,f;
	scanf("%d",&m);
	a=m/100;
	m=m%100;
	b=m/50;
	m=m%50;
	c=m/20;
	m=m%20;
	d=m/10;
	m=m%10;
	e=m/5;
	f=m%5;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
return 0;
}