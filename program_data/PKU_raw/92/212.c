int mycompare(const void*e1,const void*e2)
{
	if(*(int*)e1<*(int*)e2)
		return 1;
	else
		return -1;
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		int a[1000];
		int b[1000];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];

		qsort(a,n,sizeof(a[0]),mycompare);
		qsort(b,n,sizeof(b[0]),mycompare);

		int begin_a=0;
		int begin_b=0;
		int end_a=n-1;
		int end_b=n-1;
		int win=0;

		while(begin_a<=end_a)
		{
			if(a[end_a]>b[end_b])
			{
				win++;
				end_a--;
				end_b--;
			}
			else if(a[end_a]<b[end_b])
			{
				win--;
				end_a--;
				begin_b++;
			}
			else
			{
				if(a[begin_a]>b[begin_b])
				{
					win++;
					begin_a++;
					begin_b++;
				}
				else
				{
					if(a[end_a]<b[begin_b])
						win--;
					end_a--;
					begin_b++;
				}

			}
		}
		cout<<win*200<<endl;
	}
}