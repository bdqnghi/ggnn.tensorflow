
int main()
{
	int a,b,c,i,yorn,day=0,days[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31},year[2]={365,366};
	char week[7][4]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	cin>>a>>b>>c;
	for(i=1;i<a;i=i+400)
		day=day;
	for(i=i-400;i<a;i++)
		day+=year[((i%100!=0)&&(i%4==0))||(i%400==0)];
	yorn=((a%100!=0)&&(a%4==0))||(a%400==0);
	for(i=0;i<b-1;i++)
		day+=days[yorn][i];
	day+=c;
	cout<<week[day%7]<<"."<<endl;
	return 0;
}
