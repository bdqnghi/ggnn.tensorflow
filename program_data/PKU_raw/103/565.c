char a[1000];
main()
{
	int i,j,n=1;
	cin>>a;
	j=strlen(a);
	for(i=0;i<j;i++) if(a[i]>96) a[i]-=32;
	for(i=1;i<=j;i++)
	{
		if(a[i]==a[i-1]) n++;
		else
		{
			cout<<'('<<a[i-1]<<','<<n<<')';
			n=1;
			}
		}
	}
