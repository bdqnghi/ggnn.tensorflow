int main()
{
	int a[5][5];
	int i,j,max[5][3],min[5][3],m=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max[i][0])
			{
				max[i][0]=a[i][j];
				max[i][1]=i;
				max[i][2]=j;
			}
		}
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(j==0)
			{
				min[i][0]=a[j][i];
			    min[i][1]=j;
				min[i][2]=i;
			}
			if(a[j][i]<min[i][0])
			{
				min[i][0]=a[j][i];
			    min[i][1]=j;
				min[i][2]=i;
			}
		}
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(max[i][1]==min[j][1]&&max[i][2]==min[j][2])
			{
			    m++;
				printf("%d %d %d",max[i][1]+1,max[i][2]+1,max[i][0]);
			}
		}
	if(m==0)
		printf("not found");
	return 0;
}




