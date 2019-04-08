
int main()
{
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
	int dmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i=0;
	int sum=0;
	for (i=0;i<month-1;i++){
		sum=sum+dmonth[i];
	}
	if (year%4==0&&year%100!=0||year%400==0){
		if (month>=3){
			sum=sum+day+1;
		}
	}
	else {
		sum=sum+day;
	}
	printf("%d",sum);
	return 0;
}