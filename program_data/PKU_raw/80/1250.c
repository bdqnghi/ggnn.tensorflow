int main()
{
        int year1,month1,day1,year2,month2,day2;
        int passday1,passday2;
        scanf("%d%d%d",&year1,&month1,&day1);
        scanf("%d%d%d",&year2,&month2,&day2);//??????????

        int Feb1,Feb2;//???????????????
        int passday=0;
        int i;

        if((year1%4==0&&year1%100!=0)||year1%400==0) Feb1=29;
        else Feb1=28;
        if((year2%4==0&&year2%100!=0)||year2%400==0) Feb2=29;
        else Feb2=28;//?????????????????29????28?

        /*???????????????????????????????????*/
        switch(month1)
        {
    case(1):
                passday1=337+Feb1-day1;
                break;
        case(2):
                passday1=306+Feb1-day1;
                break;
        case(3):
                passday1=306-day1;
                break;
        case(4):
                passday1=275-day1;
                break;
        case(5):
                passday1=245-day1;
                break;
        case(6):
                passday1=214-day1;
                break;
        case(7):
                passday1=184-day1;
                break;
        case(8):
                passday1=153-day1;
                break;
        case(9):
                passday1=122-day1;
                break;
        case(10):
                passday1=92-day1;
                break;
        case(11):
                passday1=61-day1;
                break;
        case(12):
                passday1=31-day1;
                break;
        }//???????????????????????????????????????+???????+?31-????????????

        for(i=year1+1;i<year2;i++)
        {
				//printf("add: %d %d %d",year1,year2,i);
                if ((i%4==0&&i%100!=0)||i%400==0) passday+=366;
                else passday+=365;
        }//????????????????

        switch(month2)
        {
        case(1):
                passday2=day2;
                break;
        case(2):
                passday2=31+day2;
                break;
        case(3):
                passday2=31+Feb2+day2;
                break;
        case(4):
                passday2=62+Feb2+day2;
                break;
        case(5):
                passday2=92+Feb2+day2;
                break;
        case(6):
                passday2=123+Feb2+day2;
                break;
        case(7):
                passday2=153+Feb2+day2;
                break;
        case(8):
                passday2=184+Feb2+day2;
                break;
        case(9):
                passday2=215+Feb2+day2;
                break;
        case(10):
                passday2=245+Feb2+day2;
                break;
        case(11):
                passday2=276+Feb2+day2;
                break;
        case(12):
                passday2=306+Feb2+day2;
                break;
        }//???????????????
        passday=passday+passday1+passday2;
		if(year1 == year2){
			if((year1%4==0&&year1%100!=0)||year1%400==0)
				passday -= 366;
			else
				passday -= 365;
		}
        printf("%d",passday);//?????
        return 0;
}
