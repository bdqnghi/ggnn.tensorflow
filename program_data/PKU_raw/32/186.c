int main()
{
	int n,i,j,m,l,d;
	char a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		scanf("%s",b);
		m=strlen(a);
		l=strlen(b);
		d=l;
		for(j=m-1;j>m-d-1;j--)
		{
			if(a[j]>=b[l-1])
			{
				a[j]=a[j]-b[l-1]+48;
				l--;
			}
			else
			{
				a[j]=a[j]+10-b[l-1]+48;
				a[j-1]=a[j-1]-1;
				l--;
			}
		}
		j=0;
		while(a[j]==0)
			j++;
		for(;j<m;j++)
			printf("%c",a[j]);
	 	printf("\n"); 
	}
	return 0;
}