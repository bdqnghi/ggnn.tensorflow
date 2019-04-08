int main()
{
	int a[100][11][11],i,j,num,days,day;
	for(day=0;day<100;day++)
		for(i=0;i<11;i++)
			for(j=0;j<11;j++)
				a[day][i][j]=0;
	cin>>num>>days;
	a[0][5][5]=num;
	for(day=0;day<days;day++)
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++)
				a[day+1][i][j]=(a[day][i-1][j-1]+a[day][i-1][j]+a[day][i-1][j+1]+
				                a[day][i][j-1]+a[day][i][j+1]+
								a[day][i+1][j-1]+a[day][i+1][j]+a[day][i+1][j+1])+
								2*a[day][i][j];
	for(i=1;i<=9;i++)
			for(j=1;j<=9;j++)
			{
				if(j==9)
					cout<<a[days][i][j]<<endl;
				else
					cout<<a[days][i][j]<<' ';
			}
	return 0;
}