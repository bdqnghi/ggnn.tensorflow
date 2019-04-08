int main ()
{
	int y,m,d;
	int mth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int leap;
	int sum=0;
	int i;

	cin>>y>>m>>d;
	if((y%400==0) || (y%100!=0) && (y%4==0))
		leap=1;
	else
		leap=0;
	if(leap)
		mth[2]=29;

	for(i=1;i<=m-1;i++)
		sum=sum+mth[i];


	sum=sum+d;

	cout<<sum;
	return 0;
}




