int leap(int y)
{
		if (
		   (y%100==0)&&(y%400==0)
		   ||
					(y%100!=0)&&(y%4==0)
					)
				return 1; else return 0;
}

int days(int y,int d,int r)
{
		int a[13]={0,0,31,28,31,30,31,30,31,31,30,31,30};
		if (leap(y)) a[3]=29;
		int ans=0;
		for (int i=1;i<=d;i++) ans+=a[i];
		return ans+r;
}
int daysf(int y,int d,int r)
{
		int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		if (leap(y)) a[2]=29;
		if ((d>=1)&&(d<=12)&&(r>=1)&&(r<=a[d])) return 1;else return 0;
}
int main()
{
	long long y,d,r,n;
//	cin>>n;
//	while (n>0)
//	{
	cin>>y>>d>>r;//d=-d;r=-r;
	//cout<<days(y,d,r);
	//if (leapyear(y)) cout<<'N'; else cout<<'N';

	//if ((days(y,d,1)-days(y,r,1))%7==0) cout<<"YES"; else cout<<"NO";cout<<endl;
//	n--;
//}
y--;
//n=(y/4-(y/100-y/400));
switch ((y*365+y/4-(y/100-y/400)+days(y+1,d,r))%7)
{
	case 0:cout<<"Sun.";break;
	case 1:cout<<"Mon.";break;
	case 2:cout<<"Tue.";break;
	case 3:cout<<"Wed.";break;
	case 4:cout<<"Thu.";break;
	case 5:cout<<"Fri.";break;
	case 6:cout<<"Sat.";break;
}cin>>y;
}
