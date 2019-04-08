void main()
{
	int a[6];
	int i;
	int reverse(int num);
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
    for(i=0;i<6;i++)
	    reverse(a[i]);
}
int reverse(int num)
{
	int indiv,ten,hundred,thousand,ten_thousand;
	int c;
    if(num>0)
	{
		ten_thousand=num/10000;
		thousand=(int)(num-ten_thousand*10000)/1000;
		hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
		ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
		indiv=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
		if(num>9999)
		{
			c=indiv*10000+ten*1000+hundred*100+thousand*10+ten_thousand;
		    printf("%d\n",c);
		}
		else if(num>999)
		{
			c=indiv*1000+ten*100+hundred*10+thousand;
			printf("%d\n",c);
		}
		else if(num>99)
		{
			c=indiv*100+ten*10+hundred;
			printf("%d\n",c);
		}
		else if(num>9)
		{
			c=indiv*10+ten;
			printf("%d\n",c);
		}
		else
			printf("%d\n",indiv);

	}
	else if(num==0)
		printf("0\n");
	else
	{
		ten_thousand=abs(num)/10000;
		thousand=(int)(abs(num)-ten_thousand*10000)/1000;
		hundred=(int)(abs(num)-ten_thousand*10000-thousand*1000)/100;
		ten=(int)(abs(num)-ten_thousand*10000-thousand*1000-hundred*100)/10;
		indiv=(int)(abs(num)-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
		if(abs(num)>9999)
		{
			c=indiv*10000+ten*1000+hundred*100+thousand*10+ten_thousand;
		    printf("-%d\n",c);
		}
		else if(abs(num)>999)
		{
			c=indiv*1000+ten*100+hundred*10+thousand;
			printf("-%d\n",c);
		}
		else if(abs(num)>99)
		{
			c=indiv*100+ten*10+hundred;
			printf("-%d\n",c);
		}
		else if(abs(num)>9)
		{
			c=indiv*10+ten;
			printf("-%d\n",c);
		}
		else
			printf("-%d\n",indiv);

	}
	

}