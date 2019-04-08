int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int sign=0;
int work(int n)
{
	int s=12,i;
	for(i=1;i<n;i++)
	s+=a[i];
	if((s+sign)%7==5)
	return 1;
	else
	return 0;
}
int main()
{
	int n,m,i;
	cin>>sign;
	for(i=1;i<=12;i++)
	if(work(i))
	cout<<i<<endl;
	return 0;
}
