int main()
{
	int an[100];
	int n,m,i,x,y,k;
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++) scanf("%d",&an[i]);
	x=an[n-1];
	k=0;
	for (i=0;;i++)
	{
		if (i>n-1) {i=0;x=an[n-1];}
		else i=i;
		y=an[i];
		an[i]=x;
		x=y;
		k=k+1;
		if (k==m*n) break;
	}
	for (i=0;i<n-1;i++) printf("%d ",an[i]);
	printf("%d",an[i]);
	return 0;
}
