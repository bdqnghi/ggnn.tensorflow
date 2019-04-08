int main()
{
	int n,i,k,j,cnt=0,t;
	int a[100002];
	cin >> n;//?????????
	for(i = 0; i < n; i++)
		cin >> a[i];//??????????
	cin >> k;
	i = 0;
	while(i < n)
	{
		if(a[i] == k)//????k??
		{
			cnt=cnt+1;
			if(i==n-cnt)
				break;
			else
			{
				for(j = i + 1; j < n; j++)
					a[j-1] = a[j];//?????????????
				
			}//????k?????
			
		}
		else
			i++;
		
	}

	for(t=0;t<(n-cnt-1);t++)
		cout<<a[t]<<" ";
	cout<<a[n-cnt-1];
	
	

	return 0;
}
