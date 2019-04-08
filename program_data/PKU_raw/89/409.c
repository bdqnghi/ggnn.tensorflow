
int main()
{
	int n,p1[10000],p2[10000],k,i,j;
	cin>>n;
	for(k=0;k<n;k++)
		p1[k]=p2[k]=0;
	while(cin>>i>>j)
	{
		if(i==0&&j==0) break;
		p1[i]++;
		p2[j]++;
	}
	for(k=0;k<n;k++)
		if(p2[k]==n-1&&p1[k]==0)
		{
			cout<<k;
			break;
		}
	if(k==n)
	cout<<"NOT FOUND";
	return 0;

}