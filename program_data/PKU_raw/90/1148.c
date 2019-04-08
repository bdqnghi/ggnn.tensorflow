int zhonglei(int m,int n)
{
	int temp;
	if(m==0)
		return 1;
	else if(m==1)
		return 1;
	else if(n==1)
		return 1;
	else if (m<0)
		return 0;
	else 
	{
		temp=zhonglei(m-n,n);
	    temp=temp+zhonglei(m,n-1);
	    return temp;
	}
}
int main()
{
	int t,i,tm,tn,tk;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>tm>>tn;
		tk=zhonglei(tm,tn);
		cout<<tk<<endl;
	}
	return 0;
}
