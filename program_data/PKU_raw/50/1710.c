int main()
{
	int i,w,a=12;
	scanf("%d",&w);
		for(i=1;i<=12;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			{
				if(a%7+w==5||a%7+w==12)
					printf("%d\n",i);
				a=a+31;
			}
			if(i==4||i==6||i==9||i==11)
			{
				if(a%7+w==5||a%7+w==12)
					printf("%d\n",i);
				a=a+30;
			}
			if(i==2)
			{
				if(a%7+w==5||a%7+w==12)
					printf("%d\n",i);
				a=a+28;
			}		
		}
	return 0;
}

