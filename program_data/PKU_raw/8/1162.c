int Compare(const void *elem1, const void *elem2)
{
    if(*(int *)elem1>*(int *)elem2)return 1;
    if(*(int *)elem1==*(int *)elem2)return 0;
    if(*(int *)elem1<*(int *)elem2)return -1;
}
int * shuru(int m,int *a)
{
	a=(int *)malloc(m*sizeof(int));
	int i;
	scanf("%d",&a[0]);
	for(i=1;i<m;i++)
	{
		scanf(" %d",&a[i]);
	}
	return a;
}
int main()
{
    int suma,sumb,i;
    int *a;
    int *b;
    scanf("%d %d",&suma,&sumb);
    a=shuru(suma,a);
    b=shuru(sumb,b);
    qsort(a,suma,sizeof(int),Compare);
    qsort(b,sumb,sizeof(int),Compare);
    printf("%d",a[0]);
    for(i=1;i<suma;i++)
    {
    	printf(" %d",a[i]);
    }
    printf(" %d",b[0]);
    for(i=1;i<sumb;i++)
    {
    	printf(" %d",b[i]);
    }
    free(a);
    free(b);
}