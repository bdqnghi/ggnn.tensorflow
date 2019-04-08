int main ()
{
	int s,i,j,t,k,num;
	cin >> s;
	int y,n,m;
	for (i=0;i<s;i++)
	{
		num=0;
		cin >> y >> n >> m;
		if ((y%100!=0 && y%4==0)||(y%400==0))
		t=1;
		else
		t=0;
		if (n>m)
		{
			k=n;
			n=m;
			m=k;
		}
		for (j=n;j<m;j++)
		{
			if (j==1||j==3||j==5||j==7||j==8||j==10||j==12)
			num+=31;
			if (j==4||j==6||j==9||j==11)
			num+=30;
			if (j==2)
			{
				if (t==1)
				num+=29;
				else 
				num+=28;
			}
		}
		if (num%7==0)
		cout << "YES" <<endl;
		else 
		cout << "NO" <<endl;
	}
	return 0;
}