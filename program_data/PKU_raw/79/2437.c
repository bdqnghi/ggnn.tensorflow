//????4_1.cpp
//???2013?10?
//????????
int main()
{
	int j;
	for(j=1;;j++)
	{
	int a[301],i,m,n,k,t;
	cin>>n>>m;
	if((m==0)&&(n==0))
		break;
	for(i=1;i<=n;i++)          //?a[i]??????
		a[i]=1;
	t=n;
	k=0;
	i=0;
	while(n>1)                //?????????????????
	{
		k=k+1;
		i=i+1;
		int i0=i;
		for(;;i0++)
		{
		if(i0>t)
			i0=i0-t;
		if(a[i0]==1)
		   { 
			i=i0;
		    break;
		   }
		}
		if(k==m)
		{
			a[i]=0;
			k=0;
			n=n-1;
		}
	}
	for(i=1;i<=t;i++)        //????????????????
	{
		if(a[i]==1)
			cout<<i<<endl;
	}
	}
	return 0;
}

	




