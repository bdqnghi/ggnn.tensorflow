int leapyear(int year){
	if(year%400==0||(year%4==0&&year%100!=0))
		return 1;
	else
		return 0;
}
int whichday(int year,int month,int day){
	int mon[MONTH]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d=0,i;
	if(leapyear(year)==1)
		mon[1]++;
	for(i=0;i<month-1;i++)
		d+=mon[i];
	d+=day;
	return d;
}
int main(){
	int year,month,day;
	int d;
	scanf("%d%d%d",&year,&month,&day);
	d=whichday(year,month,day);
	printf("%d",d);
}
