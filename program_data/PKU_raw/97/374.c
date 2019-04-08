int main ()
{
	int n;
	int bai,wushi,ershi,shi,wu,yuan;
	scanf("%d",&n);
	bai=(n-n%100)/100;
	printf("%d\n",bai);
	wushi=((n-100*bai)-(n-100*bai)%50)/50;
	printf("%d\n",wushi);
	ershi=((n-100*bai-50*wushi)-(n-100*bai-50*wushi)%20)/20;
	printf("%d\n",ershi);
	shi=((n-100*bai-50*wushi-20*ershi)-(n-100*bai-50*wushi-20*ershi)%10)/10;
	printf("%d\n",shi);
	wu=((n-100*bai-50*wushi-20*ershi-10*shi)-(n-100*bai-50*wushi-20*ershi-10*shi)%5)/5;
	printf("%d\n",wu);
	yuan=n-100*bai-50*wushi-20*ershi-10*shi-5*wu;
	printf("%d\n",yuan);
	return 0;
}
