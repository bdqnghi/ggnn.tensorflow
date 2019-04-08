int main()
{
	int p;
	int i,n,tmp,squar;
	tmp=0;
	scanf("%d",&n);
	for(i=0;i<n*n;i++)
		{
			scanf("%d",&p);
			if(p==0)
				tmp=tmp+1;
			}
	tmp=tmp/4;
	squar=(tmp-1)*(tmp-1);
	printf("%d\n",squar);
}