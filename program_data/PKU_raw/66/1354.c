int sum;
int main()
{
    int m,b,c;
	int i,j;
	sum=0;
	scanf("%d%d%d",&m,&b,&c);
	if(b!=1)
	{
	   for(j=1;j<b;j++){
		   if(j==1||j==3||j==5||j==7||j==8||j==10||j==12){
			   sum+=31;
		   }
		   else if(j==2){
			   if((m%4==0&&m%100!=0)||m%400==0){
				   sum+=29;
			   }
			   else{
				   sum+=28;
			   }
		   }
		   else if(j==4||j==6||j==9||j==11){
			   sum+=30;
		   }
	   }
	   sum+=c;
	}
	else{
		sum+=c;
	}
    sum+=(m-1)+(m-1)/4-(m-1)/100+(m-1)/400;
	if (sum%7==1){
		printf("Mon.");
	}
	if (sum%7==2)
	{
		printf("Tue.");
	}
	if(sum%7==3)
	{ 
		printf("Wed.");
	}
	if(sum%7==4)
	{ 
		printf("Thu.");
	}
	if(sum%7==5)
	{
		printf("Fri.");
	}
	if(sum%7==6)
	{
		printf("Sat.");
	}
	if(sum%7==0)
	{
		printf("Sun.");
	}
	   return 0;
}

 