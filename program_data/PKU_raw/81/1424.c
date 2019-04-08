
int exchange(int k[][5],int n,int m)
{int t,i;
	if(n<5&&m<5)
	{
		for(i=0;i<5;i++)
		{
			t=k[m][i];
			k[m][i]=k[n][i];
			k[n][i]=t;
		}		
	return 1;
	}
else
	return 0;
}

int main(int argc, char* argv[])
{
int a[5][5],n,m,i,j,c;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
		scanf("%d%d",&n,&m);
	c=exchange(a,n,m);
	if(c==1)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",a[i][j]);
				printf("%d",a[i][4]);
				printf("\n");
		}
	}
	if(c==0)
			printf("error");
return 0;
}

