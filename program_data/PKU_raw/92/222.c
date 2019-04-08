int main()
{
	int i,j,k,tl,ql,m,n,ans;
	int tian[1100],qi[1100];

	while (scanf("%d",&n) && n!=0)
	{
		ans=0;
		for (i=0;i<n;i++)	scanf("%d",&tian[i]);
		for (i=0;i<n;i++)	scanf("%d",&qi[i]);

		sort(tian,tian+n);
		sort(qi,qi+n);
		i=n-1; j=n-1;
		tl=0; ql=0;
		while (i>=tl && j>=ql)
		{

			if (tian[i]>qi[j])
			{
				ans++;
				i--; 
				j--;
			}
			else if (tian[i]<qi[j])
			{
				ans--;
				tl++;
				j--;
			}
			else 
			{
				if(tian[tl]<=qi[ql])
				{
					if (tian[tl]<qi[j]) ans--;
					tl++;
					j--;
				}
				else
				{
					while (tian[tl]>qi[ql] && tl<=i && ql<=j)
					{
						tl++;
						ql++;
						ans++;
					}
					if (tl>i || ql >j) break;
				}
			}
		}
		printf("%d\n",ans*200);
	}
}