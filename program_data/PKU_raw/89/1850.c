int a[10000][10000];

int main()
{
	int i,j,n,flag=1;
	cin>>n;
	while(cin>>i>>j)
	{
		if (i==0 && j==0)	break;
		a[i][j]=1;
	}
	i=0;
	j=1;
	while(j<n)
	{
		if (a[i][j]==0)	j++;
		else	{
			i=j;
			j++;
		}
	}
	for (j=0;j<n;j++)
	{
		if (i==j)	continue;
		if (a[i][j]==1 || a[j][i]==0) {
			flag=0; 
			break;
		}
	}
	if (flag==0)	cout<<"NOT FOUND"<<endl;
	else cout<<i<<endl;
	return 0;
}

