int main()
{
	int a[100][100],b[100][100],x1,x2,y1,y2,i,j;
	cin>>x1>>y1;
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)
		{
			cin>>a[i][j];
		}
	cin>>x2>>y2;
    for(i=0;i<x2;i++)
		for(j=0;j<y2;j++)
		{
			cin>>b[i][j];
		}
	int c[100][100]={0},p,q;
	for(p=0;p<x1;p++)
		for(q=0;q<y2;q++)
		for (i=0;i<y1;i++)
				c[p][q]+=a[p][i]*b[i][q];

	for(p=0;p<x1;p++)
	{
		for(q=0;q<y2-1;q++)	
			cout<<c[p][q]<<" ";
		cout<<c[p][y2-1]<<endl;
	}


		
		
return 0;
}
