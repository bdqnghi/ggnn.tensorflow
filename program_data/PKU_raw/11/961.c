
int runnian(int a)
{
	if(a%4==0&&a%400==0)
		return 1;
	if(a%4==0&&a%100!=0)
		return 1;
	else return 0;
}
int tian(int nian,int yue,int ri)
{
	int sum=0,i;
	int run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int feirun[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(runnian(nian)==1)
	{
		for(i=0;i<=yue-2;i++)
			sum+=run[i];
		sum+=ri;
	}
	else 
	{
		for(i=0;i<=yue-2;i++)
			sum+=feirun[i];
		sum+=ri;
	}
	return sum;
}

int main()
{
	int nian,yue,ri;
	cin>>nian>>yue>>ri;
	cout<<tian(nian,yue,ri)<<endl;
	return 0;
}