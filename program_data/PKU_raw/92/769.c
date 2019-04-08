
int compare(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

int main()
{
	int i, n, a[1000], b[1000];

	while(scanf("%d", &n) && n!=0)
	{
		int res=0, a1=0, a2=n-1, b1=0, b2=n-1;
		
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);
		for(i=0; i<n; i++)
			scanf("%d", &b[i]);

		qsort(a, n, sizeof(int), compare);
		qsort(b, n, sizeof(int), compare);
		
		for(i=0; i<n; i++)
		{
			if(a[a1] > b[b1])
			{
				res++;
				a1++;
				b1++;
			}
			else if(a[a2] > b[b2])
			{
				res++;
				a2--;
				b2--;
			}
			else
			{
				if(a[a1] > b[b2])
					res++;
				else if(a[a1] < b[b2])
					res--;
				else
					;
				a1++;
				b2--;
					
			}
		}

		printf("%d\n", res*200);
	}
}