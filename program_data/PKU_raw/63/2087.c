int main()
{
	int x,y,x1,x2,y1,y2,i,j,k,a[100][100],b[100][100],c[100][100];
	memset(c,0,sizeof(c));
	cin>>x1>>y1;
	for(i=0;i<x1;i++)
	for(j=0;j<y1;j++)
	cin>>a[i][j];
	cin>>x2>>y2;
	for(i=0;i<x2;i++)
	for(j=0;j<y2;j++)
	cin>>b[i][j];
	x=x1; y=y2;
	for(i=0;i<x;i++)
	for(j=0;j<y;j++)
    for(k=0;k<x2;k++) 
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
    for(i=0;i<x;i++)
	{
		cout<<c[i][0];
		for(j=1;j<y;j++)
	    cout<<" "<<c[i][j];
	    cout<<endl;
	}
	return 0;
}
    