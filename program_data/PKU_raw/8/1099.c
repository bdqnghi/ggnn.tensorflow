int comp(const void *a,const void *b);
int main()
{
	int n,m,i,j,k;
	scanf("%d %d",&n,&m);
	int a[n],b[m];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	 scanf("%d",&b[i]);	
    qsort(a,n,sizeof(int),comp);
    qsort(b,m,sizeof(int),comp);
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
    for(i=0;i<m;i++)
     {printf("%d",b[i]);
      if(i<m-1)
       printf(" ");
     }
    return 0; 
}
int comp(const void*a,const void*b)
{
    return*(int*)a-*(int*)b;
}