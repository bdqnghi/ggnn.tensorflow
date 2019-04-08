
int main()
{
	int s[5][5],q,n,flag=0,max,min;
	for(int i=0;i<5;i++)
		{
		for(int j=0;j<5;j++)
			cin>>s[i][j];
		}

	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
	{
			{max=s[i][j];
			min=s[i][j];
               n=i;q=j;

				for(int p=0;p<5;p++)
				{ if(s[i][p]>max){max=s[i][p];q=p;}}

				for(int m=0;m<5;m++)
					{if(s[m][j]<min){min=s[m][j];n=m;}}

		      if(i==n&&q==j){cout<<n+1<<' '<<q+1<<' '<<s[n][q]<<endl;flag=1;}

			}

	}

if(flag==0)cout<<"not found"<<endl;
		return 0;

}
