void paixu(char a[],int n)
{
	char m,k;
	int p,j,i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		m=a[i];
		k=i;
		for(j=i;j<n;j++)
			if(a[j]>m)
			{
				m=a[j];
				k=j;
			}
		p=a[k];
		a[k]=a[i];
		a[i]=p;
	}
}
void main()
{
	char a[100],b[100];
	scanf("%s %s",a,b);
	paixu(a,strlen(a));
	paixu(b,strlen(b));
	int n=strcmp(a,b);
	if(n==0)
		printf("YES\n");
	else
		printf("NO\n");
}
