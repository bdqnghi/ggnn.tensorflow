int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[9][9]={0},b[9][9]={0};
	a[4][4]=m;
	int i,j,k,fx,fy;
	for(i=0;i<n;i++)
	{
		memset(b,0,sizeof(b));
		for(j=1;j<8;j++)
		{
			for(k=1;k<8;k++)
			{
				b[j][k]+=a[j][k];
			
				for(fx=-1;fx<=1;fx++)
					for(fy=-1;fy<=1;fy++)
						b[j+fx][k+fy]+=a[j][k];
			}
		}
		memcpy(a,b,sizeof(a));
	}
	for(j=0;j<9;j++)
	{
		for(k=0;k<8;k++)
			{
				printf("%d ",a[j][k]);
			}
		printf("%d\n",a[j][8]);
	}
	return 0;
}
