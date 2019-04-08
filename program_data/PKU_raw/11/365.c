int main()
{
    int year,month,day;
	int n;
	scanf("%d %d %d",&year,&month,&day);
	if((year%4==0 && year%100!=0)||year%400==0) //????
	{
		switch(month){
		    case 1:
				n=day;
				break;
		    case 2:
				n=31+day;
				break;
			case 3:
				n=60+day;
				break;
			case 4:
				n=91+day;
				break;
			case 5:
				n=121+day;
				break;
			case 6:
				n=152+day;
				break;
			case 7:
				n=182+day;
				break;
			case 8:
				n=213+day;
				break;
			case 9:
				n=244+day;
				break;
			case 10:
				n=274+day;
				break;
            case 11:
				n=305+day;
				break;
			case 12:
				n=335+day;
				break;
		}
	}
	else
	{		
		switch(month){
		    case 1:
				n=day;
				break;
		    case 2:
				n=30+day;
				break;
			case 3:
				n=59+day;
				break;
			case 4:
				n=90+day;
				break;
			case 5:
				n=120+day;
				break;
			case 6:
				n=151+day;
				break;
			case 7:
				n=181+day;
				break;
			case 8:
				n=212+day;
				break;
			case 9:
				n=243+day;
				break;
			case 10:
				n=273+day;
				break;
            case 11:
				n=304+day;
				break;
			case 12:
				n=334+day;
				break;
		}
	}
	printf("%d",n);
return 0;
}