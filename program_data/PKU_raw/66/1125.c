int main()
{
	int a, b, c, i,d, sum=0;
	cin >> a >> b >> c;
	a=a%400;
	if (a==0)
		a=400;
	for (i=1;i<a;i++)
	{
		if ((i%400==0) || (i%4==0 && i%100!=0))
			sum = sum + 2;
		else
			sum++;
	}
	for (i=1;i<b;i++)
	{
		switch(i)
		{
		case 1: sum=sum+3;break;
		case 3: sum=sum+3;break;
		case 5: sum=sum+3;break;
		case 7: sum=sum+3;break;
		case 8: sum=sum+3;break;
		case 10: sum=sum+3;break;
		case 12: sum=sum+3;break;
		case 4: sum=sum+2;break;
		case 6: sum=sum+2;break;
		case 9: sum=sum+2;break;
		case 11: sum=sum+2;break;
		default: break;
		}
	}
	if (b>2 && (a%400==0) ||(a%4==0 && a%100!=0))
		sum++;
	sum=sum+c;
	d=sum%7;
	switch(d)
	{
		case 1: cout << "Mon."; break;
		case 2: cout << "Tue.";break;
		case 3: cout << "Wed.";break;
		case 4: cout << "Thu.";break;
		case 5: cout << "Fri.";break;
		case 6: cout << "Sat.";break;
		default: cout << "Sun.";break;
	}
	return 0;
}
