int main()
{
	char a[105],b[105];
	int n,i,j,k,chang1,chang2;
	cin>>n;
	while(n--)
	{
		cin>>a;
		cin>>b;
		chang1=strlen(a);
		chang2=strlen(b);
		i=chang1-1;
		j=chang2-1;
		while(j>=0)
		{
			if(a[i]<b[j])
			{
				if(a[i-1]==0)
				{
					a[i-2]--;
					a[i-1]='9';
					a[i]=a[i]+10;
				}
				else
				{
					a[i-1]--;
					a[i]=a[i]+10;
				}
			}
			a[i]=a[i]-b[j]+'0';
			i--;
			j--;
		}
		k=0;
		if(a[0]=='0')
		{
			for(k=0;k<chang1;k++)
			{
				if(a[k]!='0')
					break;
			}
		}
		if(k==chang1-1)
			cout<<a[k];
		else
			for(i=k;i<chang1;i++)
				cout<<a[i];
		
		cout<<endl;
	}
	return 0;
}
