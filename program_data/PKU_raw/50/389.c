
int main(int argc, char* argv[])
{
	int w,month,day;
	scanf("%d",&w);
	for (month=1;month<=12;month++)
	{
		switch (month){
		case 1: 
			day = ((13-1)%7+w)%7;
			break;
		case 2:	
			day = ((13+31-1)%7+w)%7;
			break;
		case 3: 
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day = ((13+28+31*(month/2)+30*((month-1)/2-1)-1)%7+w)%7;
			break;
		case 4:
		case 6:	
		case 9:	
		case 11:
			day = ((13+28+31*((month+1)/2)+30*((month+1)/3-1)-1)%7+w)%7;
			break;			
		}
		if (day==5)
		{
			printf("%d\n",month);
		}
	}                   
	return 0;
}
