int main()
{
	int i,a,b,c,sum=0;
	scanf("%d%d%d",&a,&b,&c);
    if(b==1)
		sum=0;
	else if(b==2)
		sum=31;
	else
	{
		sum=31;
        if((a%400==0)||(a%4==0&&a%100!=0))
			sum=sum+29;
		else sum=sum+28;
    for(i=3;i<b;i++)
	{
		if(i==3||i==5||i==7||i==8||i==10)
			sum=sum+31;
		if(i==4||i==6||i==9||i==11)
			sum=sum+30;
	}
	}
	sum=sum+c;
	printf("%d",sum);
	return 0;
}