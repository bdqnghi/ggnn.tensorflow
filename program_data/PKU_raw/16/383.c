int main()
{
	long a1,a2,a3,a4,a5,num,len;
	a1=a2=a3=a4=a5=0;
	scanf("%d",&num);
	if (num>9) 
	{
		a1=num%10;
		a2=num/10;
		if (a2>9)
		{
			a3=a2/10;
			a2=a2%10;
			if (a3>9)
			{
				a4=a3/10;
				a3=a3%10;
				if (a4>9)
				{
					a5=a4/10;
					a4=a4%10;
					len=5;
				}
				else len=4;
			}
			else len=3;
		}
		else len=2;
	}
	else 
	{
		a1=num;
		len=1;
	}
	
	if (a5) 
	//{
//		printf("%d %d %d %d %d\n",a5,a4,a3,a2,a1);
		printf("%d%d%d%d%d\n",a1,a2,a3,a4,a5);
//	}
	else
		if (a4)
//		{
//			printf("%d %d %d %d\n",a4,a3,a2,a1);
			printf("%d%d%d%d\n",a1,a2,a3,a4);
//		}
		else 
			if (a3)
//			{
//				printf("%d %d %d\n",a3,a2,a1);
				printf("%d%d%d\n",a1,a2,a3);
//			}
			else 
				if (a2)
//				{
//					printf("%d %d\n",a2,a1);
					printf("%d%d\n",a1,a2);
//				}
				else printf("%d\n",a1);
	return 0;
}
