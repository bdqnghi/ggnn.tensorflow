int main()
{
	int Y, M, D, m, m1=0, n1, n2, n3, n, i;
	scanf("%d%d%d", &Y, &M, &D);
	if((Y-1)%400==0)
	{
		n1=0;
	}
	else
	{
		n1=0;
		for(i=(Y-1)/400*400;i<=Y-1;i++)
		{
			if(i%400==0||i%4==0&&i%100!=0)
			{
				n1=n1+2;
			}
			else
			{
				n1=n1+1;
			}
		}
	}
	for(m=1;m<M;m++)
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10)
		{
			m1=m1+31;
		}
		else if(m==4||m==6||m==9||m==11)
		{
			m1=m1+30;
		}
		else if(m==2)
		{
			if(Y%400==0||Y%4==0&&Y%100!=0)
			{
				m1=m1+29;
			}
			else
			{
				m1=m1+28;
			}
		}
    }
    n2=m1%7;
    n3=D%7;
    n=n1+n2+n3-2;
    if(n%7==1)
    {
        printf("Mon.");
    }
    else if(n%7==2)
    {
        printf("Tue.");
    }
    else if(n%7==3)
    {
         printf("Wed.");
    }
    else if(n%7==4)
    {
         printf("Thu.");
    }
    else if(n%7==5)
    {
         printf("Fri.");
    }
    else if(n%7==6)
    {
         printf("Sat.");
    }
    else 
    {
         printf("Sun.");
    }
    scanf(" ");
    return 0;
}