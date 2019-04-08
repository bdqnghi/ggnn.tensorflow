
int main()
{
	int x[20],r,ctr,t,i,j;
	while(cin.peek()!='-')
	{
		r=ctr=0;
		while(cin>>t,t)
			x[++r]=t;
		cin.get();
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=r;j++)
			{
				if(x[i]==(x[j]<<1))
					ctr++;
			}
		}
		cout<<ctr<<endl;
	}
	return 0;
}