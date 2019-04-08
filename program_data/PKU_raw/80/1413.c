int main()
{
	int a[3],b[3];
	int i,da=0,d=0;
	
	for(i=0;i<=2;i++)
		scanf("%d",&a[i]);
    
	for(i=0;i<=2;i++)
		scanf("%d",&b[i]);
	
    int leap (int year);

	for(a[1]--;a[1]>=1;a[1]--)
	{
		switch(a[1])
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		
		case 12:da=da+31;break;
		case 4:
		case 6:
		case 9:
		case 11:da=da+30;break;
		
		case 2:
			{
				if(leap(a[0])) da=da+29;
				else da=da+28;
			}
		}
	}
      
	da=da+a[2];//A??????
		
		for(b[1]--;b[1]>=1;b[1]--)
		{ 

		switch(b[1])
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		
		case 12:d=d+31;break;
		case 4:
		case 6:
		case 9:
		case 11:d=d+30;break;
		
		case 2:
			{
				if(leap(b[0])) d=d+29;
				else d=d+28;
			}
		}
		}
    d=d+b[2];//B??????

	for(;a[0]<b[0];a[0]++)//???????
	{
			if(leap(a[0]))
				d=d+366;
			else d=d+365;
	}
	printf("%d\n",d-da);
	return 0;
}

int leap (int year)//LEAP YEAR OR NOT
	{
        int LEAP;
		if(year%4==0&&year%100!=0||year%400==0)
           LEAP=1;
		else LEAP=0;
		return LEAP;
	}