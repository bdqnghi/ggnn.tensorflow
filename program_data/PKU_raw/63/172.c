int main()
{
	int x1,y1,x2,y2;                                               //??????
	int a[100][100],b[100][100],c[100][100];                       //??????
	int i,j,k;                                                     //??????
	cin>>x1>>y1;                                                   //????a??
	for(i=0;i<x1;i++)                                              //????????
	{
		for(j=0;j<y1;j++)      
			cin>>a[i][j];
	}
	cin>>x2>>y2;                                                   //????b??
	for(i=0;i<x2;i++)                                              //????????
	{
		for(j=0;j<y2;j++)
			cin>>b[i][j];
	}
	for(i=0;i<100;i++)                                             //??c???
	{
		for(j=0;j<100;j++)
			c[i][j]=0;
	}
	for(i=0;i<x1;i++)                                              //????c????
	{
		for(j=0;j<y2;j++)
		{
			for(k=0;k<x2;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}
	for(i=0;i<x1;i++)                                              //????c
	{
		for(j=0;j<y2-1;j++)
			cout<<c[i][j]<<' ';                                    //??????
		cout<<c[i][y2-1]<<endl;                                    //????
	}
	return 0;
}