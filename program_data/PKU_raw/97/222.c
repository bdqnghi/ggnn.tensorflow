int main(int argc, char* argv[])
{
	int n,bai=0,wushi=0,ershi=0,shi=0,wu=0,yi=0;
	scanf("%d",&n);
	bai=n/100;
	n=n%100;
	wushi=n/50;
	n=n%50;
	while (n>=20)
	{
		ershi+=1;
		n=n-20;
	}
	if (n>=10){
	shi=n/10;
	n=n-10;}
	if (n>=5)
	{
		wu=1;
		n=n-5;
	}
	yi=n;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",bai,wushi,ershi,shi,wu,yi);
	return 0;
}
