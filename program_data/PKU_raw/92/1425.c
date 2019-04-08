
int n,k;
int q[1000];
int t[1000];
int res;
int sum = 1;

int mycmp(const void *a,const void * b)
{
	return *((int *)b) - *((int *)a);
}
int main()
{
	while(cin >> n)
	{
		if(n == 0)
			break;
		for(int i = 0;i < n;i++)
			cin >> t[i];
		for(int i = 0;i < n;i++)
			cin >> q[i];
		qsort(t,n,sizeof(int),mycmp);
		qsort(q,n,sizeof(int),mycmp);
		int x = 0;
		int xx = n -1;
		int yy = n - 1;
		int y = 0;
		int p = 0;
		int sum = 0;
		while(p < n)
		{
			if(t[x] <q[y])
			{
				sum -=200;
				y++;
				xx--;
			}
			else if(t[x]==q[y])
			{
				if(t[xx] > q[yy])
				{
					xx--;
					yy--;
					sum += 200;
				}
				else if(t[xx] < q[yy])
				{
					xx--;
					y++;
					sum-=200;
				}
				else if(t[xx] == q[yy])
				{
					if(t[xx] == q[y])
					{
						xx--;
						y++;
					}
					else
					{
						sum-=200;
						xx--;
						y++;
					}
				}
			}
			else if(t[x] > q[y])
			{
				x++;
				y++;
				sum += 200;
			}
			p++;
		}
		cout << sum << endl;
	}
}
