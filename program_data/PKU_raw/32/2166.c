
void main()
{
	int a[101],b[101],c[101]={0},n,i,j,k,len1,len2;
	char sa[101],sb[101];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",sa);
		scanf("%s",sb);
		len1=strlen(sa);
		len2=strlen(sb);
		for(j=0;j<101;j++)
		{
			a[j]=0;
			b[j]=0;
		}
		for(j=len1-1,k=0;j>=0;j--,k++)
		{
			a[k]=sa[j]-'0';
		}
		for(j=len2-1,k=0;j>=0;j--,k++)
		{
			b[k]=sb[j]-'0';
		}
		for(j=0;j<=len1-1;j++)
		{
			if(a[j]>=b[j])
			{
				c[j]=a[j]-b[j];
			}
			if(a[j]<b[j])
			{
				a[j+1]-=1;
				c[j]=a[j]+10-b[j];
			}
		}
		for(j=len1-1;j>=0;j--)
		{
			printf("%d",c[j]);
		}
		printf("\n");
	}
}