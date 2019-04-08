int main()
{   int s=0,min,n0,a[100][100]={0},temp[100][100];
	cin>>n0;
	for(int z=0;z<n0;++z)
	{   
		s=0;
		for(int i=0;i<n0;++i)
			for(int j=0;j<n0;++j)
			{cin>>a[i][j];}
		for(int n=n0;n>1;--n)
	{
		
		for(int k=0;k<n;++k)
		{
				for(int l=0;l<n;++l)
			{  
				if(l==0)
			    min=a[k][l];
			    else
				min= min>a[k][l]?a[k][l]:min;
		      
			}
		
			for(int l=0;l<n;++l)
			{   
		      a[k][l]-=min;
			}
		}
	
			for(int k=0;k<n;++k)
		{
				for(int l=0;l<n;++l)
			{   if(l==0)
			    min=a[l][k];
			    else
				min= min>a[l][k]?a[l][k]:min;
		      
			}
		
			for(int l=0;l<n;++l)
			{   
		      a[l][k]-=min;
			}
		}
        
			s+=a[1][1];
			for(int i=0;i<n;++i)
				for(int j=0;j<n;++j)
				{
					temp[i][j]=a[i][j];
				}
			for(int i=2;i<n;++i)
			{
				a[i-1][0]=temp[i][0];
			}
			for(int i=2;i<n;++i)
			{
				a[0][i-1]=temp[0][i];
			}
			for(int i=2;i<n;++i)
			for(int j=2;j<n;++j)
			{
				a[i-1][j-1]=temp[i][j];
			}
		}
		cout<<s<<endl;
	}
		return 0;
}