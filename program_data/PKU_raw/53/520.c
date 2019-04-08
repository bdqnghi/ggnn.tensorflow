void main()
{
	int a[300],b[300]={0},i,n,j,k=0;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	b[0]=a[0];k++;
	for(i=1;i<n;i++)
	{	scanf("%d",&a[i]);
		for(j=0;j<k;j++)
		{if(a[i]==b[j])
		break;}
		
		if(j==k) b[k++]=a[i];
		
	}
	k--;
	for(i=0;i<k;i++)
	printf("%d,",b[i]);
	printf("%d",b[k]);
}