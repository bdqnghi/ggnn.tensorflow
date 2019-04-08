/*
 * 3.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */

int ifrun(int year)
{
    if(year%4!=0) return 0;
    else {
    	if(year%100!=0) return 1;
    	else
    	{
    		if(year%400==0) return 1;
    		else return 0;
    	}
    }
}
int jisuan(int y, int m, int d)
{
	if(m==1) return d;
	else if(m==2) return 31+d;
	else if(m==3) return 31+28+d+ifrun(y);
	else if(m==4) return 31+28+31+d+ifrun(y);
	else if(m==5) return 30+31+28+31+d+ifrun(y);
	else if(m==6) return 31+30+31+28+31+d+ifrun(y);
	else if(m==7) return 30+31+30+31+28+31+d+ifrun(y);
	else if(m==8) return 31+30+31+30+31+28+31+d+ifrun(y);
	else if(m==9) return 31+31+30+31+30+31+28+31+d+ifrun(y);
	else if(m==10) return 30+31+31+30+31+30+31+28+31+d+ifrun(y);
	else if(m==11) return 31+30+31+31+30+31+30+31+28+31+d+ifrun(y);
	else return 30+31+30+31+31+30+31+30+31+28+31+d+ifrun(y);
}
int main()
{
	int y1, y2, m1, m2, d1, d2;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	int k, sum=0;
	for(int i=y1; i<y2; i++)
	{

		if(ifrun(i)==1) sum=sum+366;
		else sum=sum+365;
	}
	k=sum+jisuan(y2,m2,d2)-jisuan(y1,m1,d1);

    cout<<k;
	return 0;

}
