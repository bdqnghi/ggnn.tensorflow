int main()
{
	int y,m,d,i,dd=1;
	int m1[12]={31,28,31,30,31,30,31,31,30,31,30,31},m2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	char f[7][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	cin >> y >> m >> d;
	if((y%400 == 0 || (y%4 == 0 && y%100 !=0)))
		dd += ((y-1)/4-(y-1)/100+(y-1)/400);
	else
		dd += (y/4-y/100+y/400);
	dd=dd%7;
	dd += y-1;
	dd=dd%7;
	for (i=0;i<m-1;i++)
		if (y%400 == 0 || (y%4 == 0 && y%100 !=0))
			dd += m2[i];
		else
			dd += m1[i];
	dd += d-1;
	dd=dd%7;
	if (dd == 0)
		dd=7;
	cout << f[dd-1] << endl;
	return 0;
}