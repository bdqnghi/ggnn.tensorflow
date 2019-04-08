char f(char x)
{
	if(x=='.')
	return x='&';
	else return x;
}
int temp(char b[110][110],int m)
{
	int i,j,k,k1,num;
	num=strlen(b[0]);
	if(m>1)
	{
	  for(i=0;i<num;i++)
	  {
		  for(j=0;j<num;j++)
		  {
			  if(b[i][j]=='@')
			  {
				 if(i>0&&i<num-1&&j>0&&j<num-1)
				 {
					 b[i][j+1]=f(b[i][j+1]);
					 b[i][j-1]=f(b[i][j-1]);
					 b[i+1][j]=f(b[i+1][j]);
					 b[i-1][j]=f(b[i-1][j]);
				 }
				 if(i==0&&j>0&&j<num-1)
				 {
					  b[i][j+1]=f(b[i][j+1]);
					 b[i][j-1]=f(b[i][j-1]);
					 b[i+1][j]=f(b[i+1][j]);
				 }
				 if(i==num-1&&j>0&&j<num-1)
				 {
					  b[i][j+1]=f(b[i][j+1]);
					 b[i][j-1]=f(b[i][j-1]);
					 b[i-1][j]=f(b[i-1][j]);
				 }
				 if(j==0&&i>0&&i<num-1)
				 {
					  b[i][j+1]=f(b[i][j+1]);
					 b[i+1][j]=f(b[i+1][j]);
					 b[i-1][j]=f(b[i-1][j]);
				 }
				 if(j==num-1&&i>0&&i<num-1)
				 {
					 b[i][j-1]=f(b[i][j-1]);
					 b[i+1][j]=f(b[i+1][j]);
					 b[i-1][j]=f(b[i-1][j]);
				 }
				 if(i==0&&j==0)
				 {
					  b[i][j+1]=f(b[i][j+1]);
					 b[i+1][j]=f(b[i+1][j]);
				}
				 if(i==0&&j==num-1)
				 {
					  b[i][j-1]=f(b[i][j-1]);
					 b[i+1][j]=f(b[i+1][j]);
				 }
				 if(i==num-1&&j==0)
				 {
					 b[i][j+1]=f(b[i][j+1]);
					 b[i-1][j]=f(b[i-1][j]);
				 }
				 if(i==num-1&&j==num-1)
				 {
					  b[i][j-1]=f(b[i][j-1]);
					 b[i-1][j]=f(b[i-1][j]);
				 }
			 }
			  }
		  }
	  for(k=0;k<num;k++)
	  {
		  for(k1=0;k1<num;k1++)
		  {
			  if(b[k][k1]=='&')
				  b[k][k1]='@';
		  }
	  }
	  }
	if(m==1)
		return 0;
	temp(b,m-1);
	}

int main()
{
	int n,i,j;
	cin>>n;
	char a[110][110]={0};
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m,count=0;
	cin>>m;
	temp(a,m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
				count++;
		}
	}
	cout<<count;
	return 0;
}