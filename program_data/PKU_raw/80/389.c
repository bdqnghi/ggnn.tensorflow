int main(){
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year1=0,month1=0,day1=0,year2=0,month2=0,day2=0;
	int i=0,total=0;
	cin>>year1>>month1>>day1;
	cin>>year2>>month2>>day2;
	for(i=year1;i<year2;i++){
		if((i%4==0&&i%100!=0)||(i%400==0))
			total=total+366;
		else
			total=total+365;
	}
	if((year1%4==0&&year1%100!=0)||(year1%400==0)){
		a[1]=29;
		for(i=0;i<month1-1;i++)
			total=total-a[i];
		total=total-day1;
	}
	else{
		a[1]=28;
		for(i=0;i<month1-1;i++)
			total=total-a[i];
		total=total-day1;
	}
	if((year2%4==0&&year2%100!=0)||(year2%400==0)){
		a[1]=29;
		for(i=0;i<month2-1;i++)
			total=total+a[i];
		total=total+day2;
	}
	else{
		a[1]=28;
		for(i=0;i<month2-1;i++)
			total=total+a[i];
		total=total+day2;
	}
	cout<<total<<endl;
	return 0;
}