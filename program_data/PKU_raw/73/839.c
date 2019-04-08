
int max(int n,int *a);
int min(int n,int *a);

int main()
{
	int num0[5][5],num1[5][5];
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	{
		cin>>num0[i][j];
		num1[j][i]=num0[i][j];
	}
	int flag=1;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(num0[i][j]==max(5,num0[i])&&num1[j][i]==min(5,num1[j]))
			{
				cout<<i+1<<' '<<j+1<<' '<<num0[i][j]<<endl;
				flag=0;
				break;
			}
		}
	}
	if(flag)
	cout<<"not found"<<endl;
	return 0;
}

int max(int n,int *a)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}

int min(int n,int *a)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	return min;
}
