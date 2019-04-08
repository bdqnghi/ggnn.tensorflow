int main()
{
	int a,b,n,i,A[299],k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=0;i<n-1;i++)
	{	for(k=i+1;k<n;k++)
			if(A[i]==A[k])
			A[k]=-100;
	}
	printf("%d",A[0]);
	for(k=1;k<n;k++)
	{
	if(A[k]!=(-100))
        printf(",%d",A[k]);
       
	}
	return 0;
}