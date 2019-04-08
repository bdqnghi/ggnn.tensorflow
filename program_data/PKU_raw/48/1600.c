
int main(int argc, char* argv[])
{
	int i,j,k,l,n,m,num,day;
	int a[9][9]={0},b[9][9]={0};
	scanf("%d%d",&num,&day);
    a[4][4]=num;
	for(i=0;i<day;i++)
	{
		memset(b,0,sizeof(b));
		for(j=1;j<8;j++)
			for(k=1;k<8;k++)
			{
				b[j][k]+=a[j][k];
				for(l=-1;l<=1;l++)
					for(m=-1;m<=1;m++)
						b[j+l][k+m]+=a[j][k];
			}
		memcpy(a,b,sizeof(a));
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
			printf("%d ",a[i][j]);
		printf("%d\n",a[i][8]);
	}
	return 0;
}

