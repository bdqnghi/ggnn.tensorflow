	
void main()
{
	int i=0,j,a,b,c,sum=0;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char week[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	scanf("%d %d %d",&a,&b,&c);
	if(a%4!=0||(a%100==0&&a%400!=0))
	{
		sum+=((a-1)%7*365)%7;
		for(i=0;i<b-1;i++)
			sum+=month[i];
		sum+=c;
		sum+=(a-1)/4-(a-1)/100+(a-1)/400;
	}
	else
	{
		sum+=((a-1)%7*365)%7;
		for(i=0;i<b-1;i++)
			sum+=month[i];
		sum+=c;
		if(b>2)
			sum+=(a-1)/4-(a-1)/100+(a-1)/400+1;
		else sum+=(a-1)/4-(a-1)/100+(a-1)/400;
	}
	printf("%s\n",week[sum%7]);
}
