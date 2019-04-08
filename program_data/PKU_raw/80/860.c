const int day1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
const int day2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int i, y1, y2, m1, m2, d1, d2, ans=0;
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	for (i=y1; i<=y2-1; i++)
		if (((i%4==0)&&(i%100!=0))||(i%400==0))
			ans=ans+366;
		else
			ans=ans+365;
	for (i=1; i<m1; i++)
		if (((y1%4==0)&&(y1%100!=0))||(y1%400==0))
			ans=ans-day2[i];
		else
			ans=ans-day1[i];
	ans=ans-d1;
	for (i=1; i<m2; i++)
		if (((y2%4==0)&&(y2%100!=0))||(y2%400==0))
			ans=ans+day2[i];
		else
			ans=ans+day1[i];
	ans=ans+d2;
	cout << ans << endl;
	return 0;
}