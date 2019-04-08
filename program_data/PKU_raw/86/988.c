int main()
{
	int n,m[100],sz[100][60],i,j;
	int time,num,z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		num=0;
		z=0;
		scanf("%d",&m[i]);
		for(j=0;j<m[i];j++)
		{
			scanf("%d",&sz[i][j]);
		}
		for(time=1;time<=60;time++)
		{
			num++;
			if(num==sz[i][z])
			{
				z++;
				if(time<57)
				{
					num=num-3;
				}
				else
				{
					break;
				}
			}
		}
		printf("%d\n",num);
	}
	return 0;
}