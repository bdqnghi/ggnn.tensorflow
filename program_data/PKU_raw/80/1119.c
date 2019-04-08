int main(){
	int year1,year2,month1,month2,day1,day2,n=0;
	int i,j,k;
	scanf("%d%d%d%d%d%d",&year1,&month1,&day1,&year2,&month2,&day2);
	for(i=year1;i<year2;i++){
		if(i%4!=0||(i%100==0&&i%400!=0))
			n+=365;
		else
			n+=366;
	}
	for(j=1;j<month1;j++){
		if(j==1||j==3||j==5||j==7||j==8||j==10)
			n-=31;
		else if(j!=2)
			n-=30;
		else if(year2%4!=0||(year2%100==0&&year2%400!=0))
			n-=28;
		else
			n-=29;
	}
	n-=day1;
	for(k=1;k<month2;k++){
		if(k==1||k==3||k==5||k==7||k==8||k==10)
			n+=31;
		else if(k!=2)
			n+=30;
		else if(year2%4!=0||(year2%100==0&&year2%400!=0))
			n+=28;
		else
			n+=29;
	}
	n+=day2;
	printf("%d",n);
	return 0;
}