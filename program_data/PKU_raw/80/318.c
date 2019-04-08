int runnian(int y){
	int result;
	if(y%4==0&&y%100!=0||y%400==0){
		result=1;
	}
	else 
		result=0;
	return result;
}
int dijitian(int year,int month,int day){
	int i,days=0,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	a[2]=28+runnian(year);
	for(i=1;i<month;i++){
		days=days+a[i];
	}
	days=days+day;
	return days;
}
int main(int argc, char* argv[])
{
	int runnian(int y);
	int dijitian(int year,int month,int day);
	int i,sum=0,final,y1,m1,d1,y2,m2,d2;
	scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
	
	for(i=y1;i<y2;i++){
		sum=sum+365+runnian(i);
	}
	final=sum+dijitian(y2,m2,d2)-dijitian(y1,m1,d1);
	printf("%d",final);
	return 0;
}