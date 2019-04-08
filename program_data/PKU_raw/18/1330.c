int n,l,s=0;
int jz[100][100];
int f()
{
	int i,j,k,min=10000;
	if(n==1){
		cout<<s<<endl;
		s=0;
		n=l;
		return 0;
	}
	else
		{
		for(i=0;i<n;i++)
		{for(j=0;j<=n;j++)
		{if(j<n)
			{if(jz[i][j]<min)
			min=jz[i][j];}
		else{
			for(k=0;k<n;k++)
				jz[i][k]=jz[i][k]-min;
			min=10000;
		}}}
		for(i=0;i<n;i++)
				{for(j=0;j<=n;j++)
				{if(j<n)
					{if(jz[j][i]<min)
					min=jz[j][i];}
				else{
					for(k=0;k<n;k++)
						jz[k][i]=jz[k][i]-min;
					min=10000;//????
				}}}
		s=s+jz[1][1];
		for(i=0;i<n;i++)
			for(j=1;j<n-1;j++)
			jz[i][j]=jz[i][j+1];
		for(i=0;i<n;i++)
					for(j=1;j<n-1;j++)
					jz[j][i]=jz[j+1][i];//????
		n=n-1;
		f();
		}
}
int main()
{
	int i,j,k;
	cin>>n;
	l=n;
	for(i=1;i<=l;i++)
	{
		for(j=0;j<l;j++)
			for(k=0;k<l;k++)
				cin>>jz[j][k];
		f();
	}
return 0;
}
