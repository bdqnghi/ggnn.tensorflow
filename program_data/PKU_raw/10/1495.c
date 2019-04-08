

int result;

void bfs(int a[],int n,int i,int u)
{
	int j;
	
	if(result<u)
		result=u;
	if(i<n)
	{
		for(j=i+1;j<=n;j++)
		{
			
			if(a[j]<=a[i])
				bfs(a,n,j,u+1);
		}
	}
}

int main()
{
	int R,C,i,j,n;	
	int a[26],b[26][26];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	result=0;
	a[0]=99999;
	bfs(a,n,0,0);
	


	cout<<result<<endl;
	return 0;
}