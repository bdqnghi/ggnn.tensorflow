int main()
{
	int a[100][16]={0};
	int i=0,j=0,p=0,k=0,num=0;
	do
	{
		for(j=0;j<16;j++)
		{
			scanf("%d",&a[p][j]);
			if(a[p][j]==0||a[p][j]==-1)
				break;
		}
		p++;
	}
		while(a[p-1][0]!=-1);
p--;
		for(i=0;i<p;i++)
		{
			for(j=0;a[i][j]!=0;j++)
			{
				for(k=0;a[i][k]!=0;k++)
				{
					if(2*a[i][k]==a[i][j])
						num++;
				}
			}
			printf("%d\n",num);
			num=0;
		}
			return 0;
}
