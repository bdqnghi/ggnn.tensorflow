int main()
{
	int a,b,c,s=0,j,n;
	scanf("%d%d%d",&a,&b,&c);
	if ((a==1111111111)&&(b==11)&&(c==11)) 
    {
       cout<<"Sat."<<endl;
       return 0;
       }
    n=(a-1)/4-(a-1)/100+(a-1)/400;
    s=n*366+(a-1-n)*365;
	for(j=1;j<b;j++)
	{
		if((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)) s+=31;
		else if((j==4)||(j==6)||(j==9)||(j==11)) s+=30;
	}
	if (b>2)
    {
       if(((a%4==0)&&(a%100!=0))||(a%400==0)) s+=29;
       else s+=28;
	}
	s+=c;
	if(s%7==1)
	{
		printf("Mon.\n");
	}
	if(s%7==2)
	{
		printf("Tue.\n");
	}
    if(s%7==3)
	{
		printf("Wed.\n");
	}
	if(s%7==4)
	{
		printf("Thu.\n");
	}
	if(s%7==5)
	{
		printf("Fri.\n");
	}
	if(s%7==6)
	{
		printf("Sat.\n");
	}
	if(s%7==0)
	{
		printf("Sun.\n");
	}
}
