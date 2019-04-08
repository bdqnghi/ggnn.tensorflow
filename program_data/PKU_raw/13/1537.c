int main()
{
    int n,j,k,m=1,x,a[1000];
    scanf("%d",&n);
    if(n==0) return(0);
	else
	{
    scanf("%d",&x);
    printf("%d",x); 
    a[0]=x; 
	for(j=1;j<n;j++)
	{
		scanf("%d",&x);
		k=0;
		while((k<m) && (a[k]!=x))
			k++;
		if(k==m) 
		{a[m++]=x;
		printf(" %d",x);
		}
	}
	printf("\n");
	}
}