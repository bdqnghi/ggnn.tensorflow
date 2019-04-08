
int main()
{
    int *dt;
	int n,m;
	int j,i;
	scanf("%d%d",&n,&m);
	dt=(int *)malloc(sizeof(int)*n);
	for(i=0;i<(n-m);i++)
	{*(dt+i+m)=0;
		scanf("%d",&j);
	*(dt+i+m)=j;}
	for(i=(n-m);i<n;i++)
	{*(dt+i-n+m)=0;
		scanf("%d",&j);
	*(dt+i-n+m)=j;}
	printf("%d",dt[0]);
	for(i=1;i<n;i++)
	{printf(" %d",dt[i]);}
    free(dt);

	return 0;
}
