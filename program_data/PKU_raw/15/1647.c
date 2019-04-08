int main()
{
	int n;
	scanf("%d",&n);
	int a[100][100];
	int i,j;
	int chang1[100];
	int kuan,chang=0;
	for(i=0;i<n;i++)
	{
		for(j=0,chang1[i]=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			{
				chang1[i]=chang1[i]+1;
			}
		}
	}
	int yo;
	for(yo=0;yo<n;yo++)
	{
		if(chang1[yo]!=0)
		{
			chang=chang1[yo];
		break;
		}
	}
	int t;
	for(t=0,kuan=0;t<n;t++)
	{
		if(chang1[t]==2)
			kuan=kuan+1;
	}
	int jieguo;
	jieguo=kuan*(chang-2);
	printf("%d",jieguo);
	return 0;
}


