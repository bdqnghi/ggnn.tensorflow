int main()
{
	int a[100][100],b[100][100],c[100][100]={0};
	int i,j,m,n,p,q,x1,y1,x2,y2,k;
	cin>>x1>>y1;
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>x2>>y2;
	for(m=0;m<x2;m++)
	{
		for(n=0;n<y2;n++)
		{
			cin>>b[m][n];
		}
	}
	for(p=0;p<x1;p++)
	{
		for(q=0;q<y2;q++)
		{
			for(k=0;k<y1;k++)
			{
				c[p][q]=a[p][k]*b[k][q]+c[p][q];
			}
		}
	}
	for(p=0;p<x1;p++)
	{
		for(q=0;q<y2;q++)
		{
			if(q!=y2-1)
				cout<<c[p][q]<<" ";
			else 
				cout<<c[p][q];
		
		}
		cout<<endl;
	}
	return 0;
}
