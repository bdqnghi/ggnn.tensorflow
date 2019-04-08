struct loc
{
	int x;
	int y;
	int z;
};
int main()
{
	struct loc a[10];
	double len[10][10],max;
	int n,i,j,k,no1,no2;
	memset(len,0,sizeof(len));
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].z);
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
			len[i][j]=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y)+(a[i].z-a[j].z)*(a[i].z-a[j].z));
	for (k=0;k<(n-1)*n/2;k++)
	{
		max=0;
		for (i=0;i<n-1;i++)
			for (j=i+1;j<n;j++)
				if (len[i][j]>max)
				{
					max=len[i][j];
					no1=i;
					no2=j;
				}
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[no1].x,a[no1].y,a[no1].z,a[no2].x,a[no2].y,a[no2].z,len[no1][no2]);
		len[no1][no2]=0;
	}
	return 0;
}
					
