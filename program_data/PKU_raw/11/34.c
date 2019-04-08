int main(int argc, char* argv[])
{
	int year,month,day,which;
	scanf("%d%d%d",&year,&month,&day);
	which=day;
	month--;
	if(month>0){
		which+=31;
		month--;
	}
	if(month>0){
		if(year%4!=0)which+=28;
		else if(year%100==0&&year%400!=0)which+=28;
		else which+=29;
		month--;
	}
	if(month>0){
		which+=31;
		month--;
	}
	if(month>0){
		which+=30;
		month--;
	}
	if(month>0){
		which+=31;
		month--;
	}
	if(month>0){
		which+=30;
		month--;
	}
	if(month>0){
		which+=31;
		month--;
	}
	if(month>0){
		which+=31;
		month--;
	}
	if(month>0){
		which+=30;
		month--;
	}
	if(month>0){
		which+=31;
		month--;
	}
	if(month>0){
		which+=30;
		month--;
	}
    printf("%d",which);
	return 0;

}

