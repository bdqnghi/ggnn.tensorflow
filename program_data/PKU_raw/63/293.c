int main()
{
	int a[100][100]={0},b[100][100]={0},c[100][100]={0};//????
	int x1=0,y1=0,x2=0,y2=0;
	int i,j,k;
	cin>>x1>>y1;              //??????
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)
			cin>>a[i][j];
	cin>>x2>>y2;
	for(i=0;i<x2;i++)
		for(j=0;j<y2;j++)
			cin>>b[i][j];
	for(i=0;i<x1;i++)         //??????
	{
		for(j=0;j<y2;j++)
		{
			for(k=0;k<x2;k++)
				c[i][j]+=a[i][k]*b[k][j];
			if(j==y2-1)cout<<c[i][j];    //????c
			else cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}