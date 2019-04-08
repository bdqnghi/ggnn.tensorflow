/*
 * 3.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main(){
	int sy,sm,sd,ey,em,ed,day1=0,day2=0;
	cin>>sy>>sm>>sd>>ey>>em>>ed;
	int nory[11]={31,28,31,30,31,30,31,31,30,31,30};
	int aby[11]={31,29,31,30,31,30,31,31,30,31,30};
	int year,i;
	for(year=0;year<sy;year++){
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
			day1=day1+366;
		}
		else day1=day1+365;
	}
		year=sy;
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
			for(i=0;i<sm-1;i++){
				day1=day1+aby[i];
			}
		}
			else {for(i=0;i<sm-1;i++)
				day1=day1+nory[i];
			}
		day1=day1+sd;

		for(year=0;year<ey;year++){
				if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
					day2=day2+366;
				}
				else day2=day2+365;
			}
				year=ey;
				if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
					for(i=0;i<em-1;i++){
						day2=day2+aby[i];
					}
				}
					else {for(i=0;i<em-1;i++)
						day2=day2+nory[i];
					}
				day2=day2+ed;
		cout<<day2-day1<<endl;
		return 0;

}
