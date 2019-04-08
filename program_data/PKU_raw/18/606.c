int main()
{
	int a[100][100][100],b[100][100],n,i,j,k;
	int c,l,o,p,q,r,s,t;
    int min;
	int w,x,y,z;
	int h,g,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				cin>>a[i][j][k];
			}
		}
	}
	for(c=1;c<=n-1;c++)
	{
		for(l=0;l<n;l++)
		{


			for(o=0;o<=n-c;o++)
			{
				min=a[l][o][1];
			    for(p=0;p<=n-c;p++)
				{
					if(a[l][o][p]<min)min=a[l][o][p];
				}
				for(q=0;q<=n-c;q++)
				{
				    a[l][o][q]-=min;
				}
			}
		    for(r=0;r<=n-c;r++)
			{
				min=a[l][1][r];
				for(s=0;s<=n-c;s++)
				{
					if(a[l][s][r]<min)min=a[l][s][r];
				}
				for(t=0;t<=n-c;t++)
				{
					a[l][t][r]-=min;
				}
			}
			b[l][c]=a[l][1][1];
            for(w=1;w<=n-c-1;w++)
			{
				for(x=0;x<=n-c;x++)
				{
					a[l][w][x]=a[l][w+1][x];
				}
			}
			for(y=1;y<=n-c-1;y++)
			{
				for(z=0;z<=n-c;z++)
				{
					a[l][z][y]=a[l][z][y+1];
				}
			}
		}
	}
	for(h=0;h<n;h++)
	{
		m=0;
		for(g=1;g<=n-1;g++)
		{
			m+=b[h][g];
		}
		cout<<m<<endl;
	}
	
	return 0;
}
