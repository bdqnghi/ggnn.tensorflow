struct HaHa
{
	int x,y,z[2][1000],g[2000];
};
struct HaHa scan()
{
	struct HaHa hehe;
	int i,j;
	scanf("%d%d",&hehe.x,&hehe.y);
	for(i=0;i<hehe.x;i++)
		scanf("%d",&hehe.z[0][i]);
	for(j=0;j<hehe.y;j++)
		scanf("%d",&hehe.z[1][j]);
	return(hehe);
}
struct HaHa line(struct HaHa yahoo)
{
	int i,temp,j;
	struct HaHa yahoo1;
	for(i=0;i<yahoo.x;i++)
	{
		for(j=i;j<yahoo.x;j++)
		{
			if(yahoo.z[0][i]>yahoo.z[0][j])
			{
				temp=yahoo.z[0][i];
				yahoo.z[0][i]=yahoo.z[0][j];
				yahoo.z[0][j]=temp;
			}
		}
	}
	for(i=0;i<yahoo.y;i++)
	{
		for(j=i;j<yahoo.y;j++)
		{
			if(yahoo.z[1][i]>yahoo.z[1][j])
			{
				temp=yahoo.z[1][i];
				yahoo.z[1][i]=yahoo.z[1][j];
				yahoo.z[1][j]=temp;
			}
		}
	}
	yahoo1=yahoo;
	return(yahoo1);
}
struct HaHa combine(struct HaHa xx)
{
	int i;
	struct HaHa xx1;
	for(i=0;i<xx.x;i++)
	{
		xx.g[i]=xx.z[0][i];
	}
	for(i=0;i<xx.y;i++)
	{
		xx.g[i+xx.x]=xx.z[1][i];
	}
	xx1=xx;
	return(xx1);
}
void print(struct HaHa xxx)
{
	int i;
	for(i=0;i<xxx.x+xxx.y-1;i++)
	{
		printf("%d ",xxx.g[i]);
	}
	printf("%d",xxx.g[xxx.x+xxx.y-1]);
}
void main()
{
	print(combine(line(scan())));
}
