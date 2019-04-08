int main()
{
	int a[6]={0};
    int money,i;
	scanf("%d",&money);
	if((money-100)>=0)
	{
		a[0]=(money-money%100)/100;
		money=money%100;
	}else{money=money;}
    if((money-50)>=0)
	{
		a[1]=(money-money%50)/50;
		money=money%50;
	}else{money=money;}
	if((money-20)>=0)
	{
		a[2]=(money-money%20)/20;
		money=money%20;
	}else{money=money;}
	if((money-10)>=0)
	{
		a[3]=(money-money%10)/10;
		money=money%10;
	}else{money=money;}
	if((money-5)>=0)
	{
		a[4]=(money-money%5)/5;
		money=money%5;
	}else{money=money;}
    a[5]=money;
	for(i=0;i<=5;i++)
		printf("%d\n",a[i]);
	return 0;
}