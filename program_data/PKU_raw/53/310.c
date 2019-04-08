void main()
{
	int n,i,k,flag,a[300];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
	printf("%d",a[0]);
	for(i=1;i<n;i=i+1)
	{
		flag=0;
		for(k=0;k<i;k++)
			if(a[k]==a[i]) flag=1;
	if(flag==0) printf(",%d",a[i]);
	}
}
