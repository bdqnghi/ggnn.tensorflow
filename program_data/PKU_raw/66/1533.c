

int main()
{
	int n,a,b;
	while(cin>>n>>a>>b){
	int x[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(n%4==0&&n%100!=0||n%400==0)x[1]=29;
	else x[1]=28;
	int day=0;
	for(int i=0;i<a-1;i++)
	{
		day+=x[i];
	}
	day+=b;
	int X=(n-1)%400;
	for(int i=1;i<=X;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)day+=2;
		else day++;
	}
	int m=(day-1)%7;
	switch (m)
	{
	case 1:cout<<"Tue."<<endl;break;
	case 2:cout<<"Wed."<<endl;break;
	case 3:cout<<"Thu."<<endl;break;
	case 4:cout<<"Fri."<<endl;break;
	case 5:cout<<"Sat."<<endl;break;
	case 6:cout<<"Sun."<<endl;break;
	case 0:cout<<"Mon."<<endl;break;
	}}
	return 0;
}
