int main()
{
	int n,i,j,x=0,y=0,z=0;
	int a[201],b[201];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(j=0;j<n;j++)
    {
		if(a[j]!=b[j])
		{
			if((a[j]==0&&b[j]==1)||(a[j]==1&&b[j]==2)||(a[j]==2&&b[j]==0))
		{
			x++;
		}else
		{
			y++;
		}
		}else
		{
			continue;
		}
    }
	if(x>y)
	{
		printf("A");
	}else if(x<y)
	{
		printf("B");
	}else if(x==y)
	{
		printf("Tie");
	}
return 0;
}