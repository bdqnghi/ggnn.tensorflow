int main()
{
	int money,yuan100,yuan50,yuan20,yuan10,yuan5,yuan1;
	scanf("%d",&money);
	if(money<0)
		printf("Error!\n");
	else
	{
		yuan100=(money-(money%100))/100;
	    money=money-yuan100*100;
	    yuan50=(money-(money%50))/50;
	    money=money-yuan50*50;
	    yuan20=(money-(money%20))/20;
	    money=money-yuan20*20;
	    yuan10=(money-(money%10))/10;
	    money=money-yuan10*10;
	    yuan5=(money-(money%5))/5;
	    money=money-yuan5*5;
	    yuan1=money;
	    
		    printf("%d\n",yuan100);
	    
		    printf("%d\n",yuan50);

		    printf("%d\n",yuan20);
	    
		    printf("%d\n",yuan10);
	    
		    printf("%d\n",yuan5);
	    printf("%d\n",yuan1);
	}
	return 0;
}
