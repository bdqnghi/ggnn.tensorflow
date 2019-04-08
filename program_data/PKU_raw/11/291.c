int main(int argc, char* argv[])
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a%4==0&&a%100>0||a%400==0)
	{
		int sum=0,i;
		for (i=1;i<b;i++)
		{
			if (i==1||i==3||i==5||i==7||i==8||i==10)
			{
				sum+=31;
			}
			else if (i==2)
			{
				sum+=29;
			}
			else
			{
				sum+=30;
			}
		}
		sum+=c;
		printf("%d\n",sum);
	}
	else
	{	
			int sum=0,i;
		    for (i=1;i<b;i++)
			{if (i==1||i==3||i==5||i==7||i==8||i==10)
			{
				sum+=31;
			}
			else if (i==2)
			{
				sum+=28;
			}
			else
			{
				sum+=30;
			}
		}
		sum+=c;
		printf("%d\n",sum);
	}
return 0;
}