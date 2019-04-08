int runnian(int y)
{
	scanf("%d",&y);
	if((y%4==0&&y%100!=0)||(y%100==0&&y%400==0))
	{
		y=366;
	}
	else 
	{
		y=365;
	}
	return y;
}
int main(int y,int m,int d)
{
	int i,n;
	n=0;
	scanf("%d%d%d",&y,&m,&d);
	for(i=1;i<m;i++)
	{
		if(i==1||i==3||i==5||i==7|i==8||i==10||i==12)
		{
			n+=31;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			n+=30;
		}
		else if(i==2)
		{
			if(runnian(y)==366)
			{
				n+=29;
			}
			else
			{
				n+=28;
			}
		}
	}
	n+=d;
	printf("%d\n",n);
	return 0;
}
