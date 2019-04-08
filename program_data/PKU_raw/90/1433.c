int divide(int,int);
int main()
{
	int group,platenum,applenum;
	int i;
	cin>>group;
	for(i=0;i<group;i++)
	{
		cin>>applenum>>platenum;
		cout<<divide(applenum,platenum)<<endl;
	}
	return 0;
}
int divide(int a,int p)
{
	if(a==0) return 1;
	else if(p==1) return 1;
	else if(a>=p) return divide(a,p-1)+divide(a-p,p);
	else return divide(a,p-1);
}
