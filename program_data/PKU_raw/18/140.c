
int min(int a,int b)//????
{
	return a<b?a:b;
}

int f(int n,int number[100][100])//???????
{
		int num[100],m=10000;//num??????????
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				m=min(m,number[i][j]);
			}
			num[i]=m;
			m=10000;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				number[i][j]=number[i][j]-num[i];
			}
		}
		//???
		m=10000;
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<n;i++)
			{
				m=min(m,number[i][j]);
			}
			num[j]=m;
			m=10000;
		}
		for(int j=0;j<n;j++)
		{
			for(int i=0;i<n;i++)
			{
				number[i][j]=number[i][j]-num[j];
			}
		}
	//???
        if(n==2)
	//???2*2???,????[1][1]
	    return number[1][1];
	    else
	    {
		 int sum;
         sum=number[1][1];
		 for(int j=0;j<n;j++)//??????? 
		 {
		   	for(int i=1;i<n-1;i++)
			{
				number[i][j]=number[i+1][j];
			}
         }
		 for(int i=0;i<n;i++)
		 {
			for(int j=1;j<n-1;j++)
			{
				number[i][j]=number[i][j+1];
			}
		 }
		 return sum+f(n-1,number);
      }
}

int main()
{
	int n,sum=0;
	cin>>n;
	int n1=n;
	while(n--)
	{
		int number[100][100];
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n1;j++)
			{
				cin>>number[i][j];
			}
		}
		int sum=f(n1,number);
		cout<<sum<<endl;
	}
	return 0;
}
