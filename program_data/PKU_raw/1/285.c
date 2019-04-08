//------------------
//  1057???
//   2010/12/1
//    ???
//------------------

int devide(int m,int x,int i)
{
	if(x==1&&m>=i) return 1;
	else  if(x>1)
	{
		int j=i;
		int sum=0;
		while(j<=m)
		{
			if(j!=1&&m%j==0) sum=sum+devide(m/j,x-1,j);
			j++;
		}
		return sum;
	}
	return 0;
}

int main()
{
	int n,a,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int sum=0;
		cin>>a;
		for(int X=1;X<=16;X++)
			sum+=devide(a,X,1);
		cout<<sum<<endl;
	}
	return 0;
}