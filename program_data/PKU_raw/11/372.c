
int main()
{
	int  a,b,c,D;
	scanf("%d %d %d",&a,&b,&c);
	if(((a%4==0)&&(a%100!=0))||(a%400==0))
	{
		switch(b)
		{
		case 1:
			D = c;
			break;
		case 2:
			D = c +31;
			break;

        case 3:
			D = c +60;
			break;
        case 4:
			D = c + 91;
			break;
        case 5:
			D = c + 121;
			break;
        case 6:
			D = c + 152;
			break;
        case 7:
			D = c + 182;
			break;
        case 8:
			D = c + 213;
			break;
        case 9:
			D = c + 244;
			break;
        case 10:
			D = c + 274;
			break;
        case 11:
			D = c + 305;
			break;
        case 12:
			D = c + 335;
			break;

 
		}
		printf("%d",D);
		

	}
	else 
	{
		switch(b)
		{
		case 1:
			D = c;
			break;
		case 2:
			D = c +31;
			break;

        case 3:
			D = c +60-1;
			break;
        case 4:
			D = c + 91-1;
			break;
        case 5:
			D = c + 121-1;
			break;
        case 6:
			D = c + 152-1;
			break;
        case 7:
			D = c + 182-1;
			break;
        case 8:
			D = c + 213-1;
			break;
        case 9:
			D = c + 244-1;
			break;
        case 10:
			D = c + 274-1;
			break;
        case 11:
			D = c + 305-1;
			break;
        case 12:
			D = c + 335-1;
			break;
		}
			
		printf("%d",D);
		

	}
	
	return 0;
}

