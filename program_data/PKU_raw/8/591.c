void main()
{
	void abc(int c[],int p);
	int m,n,i,j;
	int a[100],b[100];
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	scanf("%d",&b[j]);
	abc(a,m);
	printf(" ");
	
	abc(b,n);
    
}
void abc(int c[],int p)
{
	int i,j,temp;
	for(i=0;i<p-1;i++)
	{
	for(j=0;j<p-1-i;j++)
	{
		if(c[j]>c[j+1])
		{
			temp=c[j];
		    c[j]=c[j+1];
		    c[j+1]=temp;
		}
	}
	}
	for(i=0;i<p-1;i++)
	printf("%d ",c[i]);
	printf("%d",c[i]);
	
}
