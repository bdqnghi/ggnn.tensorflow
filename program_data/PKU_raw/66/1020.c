int main()
{
	int year,day,month,sum,i;
	int num1[13],num2[13];//ping nian he run nian de yue fen tian shu
	scanf("%d%d%d",&year,&month,&day);
	sum=(year-1)*(365%7);
	sum=sum%7;
	/*for(i=1;i<year;i++)
	{
		if((i%400==0)||(i%4==0&&i%100!=0))
			sum+=1;
	}*/
	sum=sum+(year-1)/4-(year-1)/100+(year-1)/400;
	sum=sum%7;
	num1[1]=31;
	num1[2]=28;
	num1[3]=31;
	num1[4]=30;
	num1[5]=31;
	num1[6]=30;
	num1[7]=31;
	num1[8]=31;
	num1[9]=30;
	num1[10]=31;
	num1[11]=30;
	num1[12]=31;

	num2[1]=31;
    num2[2]=29;
    num2[3]=31;
    num2[4]=30;
    num2[5]=31;
	num2[6]=30;
	num2[7]=31;
	num2[8]=31;
	num2[9]=30;
	num2[10]=31;
	num2[11]=30;
	num2[12]=31;

	if((year%400==0)||(year%4==0&&year%100!=0))
	{
		for(i=1;i<month;i++)
			sum+=num2[i];
	}
	else
	{
		for(i=1;i<month;i++)
			sum+=num1[i];
	}
	sum=sum%7;
	sum=sum+day;
	sum=sum%7;
	switch(sum)
	{
	   case 0: printf("Sun.\n");break;
	   case 1: printf("Mon.\n");break;
	   case 2: printf("Tue.\n");break;
	   case 3: printf("Wed.\n");break;
	   case 4: printf("Thu.\n");break;
	   case 5: printf("Fri.\n");break;
       case 6: printf("Sat.\n");break;
	}
	return 0;
}

