long int n;
struct stu
{
	long int num,chi,mat,tot;
};
int comp(const void *a , const void *b)
{
	return ((struct stu*)b)->tot-((struct stu*)a)->tot; 
} 
struct stu a[100000],b;
int main()
{
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i].num,&a[i].chi,&a[i].mat);
		a[i].tot=a[i].chi+a[i].mat;
	}
	qsort(a,n,sizeof(struct stu),comp);
	for(i=0;i<3;i++)
	printf("%d %d\n",a[i].num,a[i].tot);
	return 0;
}