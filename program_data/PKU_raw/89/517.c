int main()
{
	int a[10000]={0},b[10000]={0},n,i,j,k,q;//a??????????????
	cin>>n;
	q=0;
	while(n!=0)
	{
		cin>>i>>j;
		if(i==0&&j==0)
		{
			break;
		}
		a[i]++;
		b[j]++;
	}
	for(k=0;k<=n-1;k++)
	{
		if(b[k]==n-1&&a[k]==0)
		{
			cout<<k;
			q=1;
		}
	}
	if(q==0)
	{
		cout<<"NOT FOUND";
	}
		return 0;
}



	
	



    

	