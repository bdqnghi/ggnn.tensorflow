int yearbegin(int y,int m,int d);
int pm[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},
		rm[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int sy,sm,sd,
		ey,em,ed;
	cin>>sy>>sm>>sd>>ey>>em>>ed;
	int sum=0;

	for(int i=sy+1;i<=ey-1;i++)
		if( (i%4==0 && i%100!=0) || (i%400==0) )
			sum=sum+366;
		else sum=sum+365;

	int syb=yearbegin(sy,sm,sd);
	int eyb=yearbegin(ey,em,ed);

	if(sy!=ey){
	if( (sy%4==0 && sy%100!=0) || (sy%400==0) )
	 syb=366-syb;
	else syb=365-syb;

	sum=sum+syb+eyb;}

	else sum=eyb-syb;

	cout<<sum;


	return 0;
}
int yearbegin(int y,int m,int d)
{
	int sumday=0;
	if( (y%4==0 && y%100!=0) || (y%400==0) )
		for(int i=1;i<m;i++)
			sumday=sumday+rm[i];
	else for(int i=1;i<m;i++)
		    sumday=sumday+pm[i];
    sumday=sumday+d;
	return sumday;
}
