struct space
{
	float b;
	int x;
	int y;
}
juli[100],cache;
int main()
{
	int a[10][3];
	int i,j,k=0;
	int n;
	scanf("%d",&n);
	scanf("%d %d %d",&a[0][0],&a[0][1],&a[0][2]);
	for(i=1;i<n;i++)
	{
		scanf(" %d %d %d",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(i=0,j=0;;)
	{
		juli[k].x=i;juli[k].y=j;
		juli[k].b=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]));
		k++;
		if(i==n-1&&j==n-1)break;
		if(j==n-1)
		{
			i++;j=0;
		}
		else
			j++;	
	}
	for(i=0;i<n*n;i++)
	{
		for(k=0;k<n*n-i;k++)
		{
			if(juli[k].b<juli[k+1].b)
			{
				cache=juli[k+1];juli[k+1]=juli[k];juli[k]=cache;
			}
		}	
	}
	int a1,a2;
	for(i=0;i<n*n;i++)
	{
		if(juli[i].x>=juli[i].y)
			continue;
		else
		{
			a1=juli[i].x;a2=juli[i].y;
			printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[a1][0],a[a1][1],a[a1][2],a[a2][0],a[a2][1],a[a2][2],juli[i].b);
		}
	}
	return 0;
}
