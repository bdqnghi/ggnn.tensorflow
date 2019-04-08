int num[9][9],im[9][9];
main()
{
	int i,j,k,m,n;
	scanf("%d%d",&m,&n);
	num[4][4]=m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<9;j++)
			for(k=0;k<9;k++)
				im[j][k]=0;
		for(j=1;j<8;j++)
		{
			for(k=1;k<8;k++)
			{
				im[j-1][k]+=num[j][k];
				im[j][k]+=2*num[j][k];
				im[j][k-1]+=num[j][k];
				im[j+1][k]+=num[j][k];
				im[j][k+1]+=num[j][k];
				im[j-1][k-1]+=num[j][k];
				im[j-1][k+1]+=num[j][k];
				im[j+1][k-1]+=num[j][k];
				im[j+1][k+1]+=num[j][k];
			}
		}
		for(j=0;j<9;j++)
			for(k=0;k<9;k++)
				num[j][k]=im[j][k];
	}
	for(j=0;j<9;j++)
	{
		for(k=0;k<9;k++)
		{
			printf("%d%c",num[j][k],k==8?'\n':' ');
		}
	}
}

