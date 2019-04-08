int main()
{
	int n=100,m=16,i=1,j,k,t=0;
	int a[16];
	while(n>0)
	{
		cin>>a[0];
		if (a[0]==(-1))
			break;
		else
		{
			while(m>0)
			{
				cin>>a[i];
				if (a[i]==0)
					break;
				m--;
				i++;
			}
			for(j=0;j<=i-1;j++)
				for(k=0;k<=i-1;k++)
				{
					if (a[j]==2*a[k])
						t++;
				}
		}
		cout<<t<<endl;
		t=0;
		m=16;
		i=1;
		n--;
	}
	return 0;
}