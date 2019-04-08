
int cmp(const void *a,const void *b)
{
	return *(int*)b - *(int*)a; 
}

int main()
{
	int i;
	int n;
	int t[1005];
	int w[1005];
	while(1)
	{
		cin>>n;
		if(n==0)
			break;
		for(i = 0 ; i < n; i++)
			cin>>t[i];
		for(i=0 ; i<n; i++)
			cin>>w[i];
		qsort(t,n,sizeof(t[0]),cmp);
		qsort(w,n,sizeof(w[0]),cmp);
		int count=0;
		int thead=0;
		int khead=0;
		int ttail=n-1;
		int ktail=n-1;
		while(thead<=ttail)
		{
			if(t[thead]>w[khead])//????>????????
			{ 
				count++;
				thead++;
				khead++;
			}
			else if(t[thead]<w[khead])//????<??????????????
			{
				ttail--;		
				count--; 
				khead++;
			}
			else//??
			{
				while(ttail>=thead)
				{
					if(t[ttail]>w[ktail])//???????????
					{
						count++;
						ttail--;
						ktail--; 
					}
					else
					{
						if(t[ttail]<w[khead])
							count--;
						ttail--;
						khead++;
						break; 
					} 
				}
			}
		}
		cout<<count*200<<endl; 
	}
	return 0; 
}
