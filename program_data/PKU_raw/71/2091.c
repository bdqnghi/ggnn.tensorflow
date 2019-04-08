

int days(int m1,int m2,int e[])
{
	int sum=0;
	for(int i=m2;i<m1;i++)
		sum+=e[i];
	return sum;
}


int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int y,m1,m2;
		cin>>y>>m1>>m2;
		int e[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		if(((y%4==0)&&(y%100!=0))||(y%400==0))
			e[2]=29;
		int sum;
		if(m1>m2)
			sum=days(m1,m2,e);
		else
			sum=days(m2,m1,e);
		if(sum%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
 return 0;

}


