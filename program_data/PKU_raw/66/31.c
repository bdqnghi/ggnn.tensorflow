int main(){
	int year,month,day,xingqi,k,a,b,c;
	scanf("%d%d%d",&year,&month,&day);
	int d[13]={0,31,31,28,31,30,31,30,31,31,30,31,30};

    k=month;
    if(year==1){
		for(;month>1;month--)day+=d[month];
		day=day%7;
	}
	else{
		for(;month>1;month--)day+=d[month];
		day+=year%7-1;
		day=day%7;
		if(k<3)year--;
		a=year/4;
		b=year/100;
		c=year/400;

		day=day+a+c-b;
		
		
        day=day%7;

	}
	
	xingqi=day;
	switch(xingqi){
		case 1:printf("Mon.\n");break;
		case 2:printf("Tue.\n");break;
		case 3:printf("Wed.\n");break;
		case 4:printf("Thu.\n");break;
		case 5:printf("Fri.\n");break;
		case 6:printf("Sat.\n");break;
		case 0:printf("Sun.\n");break;
	}
	return 0;
}
