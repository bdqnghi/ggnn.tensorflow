void main()
{
	int n,k=1,i,j;
	scanf("%d",&n);
	int a[300],b[300]={-1};
	for(i=0;i<n;i++)
		scanf("%d ",&a[i]);
	b[0]=a[0];
	for(i=1;i<n;i++)
	{
		for(j=0;j<k;j++)
		{	if(a[i]==b[j])
		break;}
		if(j>=k)
			b[k]=a[i];
		k++;
	}
	if(k==2)
		printf("%d\n",b[0]);
	else {
		printf("%d",b[0]);
	for(i=1;i<k;i++)
		if(b[i]>0)
			printf(",%d",b[i]);}
}
