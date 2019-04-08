int main()
{
	int i,j,u,k,m[100],n[100],g[100][100][100],num=0;    //?????????
	int *p,(*q)[100];                           //???????????
	cin>>k;                                                               
	for(i=1;i<=k;i++)
	{	
		cin>>m[i]>>n[i];                  //????????????
		for(j=0;j<m[i];j++)
			for(u=0;u<n[i];u++)
				cin>>g[i][j][u];            //?????
	}
	for(i=1;i<=k;i++)
	{
		num=0;
    	for(p=&g[i][0][0];p<=&g[i][0][n[i]-1];p++)  //??????
    		num=num+(*p);
    	for(p=&g[i][m[i]-1][0];p<=&g[i][m[i]-1][n[i]-1];p++) //???????
			num=num+(*p);
		for(q=&g[i][1];q<=&g[i][m[i]-2];q++)  //???????
			num=num+(*(*q));
		for(q=&g[i][1];q<=&g[i][m[i]-2];q++)  //????????
			num=num+(*(*q+n[i]-1));
		cout<<num<<endl;
	}
	return 0;
}



