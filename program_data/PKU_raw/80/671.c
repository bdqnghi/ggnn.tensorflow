/*
 * c.cpp
 * ???1100012870;
 * ???????
 *  Created on: 2011-11-4
 *      Author: Li Wenpeng
 */
int judge(int x)
{
	if (x%400==0) return 1;
	if (x%100==0) return 0;
	if (x%4==0) return 1;
	return 0;
}
int main()
{
	const int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year1,year2,day1,day2,month1,month2,i,ans=0;
	cin>>year1>>month1>>day1>>year2>>month2>>day2;
	if (year1==year2){
		for(i=month1;i<month2;i++) ans=ans+a[i];
		ans=ans+day2-day1;
		cout<<ans<<endl;
		return 0;
	}
    for(i=year1+1;i<year2;i++)
    	ans=ans+365+judge(i);
    for(i=1;i<month2;i++){
    	ans=ans+a[i];
    	if(i==2)ans=ans+judge(year2);
    }
    for(i=month1;i<=12;i++){
    	ans=ans+a[i];
    	if(i==2)ans=ans+judge(year1);
    }
    ans=ans+day2-day1;
    cout<<ans<<endl;
    return 0;
}
