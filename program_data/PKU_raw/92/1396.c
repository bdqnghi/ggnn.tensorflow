static int cmp(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}
int main()
{
	int n=1;

	while(n!=0)
	{
		int *a,*b,t,s,j,p,c,tk,tm,qk,qm;
		int *p3,*p4;
		scanf("%d",&n);
		if (n==0) break;
		a=(int *)malloc((n)*sizeof(int));
		b=(int *)malloc((n)*sizeof(int));
		p3=(int *)malloc((n)*sizeof(int));
		p4=(int *)malloc((n)*sizeof(int));
		t=0;
		p=0;
		j=0;
		s=0;
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<n;i++) scanf("%d",&b[i]);
		qsort(a,n,sizeof(int),cmp);
		qsort(b,n,sizeof(int),cmp);
		tk=0;
		tm=n-1;
		qk=0;
		qm=n-1;
		for (;tk<=tm;)
		{
			if (a[tm]>b[qm])
			{
				t++;
				tm--;
				qm--;
			}
			else if(a[tm]<b[qm])
			{
				s++;
				tm--;
				qk++;
			}
			else if(a[tk]>b[qk])
			{
				t++;
				tk++;
				qk++;
			}
			else if (a[tk]<b[qk])
			{
				s++;
				tm--;
				qk++;
			}
			else if(a[tm]<b[qk])
			{
				s++;
				tm--;
				qk++;
			}

			else
			{
				tm--;
				qk++;
			}
		}
		printf("%d\n",t*200-s*200);
		free(a);
		free(b); 
		free(p3); 
		free(p4); 
	}
	return 0;
}