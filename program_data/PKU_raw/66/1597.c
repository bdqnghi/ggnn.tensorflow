
int year[2]={365,366};
int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
char*week[7]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
int leap(int a)
{                             
	if(a%400==0||(a%4==0&&a%100!=0))     //??????????????????????????????
		return 1;
	else return 0;
}
int main()
{
	int y,m,d;
	cin>>y>>m>>d;
	int day=0;
	for(int i=1;i*400<=y-1;i++)                //????????
		day=(day+365*400+100-3)%7;
	for(int i=1;i<=(y-1)%400;i++)           //???????
		day=(day+year[leap(i)])%7;
	for(int i=1;i<m;i++)                    //???????
		day=(day+month[leap(y)][i-1])%7;
	day=(day+d-1)%7;                        //????
	cout<<week[day]<<endl;
	return 0;
}