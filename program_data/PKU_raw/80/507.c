/*
 * 1000012889_3.cpp
 *
 *  Created on: 2011-1-9
 *      Author: ???
 *        ??: ???????????
 */



int main(){
	int monp[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int monr[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int year1,year2,mon1,mon2,day1,day2,np=0,nr=0,i,num=0;
	cin>>year1>>mon1>>day1;
	cin>>year2>>mon2>>day2;
	for(i=year1+1;i<year2;i++){
		if((i%4==0&&i%100!=0)||(i%400==0))
			nr++;
		else
			np++;
	}
	if((year1%4==0&&year1%100!=0)||(year1%400==0)){
		for(i=1;i<mon1;i++)
			num+=monr[i];
		num+=day1;
		if(year1<year2)
			num=366-num;
		else
			num=-num;
	}
	else{
		for(i=1;i<mon1;i++)
			num+=monp[i];
		num+=day1;
		if(year1<year2)
			num=365-num;
		else
			num=-num;
	}
	if((year2%4==0&&year2%100!=0)||(year2%400==0)){
		for(i=1;i<mon2;i++)
			num+=monr[i];
		num+=day2;
	}
	else{
		for(i=1;i<mon2;i++)
			num+=monp[i];
		num+=day2;
	}
	num+=nr*366+np*365;
	cout<<num<<endl;
	return 0;
}
