

int main()
{
	int input[500][3];
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&input[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(input[i][1]>input[i][2])
		{
			int e;
			e=input[i][1];
			input[i][1]=input[i][2];
			input[i][2]=e;
		}
	}
	for(i=0;i<n;i++)
	{
		int result;
		if(input[i][0]==0||(input[i][0]%4==0&&input[i][0]%100!=0)||input[i][0]%400==0)
		{
			result=1;
		}
		else
		{
			result=0;
		}
		int days=0;
		for(j=input[i][1];j<input[i][2];j++)
		{
			
			if(j==1||j==3||j==5||j==7||j==8||j==10)
			{
			days+=31;
			}
			if(j==4||j==6||j==9||j==11)
			{
			days+=30;
			}
			if(j==2)
			{
				days+=28+result;
			}
		}
		if(days%7==0)
		{
			printf("YES\n");
		}
		else if(days%7!=0)
		{
			printf("NO\n");
		}
	}
	return 0;
}

