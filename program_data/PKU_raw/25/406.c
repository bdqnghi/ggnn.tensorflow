int main()
{
	int n;
	int an[100]={4,2,8,1,4,7,3,7,0,1,-1};
	int carry=0;
	int dig;
	cin>>n;
	if(n<=30)
		cout<<(int)pow((double)2,(double)n)<<endl;
	else
	{
		n=n-30;
		for(int i=0;i<n;i++)
		{
			carry=0;
			for(dig=0;an[dig]+1;dig++)
			{
				an[dig]=an[dig]*2+carry;
				carry=an[dig]/10;
				an[dig]=an[dig]%10;
			}
			if(carry)
			{
				an[dig]=carry;
				an[dig+1]=-1;
			}
		}
		int st;
		for(st=100;an[st]!=-1;st--){}
		for(int i=st-1;i>=0;i--)
			cout<<an[i];
		cout<<endl;
	}
	return 0;
}