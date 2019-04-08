int main()
{
	int a, b,c,i,j,A;
	scanf("%d %d %d",&a,&b,&c);
	int wee=0;
	A=a-1;
	wee=A+A/4-(A-(A%100))/100+(A-(A%100))/400;
	for (j=1;j<=b-1;j++)
	{
	if(j==3||j==5||j==7||j==8||j==10||j==12||j==1)
		wee+=31;
	else 
		if(j==4||j==6||j==9||j==11)
			wee+=30;
		else
			if(a%4!=0||(a%100==0&&a%400!=0))
			wee+=28;
	        else  
				wee+=29;
	}
	
	wee+=c;
	
	int s;
	s=wee%7;
	if(s==1)
	{printf("Mon.");
	}
	if(s==2)
	{
		printf("Tue.");
	}
	if(s==3)
	{
		printf("Wed.");
	}
	if(s==4)
	{
		printf("Thu.");
	}
	if(s==5){
		printf("Fri.");
	}
	if(s==6)
	{
		printf("Sat.");
	}
	if(s==0){
		printf("Sun.");
	}
	return 0;
}