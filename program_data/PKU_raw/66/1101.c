int main()
{
	int y,m,d,w,a;
	scanf("%d %d %d",&y,&m,&d);
	int zong=0;
	a=(y-1)%400;
	if(a==0)
	{
		zong+=0;
	}
	else
	{
	  for(int i=1;i<=a;i++)
	   {
		if(((i%4==0)&&(i%100!=0))||(i%400==0))
		{
			zong+=2;
		}
		else
		{
			zong+=1;
		}
	  }
	}
	    if(((y%4==0)&&(y%100!=0))||(y%400==0))
		{
		  switch(m-1)
		  {
	     	case 11:
				zong+=30;
			case 10:
				zong+=31;
			case 9:
				zong+=30;
			case 8:
				zong+=31;
			case 7:
				zong+=31;
				case 6:
				zong+=30;
			case 5:
				zong+=31;
			case 4:
				zong+=30;
			case 3:
				zong+=31;
				case 2:
				zong+=29;
			case 1:
				zong+=31;
		  }
	   
		}
	  else
	  {
		  switch(m-1)
		  {
	     	case 11:
				zong+=30;
			case 10:
				zong+=31;
			case 9:
				zong+=30;
			case 8:
				zong+=31;
			case 7:
				zong+=31;
				case 6:
				zong+=30;
			case 5:
				zong+=31;
			case 4:
				zong+=30;
			case 3:
				zong+=31;
			case 2:
				zong+=28;
			case 1:
				zong+=31;
		  }
	  }
	zong+=d;
	w=zong%7;
	switch(w)
	{
	   case 1:
		   printf("Mon.");
		   break;
	   case 2:
		   printf("Tue.");
		   break;
	   case 3:
		   printf("Wed.");
		   break;
	   case 4:
		   printf("Thu.");
		   break;
	   case 5:
		   printf("Fri.");
		   break;
	   case 6:
		   printf("Sat.");
		   break;
	   case 0:
		   printf("Sun.");
		   break;
	}
	return 0;
}