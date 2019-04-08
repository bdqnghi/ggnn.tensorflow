
int main(int argc, char* argv[])
{
	const int month1[14]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	const int month2[14]={0,31,29,31,30,31,30,31,31,30,31,30,31};

	int startYear,startMonth,startDay;
	int endYear,endMonth,endDay;
	int i,k,days;
	int flag;

	scanf("%d%d%d",&startYear,&startMonth,&startDay);
	scanf("%d%d%d",&endYear,&endMonth,&endDay);

	days=0;
//????????
	if(startYear==endYear){
		//??
		if ((startYear%4==0&&startYear%100!=0)||(startYear%400==0)){
			//????????
			if(startMonth==endMonth)
				days=endDay-startDay;
			//?????????
			else{
				for(k=startMonth;k<endMonth;k++)
					days+=month2[k];
				days+=endDay-startDay;
			}
		}
		//??
		else{
			if(startMonth==endMonth)
				days=endDay-startDay;
			else{
				for(k=startMonth;k<endMonth;k++)
					days+=month1[k];
				days+=endDay-startDay;
			}
		}
		printf("%d",days);
		return 0;
	}
//?????????
	for(i=startYear; i<=endYear; i++){
		if ((i%4==0&&i%100!=0)||(i%400==0))
			flag=1;
		else
			flag=0;
		//???
		if(i==startYear){
			if(flag==1)
				for(k=startMonth;k<=12;k++)
					days+=month2[k];
			else
				for(k=startMonth;k<=12;k++)
					days+=month1[k];
			days-=startDay;
		}
		//???
		else if(i==endYear){
			if(flag==1)
				for(k=1;k<endMonth;k++)
					days+=month2[k];
			else
				for(k=1;k<endMonth;k++)
					days+=month1[k];
			days+=endDay;
		}
		//?????+365 ? +366
		else{
			if(flag==1)
				for(k=1;k<=12;k++)
					days+=month2[k];
			else
				for(k=1;k<=12;k++)
					days+=month1[k];
		}
	}
	printf("%d",days);
	return 0;
}