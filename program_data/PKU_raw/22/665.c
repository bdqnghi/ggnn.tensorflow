int main()
{
	int a[301]={0},i,n=0,j,k;
	char c;
	while (1)
	{
		scanf("%d",&a[n++]);
		scanf("%c",&c);
		if (c!=',') break;
	}
	for (i=0;i<n-1;i++)
	{
		int t;
		k=i;
		for (j=i+1;j<n;j++)
			if (a[j]>a[k]) k=j;
		t=a[i];a[i]=a[k];a[k]=t;
	}
	i=0;
	while (i<n && a[i]==a[0]) i++;
	if (i==n) printf("No");
	else printf("%d",a[i]);
	return 0;
}