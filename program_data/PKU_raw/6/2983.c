
int main(int argc, char* argv[])
{
	int w,k;
	scanf("%d",&w);
	for(k=0;k<w;k++)
	{

	    int n,m,sz[100][100],i,j;
	    scanf("%d%d",&n,&m);
	    for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%d",&sz[i][j]);
			}
		}
		int a=0,b=0,c=0,d;
					for(j=0;j<m;j++)
			{
			    a+=sz[0][j];
			}
		
			for(j=0;j<m;j++)
			{
				b+=sz[n-1][j];
			}
		
        for(i=1;i<n-1;i++)
		{
			c+=sz[i][0]+sz[i][m-1];
		}
		d=a+b+c;
		printf("%d\n",d);
	}
	return 0;
}