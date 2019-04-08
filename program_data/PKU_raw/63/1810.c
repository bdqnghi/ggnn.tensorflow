//*******************************
//????***********
int main()
{
	int a[100][100],b[100][100],c[100][100]={0};
	int x1,y1,x2,y2;
	cin>>x1>>y1;
	for(int i=0;i<x1;i++)
		for(int j=0;j<y1;j++)
			cin>>a[i][j];
	cin>>x2>>y2;
	for(int i=0;i<x2;i++)
		for(int j=0;j<y2;j++)
			cin>>b[i][j];
	for(int i=0;i<x1;i++)
		for(int j=0;j<y2;j++)
			for(int q=0;q<y1;q++)
				{
					c[i][j]+=a[i][q]*b[q][j];
			    }
	for(int i=0;i<x1;i++)
	   {
		   for(int j=0;j<(y2-1);j++)
			 {
				 cout<<c[i][j]<<' ';
		     }
		      cout<<c[i][y2-1]<<endl;
	}
		return 0;
}