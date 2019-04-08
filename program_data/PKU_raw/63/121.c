int main()
{
	int a[101][101],b[101][101],c[101][101]={0};
	int x1,y1,x2,y2=0;
	int i,j,k,l,m,n,p,r,s;
	cin>>x1>>y1;
	for(i=1;i<=x1;i++)
		for(j=1;j<=y1;j++)
			cin>>a[i][j];
    cin>>x2>>y2;
	for(k=1;k<=x2;k++)
		for(l=1;l<=y2;l++)
			cin>>b[k][l];
    for(m=1;m<=x1;m++)
		for(n=1;n<=y2;n++)
			for(p=1;p<=y1;p++)
				c[m][n]=c[m][n]+a[m][p]*b[p][n];
    for(r=1;r<=x1;r++)
	{
		for(s=1;s<y2;s++)
		{
			cout<<c[r][s]<<" ";
		}			
	    cout<<c[r][y2]<<endl;
	}		
    return 0;
}