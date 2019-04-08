int sum=0,used[32770]={0};//????sum???????????used?i???i????????
void f(int n)//??f??n????????
{
	for(int i=2;i<=n;i++)
	{
		if(n%i==0&&used[i]==0)
		{
			if(i!=2)
			{
				for(int j=2;j<=i-1;j++)
					used[j]=1;
			}
			if(n/i==1)//??????????
			{
				sum++;
				break;
			}
			else
			{
				f(n/i);
			}
			memset(used,0,sizeof(used));//?used???????
		}
	}
}
int main()
{
	int m,a[100];
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
		if(a[i]==1)
			cout<<1<<endl;
		else
		{
			f(a[i]);
			cout<<sum<<endl;
			sum=0;//??
			memset(used,0,sizeof(used));
		}
	}
	return 0;
}