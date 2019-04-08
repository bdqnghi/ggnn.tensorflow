int cmp(const void*e1,const void *e2)
{
	return *((int*)e2)-*((int*)e1);
}
int main()
{
	int n,a[1000],b[1000],i,j,k,s,t,result;
	while(scanf("%d",&n) && n )
	{
		for(i=0;i<n;++i)
			scanf("%d",&b[i]);
		qsort(b,n,sizeof(int),cmp);
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		qsort(a,n,sizeof(int),cmp);
		i=k=0;
		j=s=n-1;
		result=0;
		for(t=0;t<n;++t)
		{
			if(b[i]>a[k]) 
			{
				result+=200;
				++i;
				++k;
			}
			else if(b[j]>a[s])
			{
				result+=200;
				--j;
				--s;
			}
			else 
			{
				if(b[j]>a[k])
					result+=200;
				else if(b[j]<a[k])
					result-=200;
				--j;
				++k;
			}
		}
		printf("%d\n",result);
	}
	return 0;
}