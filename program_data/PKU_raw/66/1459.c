
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
	int nian,yue,ri,all=0,i;
	cin>>nian>>yue>>ri;
	if(nian>2000)nian=nian%2000;
	for(i=1;i<nian;i++)
	{
		if(runnian(i)==1)
			all+=366;
		else all+=365;
	}
	all+=tian(nian,yue,ri);
	char xingqi[7][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	cout<<xingqi[(all-1)%7]<<endl;

	return 0;
}