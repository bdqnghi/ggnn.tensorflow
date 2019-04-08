int a[5][5];
int n,m;
int jiaohuan(int a[5][5],int n,int m)
{
	int i,b[5];
	if(n<0||n>=5||m<0||m>=5)     return 0;
	else 
	{ 
		for(i=0;i<=4;i++)
		{
			b[i]=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=b[i];
		}
	}
	return 1;
}
int main()
{
	int i=0,temp;
	int j=0;
     for(i=0;i<5;i++)
		 for(j=0;j<5;j++)
           cin>>a[i][j];
		 cin>>n>>m;
		 temp=jiaohuan(a,n,m);
		 if(temp==0)  cout<<"error"<<endl;
		 else 
		 {
	         for(i=0;i<5;i++)
			 {
		          for(j=0;j<4;j++)
					  cout<<a[i][j]<<" ";
				  cout<<a[i][4]<<endl;
			 }
		 }
		 return 0;
}
			 
		 
		 
