int main(){
	int a;
	scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0)
	{printf("3 5 7");};
	if(a%3!=0&&a%5==0&&a%7==0)
	{printf("5 7");};
	if(a%3==0&&a%5!=0&&a%7==0)
	{printf("3 7");};
	if(a%3==0&&a%5==0&&a%7!=0)
	{printf("3 5");};
	if(a%3==0&&a%5!=0&&a%7!=0)
	{printf("3");};
	if(a%3!=0&&a%5==0&&a%7!=0)
	{printf("5");};
	if(a%3!=0&&a%5!=0&&a%7==0)
	{printf("7");};
	if(a%3!=0&&a%5!=0&&a%7!=0)
	{printf("n");};
	return 0;
}