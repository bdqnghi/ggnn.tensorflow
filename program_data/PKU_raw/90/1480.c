int putapple(int applenum,int platenum);
int main()
{
	int t,m,n;
	int i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>m>>n;
		cout<<putapple(m,n)<<endl;
	}
		return 0;
}
	int putapple(int applenum,int platenum)
	{

		if(applenum<0||platenum==0)
			return 0;
		if(applenum==0||applenum==1||platenum==1)
			return 1;
		else
			return putapple(applenum,platenum-1)+
			putapple(applenum-platenum,platenum);
	}
		
    