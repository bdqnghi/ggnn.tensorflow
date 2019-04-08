
void main()
{
	int a[MAX][16],b[MAX]={0,0};
	int i,j,k,h,m;
	int count1,count2;
	count2=-1;
	for(i=0;i<MAX;i++)
	{
		count1=-1;
		for(j=0;j<16;j++)
		{
			scanf("%d",&a[i][j]);
			if((a[i][j]==0)||(a[i][j]==-1))
				break;
			count1++;
		}
		if(a[i][j]==-1)
			break;
		for(k=0;k<=count1;k++)
		{
			for(h=0;h<=count1;h++)
			{
				if(a[i][k]==2*a[i][h])
					b[i]++;
				else
					continue;
			}
		}
		count2++;
	}
	for(m=0;m<=count2;m++)
		printf("%d\n",b[m]);
}