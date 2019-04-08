/*
 * fuxi008_xiangguanyue.cpp
 * name:???
 *  Created on: 2011-12-23
 *      Author: zhujile
 */
int sday[12]={1,32,61,92,122,153,183,214,245,275,306,336}; //??????????
int nday[12]={1,32,60,91,121,152,182,213,244,274,305,335}; //????
void spe()                          //????
{
	int a,b;
	cin>>a>>b;
	if ((sday[a-1]-sday[b-1])%7==0) //??7??
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
void nor()                          //???
{
	int a,b;
	cin>>a>>b;
	if ((nday[a-1]-nday[b-1])%7==0) //??7??
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(){
	int n,year;
	cin>>n;                         //????
	while (n--)
	{
		cin>>year;                  //????
		if ((year%4==0&&year%100!=0)||(year%400==0)) //????
			spe();
		else
			nor();
	}
	return 0;
}
