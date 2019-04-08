int main(){
	int money;
	scanf("%d",&money);
	int a=money/100;
	printf("%d\n",a);
	int b=(money-100*a)/50;
    printf("%d\n",b);
	int c=(money-100*a-50*b)/20;
	printf("%d\n",c);
	int d=(money-100*a-50*b-20*c)/10;
	printf("%d\n",d);
	int e=(money-100*a-50*b-20*c-10*d)/5;
    printf("%d\n",e);
    int f=money%5;
	printf("%d",f);
	return 0;
}
