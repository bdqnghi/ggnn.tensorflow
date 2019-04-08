
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if (b==1)
	{
		printf("%d",c);
	}
	if((a%4==0)&&(a%100==0)&&(a%400==0))
	{
		switch (b) 
	{
	case 2 :
	{
		printf("%d",31+c);
		break;
	}
	case 3:
	{
       printf("%d",31+29+c);
	   break;
	}
	case 4:
	{
	   printf("%d",31+29+31+c);
	   break;
	}
	case 5:
		   {
			  printf("%d",31+29+31+30+c);
			  break;
		   }
	case 6:
			   {
				   printf("%d",31+29+31+30+31+c);
				   break;
			   }
	case 7:
				   {
					   printf("%d",31+29+31+30+31+30+c);
					   break;
				   }
	case 8:
					   {
						   printf("%d",31+29+31+30+31+30+31+c);
						   break;
					   }
	case 9:
						   {
							   printf("%d",31+29+31+30+31+30+31+31+c);
							   break;
						   }
	case 10:
							   {
								   printf("%d",31+29+31+30+31+30+31+31+30+c);
								   break;
							   }
	case 11:
								   {
									   printf("%d",31+29+31+30+31+30+31+31+30+31+c);
									   break;
								   }
	case 12:
									   {
										   printf("%d",31+29+31+30+31+30+31+31+30+31+30+c);
										   break;
									   }
		}
	}
		else
		{
     switch(b)
	{
		case 2:
			{
		printf("%d",31+c);
		break;
	}
	   case 3:
	{
       printf("%d",31+28+c);
	   break;
	}
		case 4:
	   {
		   printf("%d",31+28+31+c);
		   break;
	   }
		case 5:
	 {
		 printf("%d",31+28+31+30+c);
		 break;
	 }
		case 6:
	 {
		 printf("%d",31+28+31+30+31+c);
		 break;
	}
		case 7:
	{
		printf("%d",31+28+31+30+31+30+c);
		break;
	 }
		case 8:
	{
		printf("%d",31+28+31+30+31+30+31+c);
		break;
	}
		case 9:
	 {
		printf("%d",31+28+31+30+31+30+31+31+c);
		break;
	 }
						case 10:
							{
								   printf("%d",31+28+31+30+31+30+31+31+30+c);
								   break;
							   }
						case 11:
								   {
									   printf("%d",31+28+31+30+31+30+31+31+30+31+c);
									   break;
								   }
						case 12:
									   {
										   printf("%d",31+28+31+30+31+30+31+31+30+31+30+c);
										   break;
									   }
						}
		}
	return 0;
}