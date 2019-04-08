
int main()
{
	int n;
	struct dian
	{
		float a;
		int x;
		int y;
	}a[45];
	struct dian t;
	int d[10][3];
	int i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&d[i][0],&d[i][1],&d[i][2]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			a[k].a=sqrt((d[i][0]-d[j][0])*(d[i][0]-d[j][0])+(d[i][1]-d[j][1])*(d[i][1]-d[j][1])+(d[i][2]-d[j][2])*(d[i][2]-d[j][2]));
			a[k].x=j;
			a[k].y=i;
			k++;
		}
	}
	for(i=0;i<k-1;i++)
	{
		for(j=0;j<k-1-i;j++)
		{
			if(a[j].a<a[j+1].a)
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",d[a[i].x][0],d[a[i].x][1],d[a[i].x][2],d[a[i].y][0],d[a[i].y][1],d[a[i].y][2],a[i].a);
	}
	
	return 0;
} 
