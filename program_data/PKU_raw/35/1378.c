int main ()
{
	int m,n,i,j,k,a[8][8],b[8],c[8],flag=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}

    }
	for(i=0;i<m;i++)
	{
		b[i]=0;
		for(j=0;j<n-1;j++)
		{
			if(a[i][b[i]]<a[i][j+1])
            {
				b[i]=j+1;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		c[j]=0;
		for(i=0;i<m-1;i++)
		{
			if(a[c[j]][j]>a[i+1][j])
            {
				c[j]=i+1;
			}
		}
	}
	for(k=0;k<m;k++)
	{
		if(c[b[k]]==k)
		{printf("%d+%d",k,b[k]);
		flag=1;}
	}
	if(flag==0)
    printf("No");
	return 0;
}

