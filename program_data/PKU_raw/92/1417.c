
int n;
int th[1010],qh[1010];

int comp(const void *lhs,const void *rhs)
{
	return *(int*)rhs - *(int*)lhs;
}

int main()
{
	while(1)
	{
		cin>>n;
		if(n == 0)
			break;
		memset(th,0,sizeof(th));
		memset(qh,0,sizeof(qh));
		for(int i  = 0; i < n; ++ i)
			cin>>th[i];
		for(int i = 0; i < n; ++ i)
			cin>>qh[i];

		qsort(qh,n,sizeof(int),comp);
		qsort(th,n,sizeof(int),comp);

		int sum = 0;
		int max = -1000 * 200;
		for(int k = 0; k < n; ++ k)
		{
			sum = 0;
			int count = 0;
			for(int i = 0; i < n; ++ i)
			{
				if(th[(i - k + n) % n] > qh[i])
				{
					sum += 200;
					++ count;
				}
				else if(th[(i - k + n) % n] < qh[i])
					sum -= 200;
			}
			if(sum > max)
				max = sum;
			if(count == n - k)
				break;
		}
		cout<<max<<endl;
	}
}