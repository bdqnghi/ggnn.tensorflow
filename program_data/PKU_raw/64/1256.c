int main()
{
	struct point
	{
		int x;
		int y;
		int z;
	}Point[10];
	int n,i,j,k=0,f[45],b[45],temp;
	double d[45],num;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&Point[i].x,&Point[i].y,&Point[i].z);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			d[k]=sqrt((Point[i].x-Point[j].x)*(Point[i].x-Point[j].x)+(Point[i].y-Point[j].y)*(Point[i].y-Point[j].y)+(Point[i].z-Point[j].z)*(Point[i].z-Point[j].z));
			f[k]=i;
			b[k]=j;
			k=k+1;
		}

	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i;j++)
		{
			if(d[j]<d[j+1])
			{
				temp=f[j];
				f[j]=f[j+1];
				f[j+1]=temp;
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
				num=d[j];
				d[j]=d[j+1];
				d[j+1]=num;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",Point[f[i]].x,Point[f[i]].y,Point[f[i]].z,Point[b[i]].x,Point[b[i]].y,Point[b[i]].z,d[i]);
	}
	return 0;
}