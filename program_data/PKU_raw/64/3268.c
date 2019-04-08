int main()
{
	int n,i,j,k=0,l;
	double a[102][4],b[102][102],c[2000]={0};
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			b[i][j]=sqrt((a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2])+(a[i][3]-a[j][3])*(a[i][3]-a[j][3]));
			c[k]=b[i][j];
			k++;
		}
	}
	sort(c,c+n*(n-1)/2);
    for(k=n*(n-1)/2-1;k>=0;k--)
	{if(c[k+1]==c[k])continue;
	for(i=1;i<=n-1;i++)
		{
			for(j=i+1;j<=n;j++)
			{	
				
					if(b[i][j]==c[k])
					{cout<<"("<<a[i][1]<<","<<a[i][2]<<","<<a[i][3]<<")-("<<a[j][1]<<","<<a[j][2]<<","<<a[j][3]<<")=";
				     printf("%.2f",c[k]);
					 cout<<endl;}
				
				
			}
		}
	}
	

	
	return 0;
}