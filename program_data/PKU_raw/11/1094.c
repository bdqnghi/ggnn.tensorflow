

int main ()
{
	int y,m,d,k,leap=0,i,sum=0;
	cin >>y>>m>>d;
	if ((y%4==0&&y%100!=0)||y%400==0)
		leap=1;
	for (i=1;i<m;i++)
	{
		switch (i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			k=31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			k=30;
			break;
		case 2: if (leap==1)
					k=29;
				else k=28;
				break;
		}
		sum+=k;
	}
	cout <<sum+d;
	return 0;
}