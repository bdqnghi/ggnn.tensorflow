int main()
{
	int y1,y2,m1,m2,d1,d2,sum=0;
	cin >>y1>>m1>>d1>>y2>>m2>>d2;
	for (int year = y1 + 1; year < y2; year++)
		sum += 365 + ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	int num1[12] = {31,28,31,30,31,30,31,31,30,31,30,31},num2[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	int m;
	if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
	{
		sum += (num2[m1 - 1] - d1);
		for (m = m1 + 1; m <=12;m++)
			sum += num2[m-1];
	}
	else
	{
		sum += (num1[m1 - 1] - d1);
		for (m = m1 + 1; m <=12;m++)
			sum += num1[m-1];
	}
	sum += d2;
	if ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
	{
		for (m = 1; m < m2;m++)
			sum += num2[m-1];
	}
	else
	{
		for (m = 1; m < m2;m++)
			sum += num1[m-1];
	}
	if(y1 == y2)
		sum -= (365 + ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0)));
	cout <<sum <<endl;
	return 0;
}