int main(int argc, char* argv[])
{
    int n,k,i,j,shu[1000],y[1000][1000],count=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&shu[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		y[i][j]=shu[i]+shu[j];
                 if(y[i][j]==k)
	        count ++;}
	}
	if(count==0)
	printf("no");
	else
	printf("yes");
	return 0;
}
