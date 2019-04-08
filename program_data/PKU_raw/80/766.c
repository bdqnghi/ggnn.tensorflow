int main()
{
	int s[12]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int a,b,c,d,e,f;
	int i,sum1=0,sum2=0,m,j;
	scanf("%d%d%d\n",&a,&b,&c);
    scanf("%d%d%d",&d,&e,&f);
	if(a==d)
	{
		if((a%4==0&&a%100!=0)||(a%400==0))
		{s[2]=29;}
		for(i=0;i<b;i++)
		{
			sum1+=s[i];
		}
		sum1=sum1+c;
		for(i=0;i<e;i++)
		{
			sum2+=s[i];
		}
		sum2=sum2+f;
        m=sum2-sum1;
	}
	else
	{
        if((a%4==0&&a%100!=0)||(a%400==0))
		{s[2]=29;}
        for(i=0;i<b;i++)
		{
			sum1+=s[i];
		}
		sum1=sum1+c;
        if((d%4==0&&d%100!=0)||(d%400==0))
		{s[2]=29;}
        for(i=0;i<e;i++)
		{
			sum2+=s[i];
		}
		sum2=sum2+f;
		m=sum2-sum1;
		j=d-a;
		for(i=0;i<j;i++)
		{
			if(((a+i)%4==0&&(a+i)%100!=0)||((a+i)%400==0))
			{m+=366;}
			else
			{m+=365;}
		}
	}
	printf("%d",m);
	return 0;
}
