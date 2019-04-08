int compare(const void * elem1, const void * elem2)
{
	int *a=NULL,*b=NULL;
	a=(int *)elem1;
	b=(int *)elem2;
	return(*a-*b);
}
main()
{
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        if(i==j)
        continue;
        else
        {
            if(a[i]+a[j]==k)
            {
            printf("yes");
            goto end;
            }
        }            
    }
    printf("no");
    end:
    return 0;
} 