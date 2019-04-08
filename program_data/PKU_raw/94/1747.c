int compare(const void * elem1, const void * elem2)
{
	int *a=NULL,*b=NULL;
	a=(int *)elem1;
	b=(int *)elem2;
	return(*a-*b);
}
main()
{
    int n,i,j=0,x=0,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    int b[n];
    for(i=0;i<n;i++)
    b[i]=0;
    
    for(i=0;i<n;i++)
    if(a[i]%2==1)
    {
        b[j]=a[i];
        j++;
    }
    qsort(b,n,sizeof(int),compare);
    for(i=0;i<n;i++) 
    {
    if(b[i]>0&&flag==0)
       {
           printf("%d",b[i]);
           flag=1;
       }
    else if(b[i]!=0)
    printf(",%d",b[i]);
    }

    
} 