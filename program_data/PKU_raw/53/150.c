
void main()
{
	int i,j,k=1,n,a[100],b[100],*p1,*p2;
	p1=a;p2=b;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	*p2=*p1;
	for (i=1,p1=p1+1;i<n;i++,p1++)
	{
        p2=b;
		for (j=0;j<k;j++)
		{
			if (*p2==*p1) break;
			p2++;
			if (j==k-1) 
			{
				*p2=*p1;
				k++;
			}
		}
	}
	p2=b;
	for (i=0;i<k-1;i++) printf("%d,",*(p2+i));
	printf("%d",*(p2+k-1));

}