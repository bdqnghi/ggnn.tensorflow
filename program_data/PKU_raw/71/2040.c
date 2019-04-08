
int main(int argc, char* argv[])
{
	int const month1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int const month2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int year[200],yue1[200],yue2[200];
	int n,day;
	int i,j,t;

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&year[i],&yue1[i],&yue2[i]);
		if(year[i]%400==0||year[i]%4==0&&year[i]%100!=0)//??
		{
			if(yue1[i]>yue2[i])
			{
				t=yue1[i];
				yue1[i]=yue2[i];
				yue2[i]=t;
			}
			day=0;
			for(j=yue1[i];j<yue2[i];j++)
			{
				day+=month2[j];
			}
			if(day%7==0)
			{
				printf("YES\n");
			}
			else
				printf("NO\n");
			
			
		}
		else//??
		{
				if(yue1[i]>yue2[i])
			{
				t=yue1[i];
				yue1[i]=yue2[i];
				yue2[i]=t;
			}
			day=0;
			for(j=yue1[i];j<yue2[i];j++)
			{
				day+=month1[j];
			}
			if(day%7==0)
			{
				printf("YES\n");
			}
			else
				printf("NO\n");
		}

	}
	return 0;
}

