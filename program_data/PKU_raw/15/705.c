int main()
{
	int n[1000][1000],num,i,j,p[200],k=0;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++) scanf("%d",&n[i][j]);
	}
	int w=0;
	for(i=0;i<(num-1);i++)
	{
		for(j=0;j<(num-1);j++)
		{
			if(n[i][j]==0&&n[i][j+1]==0) break;
			else if(n[i][j]==0&&n[i][j+1]!=0)
			{
				p[w]=j;
				w++;
			}
		}
	}
	for(i=0;i<w-1;i=i+2)
	{
		k=k+(p[i+1]-p[i]-1);
	}
	printf("%d",k);
}



