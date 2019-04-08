int main()
{
	int n,a[1000],b[1000],i,j,i0,j0,sum = 0;
	while(cin>>n)
	{
		sum = 0;
		if(n == 0)
			break;
		for(i = 0;i<n;i++)
			cin>>a[i];
		for(i = 0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(i=j=n-1,i0=j0=0;j>=j0&&i>=i0;j--)
		{
			if(a[i]>b[j])
			{
				sum++;
				i--;
			}
			else if(a[i]<b[j])
			{
				sum--;i0++;
			}
			else 
			{
				if(a[i0]>b[j0])
				{
					sum++;i0++;j0++; j++;
				}
				else if(a[i0]<b[j0])
				{
					sum--;i0++;
				}
				else
				{
					if(a[i0]==b[j])
					{
						i0++;
					}
					else
					{
						sum--;i0++;
					}
				}
			}
		}
		cout<<200*sum<<endl;
	}
	return 0;
}