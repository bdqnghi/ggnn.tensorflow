int main()
{
	int n;
	
	struct remonth{
		int year,month1,month2;
	}remonth[200]; //??,?????????
	int diff[200]; //??????????

	int i;
	int m;   //??2?????
	int k;   //????,??remonth[i].month1,??????
	int t;   //????,?????????????????

	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d%d%d",&remonth[i].year,&remonth[i].month1,&remonth[i].month2);
	}   

	for (i=0;i<n;i++)
	{
		if ((remonth[i].year%4 == 0&&remonth[i].year%100!=0)||remonth[i].year%400 == 0)
		{
			m = 29;
		}else{
			m = 28;
		}  //??????????

		if (remonth[i].month1>remonth[i].month2)
		{
			t = remonth[i].month1;
			remonth[i].month1 = remonth[i].month2;
			remonth[i].month2 = t;
		} //?????????

		diff[i] = 0;

		for (k = remonth[i].month1;k<remonth[i].month2;k++)
		{
			if (k == 1||k == 3||k == 5||k == 7||k == 8||k == 10||k == 12)
			{
				diff[i] = diff[i] + 31;
			}else if (k == 4||k == 6||k == 9||k == 11){
				diff[i] = diff[i] + 30;
			}else if (k == 2){
				diff[i] = diff[i] + m;
			}
		} //???????????	
	}
	for (i=0;i<n;i++)
	{
		if (diff[i] % 7 == 0)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}	
	}  //??????
	return 0;
}