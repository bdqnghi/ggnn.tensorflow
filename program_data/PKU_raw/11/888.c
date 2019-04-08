int main ()
{
	int y,m,d,dd=0,i;
	scanf("%d%d%d",&y,&m,&d);
	if((y%4 == 0) && (y%100 !=0) ||(y%400 ==0))
	{
		for(i=1;i<m;i++)
		{
			switch(i)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
					dd += 31;
					break;
				case 2:
					dd += 29;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					dd += 30;
					break;
			}
		}
		dd = dd + d;
		printf("%d",dd);
	}
	else
	{
		for(i=1;i<m;i++)
		{
			switch(i)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
					dd += 31;
					break;
				case 2:
					dd += 28;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					dd += 30;
					break;
			}
		}
		dd = dd + d;
		printf("%d",dd);
	}
	return 0;
}




	
