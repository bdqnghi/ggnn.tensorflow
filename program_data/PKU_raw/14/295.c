struct data
{
	int id;
	int cs;
	int ms;
	int s;
};
int cmp(const void *a,const void *b)
{
    return ((struct data*)b)->s - ((struct data*)a)->s;
}
main()
{
	struct data *a;
	int n;
	int i;
	scanf("%d",&n);
	a=(struct data *)malloc(n*sizeof(struct data));
	for (i=0;i<n;i++)
	{
		scanf("%d %d %d",&a[i].id,&a[i].cs,&a[i].ms);
		a[i].s=a[i].cs+a[i].ms;
	}
    qsort(a,n,sizeof(struct data),cmp);
	for (i=0;i<3;i++)
		printf("%d %d\n",a[i].id,a[i].s);
	free(a);
}