void main()
{
	int num;
	int indiv,ten,hundred,thousand,ten_thousand;
	scanf("%d",&num);
	ten_thousand=num/10000;
	thousand=(num-ten_thousand*10000)/1000;
	hundred=(num-ten_thousand*10000-thousand*1000)/100;
	ten=(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
	indiv=num-ten_thousand*10000-thousand*1000-hundred*100-ten*10;
	if(ten_thousand==0)
	{
		if(thousand==0)
	{
			if(hundred==0)
			{
				if(ten==0)
					printf("%d\n",num);
				else
					printf("%d\n",10*indiv+ten);
			}
				else
					printf("%d\n",100*indiv+10*ten+hundred);
		}
		else
			printf("%d\n",1000*indiv+100*ten+10*hundred+thousand);
	}
	else
		printf("%d\n",10000*indiv+1000*ten+100*hundred+10*thousand+ten_thousand);
}
