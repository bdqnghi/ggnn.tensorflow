int main()
{
	int n,day;
	cin>>n;
	char r[100][100];
	int a[100][100]={0};
	int i,j,k,p,q,sum=0,l,o;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{	
			cin>>r[i][j];
			if(r[i][j]=='@')a[i][j]=1;
			if(r[i][j]=='#')a[i][j]=0;
			if(r[i][j]=='.')a[i][j]=-1;
		}
	cin>>day;
	for(k=1;k<day;k++)
	{
		for(p=1;p<=n;p++)
			for(q=1;q<=n;q++)
			{	
				if(a[p][q]==k)
				{
					if(a[p+1][q]==-1)a[p+1][q]=k+1;
					if(a[p-1][q]==-1)a[p-1][q]=k+1;
					if(a[p][q+1]==-1)a[p][q+1]=k+1;
					if(a[p][q-1]==-1)a[p][q-1]=k+1; 
				}
			}
	}
	for(l=1;l<=n;l++)
	{
		for(o=1;o<=n;o++)
		{
			if(a[l][o]>0)sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}