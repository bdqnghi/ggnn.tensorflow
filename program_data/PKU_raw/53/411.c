void main()
{
	int n,i,k,j,r;
	int a[300];
	int index[300]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		{
			for(k=0;k<i;k++)
			{
				if(a[i]==a[k])
					index[i]=1;
			}
		}
	}
for(r=n-1;r>=0;r--)
	{if (index[r]==0) break;}
	for(j=0;j<n;j++)
	{
		if (index[j]==1) continue;
		printf("%d",a[j]);
	if (j==r) break;
		
printf(",");
		}
		
}



