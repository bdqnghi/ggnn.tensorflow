void main()
{
	int n,i,j,len1,len2;
	char a[1000],b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",a,b);
		len1=strlen(a);
		len2=strlen(b);

		for(j=0;j<len2;j++)
		{
			if(a[len1-1-j]-b[len2-1-j]>=0)
				a[len1-1-j]=a[len1-1-j]-b[len2-1-j]+'0';

			else if(a[len1-1-j]-b[len2-1-j]<0)
			{
				a[len1-1-j]=a[len1-1-j]+10-b[len2-1-j]+'0';
				a[len1-2-j]=a[len1-2-j]-1;
			}
		}
		printf("%s\n",a);
	}
}
