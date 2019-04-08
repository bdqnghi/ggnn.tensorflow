int main(){
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b=a/100;
	c=a%100/50;
	d=a%100%50/20;
	e=a%100%50%20/10;
	f=a%100%50%20%10/5;
	g=a%100%50%20%10%5;
	printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%d\n",f);
printf("%d\n",g);
	


return 0;
}