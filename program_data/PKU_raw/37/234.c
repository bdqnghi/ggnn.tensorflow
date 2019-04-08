int main()
{
	int n,len,i,j,k;
	char a[100000],m;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a;
		int t=0;
		len=strlen(a);
		for(j=0;j<len;j++)
			for(k=j+1;k<len;k++)
				{	
					m=a[j];	
					if(a[k]==m)
					{a[k]='0';
					a[j]='0';}
				}
				for(j=0;j<len;j++)
					if(a[j]!='0')
					{cout << a[j] << endl;
					t=1;
					break;}
					if(t==0)
						cout << "no" << endl;
	}
	return 0;
}





