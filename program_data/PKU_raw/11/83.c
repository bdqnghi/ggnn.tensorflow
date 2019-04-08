
int main()
{
	struct time
	{
		int year;
		int month;
		int date;
		int dayoftheyear; 
	} nn;
    scanf("%d%d%d",&nn.year,&nn.month,&nn.date);
		if(((nn.year%4==0)&&(nn.year%100==0))||(nn.year%400==0))
		{

           switch(nn.month){
		    case 1:
			nn.dayoftheyear=nn.date;
			break;
			case 2:
			nn.dayoftheyear=nn.date+jan;
			break;
			case 3:
			nn.dayoftheyear=nn.date+jan+feb+1;
			break;
			case 4:
			nn.dayoftheyear=nn.date+jan+feb+mar+1;
			break;
			case 5:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+1;
			break;
			case 6:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+1;
			break;
			case 7:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun+1;
			break;
			case 8:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun+jul+1;
			break;
			case 9:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun+jul+aug+1;
			break;
			case 10:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun+jul+aug+sep+1;
			break;
			case 11:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun+jul+aug+sep+oct+1;
			break;
			case 12:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun+jul+aug+sep+oct+nov+1;
			break;

		}
		}
		   else 
		   {

            switch(nn.month){
		    case 1:
			nn.dayoftheyear=nn.date;
			break;
			case 2:
			nn.dayoftheyear=nn.date+jan;
			break;
			case 3:
			nn.dayoftheyear=nn.date+jan+feb;
			break;
			case 4:
			nn.dayoftheyear=nn.date+jan+feb+mar;
			break;
			case 5:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr;
			break;
			case 6:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may;
			break;
			case 7:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun;
			break;
			case 8:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun+jul;
			break;
			case 9:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun+jul+aug;
			break;
			case 10:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun+jul+aug+sep;
			break;
			case 11:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun+jul+aug+sep+oct;
			break;
			case 12:
			nn.dayoftheyear=nn.date+jan+feb+mar+apr+may+jun+jul+aug+sep+oct+nov;
			break;

		}
		   }
		printf("%d\n",nn.dayoftheyear);



	return 0;
}