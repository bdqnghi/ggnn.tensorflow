int main ()
{
	int n,i,c[100][100],j,l1,l2,k;
	char l;
	scanf("%d",&n);
	char a[100][100],b[100][100];
	for(i=0;i<n;i++)
	{
		scanf("%s%s",&a[i],&b[i]);
		l1=strlen(a[i]);
		l2=strlen(b[i]);		
		for(j=l1-1;j>=l1-l2;j--)
		{
            if(a[i][j]>=b[i][j-l1+l2])
			{
				c[i][j]=a[i][j]-b[i][j-l1+l2];
			}
			else
			{
				c[i][j]=a[i][j]+10-b[i][j-l1+l2];
				a[i][j-1]=a[i][j-1]-1;
            }
		}
	    for(j=l1-l2-1;j>=0;j--)
		{
			if(a[i][j]==47)
			{
				a[i][j]=a[i][j]+10;
				a[i][j-1]=a[i][j-1]-1;
			}
		}
		for(j=0;j<l1-l2;j++)
		{
			
			printf("%d",a[i][j]-48);
		}
        for(j=l1-l2;j<l1-1;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("%d\n",c[i][l1-1]);
	}
	return 0;
}