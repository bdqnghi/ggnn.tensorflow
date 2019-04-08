
int main()
{
	char c[1000];
    int m,i,j,a[1000],k;
	cin>>m;
	a[0]=2;
	if(m!=0)
	{
	for(i=1;i<1000;i++)
	{
		a[i]=0;
	}
	for(i=0;i<m-1;i++)
	{
        for(j=0;j<=1000;j++)
		{
			a[j]=a[j]*2;
		}
		for(j=0;j<1000;j++)
		{
			if(a[j]>9)
			{
				a[j]=a[j]%10;
				a[j+1]++;
			}
		}
	}
	i=999;
	while(a[i]==0)i--;
	for(k=i;k>=0;k--)
	{
		cout<<a[k];
	}
	cout<<endl;
	}
	else cout<<"1"<<endl;
	return 0;
}