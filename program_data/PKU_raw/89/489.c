int main()
{
	int n,i,j,bmax,max,b[10000]={0},count[10000]={0};
	cin>>n;
	while(1)
	{
		cin>>i>>j;
		if(i==0&&j==0)
			break;
		b[j]++;
		count[i]++;
	}
	bmax=b[0];
	max=0;
	for(int k=1;k<n;k++)
		if(b[k]>bmax)
		{
			bmax=b[k];
			max=k;
		}
	if(count[max]==0)
		cout<<max<<endl;
	else
		cout<<"NOT FOUND"<<endl;
	return 0;
}