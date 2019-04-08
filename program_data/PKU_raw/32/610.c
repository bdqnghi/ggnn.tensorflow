void main()
{
	int n,i,j,k,m[60],l[30];
	char a[30][100];
	scanf("%d",&n);
	for(i=0;i<2*n;i++)
		scanf("%s",a[i]);
	for(i=0;i<2*n;i++)	
		m[i]=strlen(a[i]);
	for(i=0;i<n;i++)	
		l[i]=m[2*i]-m[2*i+1];

for(i=0;i<n;i++)
	{
		for(j=m[2*i+1]-1;j>=0;j--)
		{
			if(a[2*i+1][j]<=a[2*i][j+l[i]])
				a[2*i][j+l[i]]=a[2*i][j+l[i]]-a[2*i+1][j]+'0';
		else
			{
				a[2*i][j-1+l[i]]=a[2*i][j-1+l[i]]-1;
				a[2*i][j+l[i]]=a[2*i][j+l[i]]-a[2*i+1][j]+10+'0';
			}
		}
	}
for(i=0;i<n;i++)
	printf("%s\n",a[2*i]);


}