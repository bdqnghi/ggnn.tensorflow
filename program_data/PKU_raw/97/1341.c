int main(){
	int n;
	scanf("%d",&n);
	int a=n/100;
	int b=(n%100)/50;
	int c=(n%50)/20;
	int d=(n%50-20*c)/10;
	int e=(n%10)/5;
	int f=n%5;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	return 0;
}