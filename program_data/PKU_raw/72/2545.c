int main(int argc, char* argv[])
{
	int m,n,i,j,x[20][20],h[400],z[400],t=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)for(j=0;j<n;j++)scanf("%d",&x[i][j]);
	for(i=0;i<m;i++)
	{
		if(i==0)for(j=0;j<n;j++)
		{
			if(j==0)       {if(x[i][j]>=x[i+1][j]&&x[i][j]>=x[i][j+1]){h[t]=i;z[t]=j;t++;}}
			else if(j<n-1) {if(x[i][j]>=x[i][j-1]&&x[i][j]>=x[i][j+1]&&x[i][j]>=x[i+1][j]){h[t]=i;z[t]=j;t++;}}
			else           {if(x[i][j]>=x[i+1][j]&&x[i][j]>=x[i][j-1]){h[t]=i;z[t]=j;t++;}}
		}
		else if(i<m-1)for(j=0;j<n;j++)
		{
			if(j==0)        {if(x[i][j]>=x[i-1][j]&&x[i][j]>=x[i+1][j]&&x[i][j]>=x[i][j+1]){h[t]=i;z[t]=j;t++;}}
			else if(j<n-1)  {if(x[i][j]>=x[i][j-1]&&x[i][j]>=x[i][j+1]&&x[i][j]>=x[i-1][j]&&x[i][j]>=x[i+1][j]){h[t]=i;z[t]=j;t++;}}
			else            {if(x[i][j]>=x[i-1][j]&&x[i][j]>=x[i+1][j]&&x[i][j]>=x[i][j-1]){h[t]=i;z[t]=j;t++;}}
		}
		else  for(j=0;j<n;j++)
		{
			if(j==0)        {if(x[i][j]>=x[i-1][j]&&x[i][j]>=x[i][j+1]){h[t]=i;z[t]=j;t++;}}
			else if(j<n-1)  {if(x[i][j]>=x[i-1][j]&&x[i][j]>=x[i][j-1]&&x[i][j]>=x[i][j+1]){h[t]=i;z[t]=j;t++;}}
			else            {if(x[i][j]>=x[i-1][j]&&x[i][j]>=x[i][j-1]){h[t]=i;z[t]=j;t++;}}
		}
	}
	for(i=0;i<t;i++)
		printf("%d %d\n",h[i],z[i]);
	return 0;
}
		  
