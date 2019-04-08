
int main()
{
	int n,i=0,s=0,d=0,j=0,i1=0,j1=0,k=0,a=0,sum=0;
	cin>>n;
	int shu[n][n];
	for(k=0;k<n;k++)    //??n-1? 
	{
		sum=0;d=0;
		for(i=0;i<n;i++)         // ?? 
			for(j=0;j<n;j++)
				cin>>shu[i][j];
		for(s=1;s<=n-1;s++)
		{
		for(i=0;i<n-d;i++)             //??????? 
		{   a=100000;
			for(j=0;j<n-d;j++)
			{   
				if(a>shu[i][j]) {a=shu[i][j];}
              
			}
			for(j=0;j<n-d;j++) shu[i][j]=shu[i][j]-a;   //??????? 
		}
			for(j=0;j<n-d;j++)
		{   a=100000;
			for(i=0;i<n-d;i++)
			{   
				if(a>shu[i][j]) {a=shu[i][j];}
              
			}
			for(i=0;i<n-d;i++) shu[i][j]=shu[i][j]-a;
		}
		sum=sum+shu[1][1];d++;//cout<<sum<<endl;
		for(i=0;i<n-d;i++)             //????????? 
		{
			for(j=0;j<n-d;j++)
			{
				if(j>0) j1=j+1;
				else   j1=j;
				if(i>0) i1=i+1;
				else  i1=i;
				shu[i][j]=shu[i1][j1];
			}
		}
        }
		
          cout<<sum<<endl; 
		}
	
		return 0;
}
