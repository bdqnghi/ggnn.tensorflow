int a[1010],b[1010];//a tian b wang
int judge(const void *a ,const void *b)
{
	return *(int *)a -*(int *)b;
}
int main()
{
	int n;
	while (cin >> n)
	{
		int c[1010]={0},d[1010]={0};
		if (n == 0)
			break;
		int i,j;
		for (i = 0 ; i < n ; i ++)
		{
			cin >> a[i];
		}
		for (i = 0 ; i < n ; i ++)
		{
			cin >> b[i];
		}
		qsort(a,n,sizeof(a[0]),judge);
		qsort(b,n,sizeof(a[0]),judge);
		j = 0;
		int res=0,mark = 0,los=0,equ= 0,l1 = 0 ,r1 = n-1,l2 = 0 ,r2 = n-1;
		while ( l1 <= r1 && l2 <= r2 )
		{
			//cout <<l1<<r1<<l2<<r2<<' '<<res <<los <<equ;
			if (a[l1]>b[l2])
			{
				res++;
				l1++;
				l2++;
				continue;
			}
			if (a[r1] > b[r2])
			{
				res++;
				r1--;
				r2--;
				continue;
			}
			if (a[l1] == b[r2])
			{
				equ ++;
				l1++;
				r2--;
				continue;
			}
			l1++;
			r2--;
			los++;
		}
//		cout <<equ <<endl;
		cout << res*200 - los *200<<endl;
	}
}