int main()
{
	int m,i,j,k,a[1000],c[91],max=0;
	char b[1000][26],d;
	cin>>m;
	memset(c,0,sizeof(c));
	for(i=0;i<m;i++)
	{
		cin>>a[i]>>b[i];
		for(j=0;j<26;j++)
			if(b[i][j]>0)
				c[b[i][j]]++;
	}
	for(i=65;i<91;i++)
		if(c[i]>max)
			max=c[i];
	for(i=65;i<91;i++)
		if(c[i]==max)
		{
			d=i;
			cout<<d<<endl<<max<<endl;
			for(j=0;j<m;j++)
				for(k=0;k<26;k++)
					if(b[j][k]==d)
					{
						cout<<a[j]<<endl;
						break;
					}
		}
	return 0;
}