int m[1000][1000];
int main()
{
	int a,b,c,d,f,i,j,e=0,n;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
    for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
		{
			if(m[i][j]==0)
			{
				a=i;
				b=j;
				e=1;
				break;
			}
		  
		}
		if(e==1)
		{
			break;
		}
	}
	for(j=b;j<n;j++)
	{
		if(m[a][j]!=0)
		{
			c=j-1;
			break;
		}
	}
	for(i=a;i<n;i++)
	{
		if(m[i][b]!=0)
		{
			d=i-1;
			break;
		}
	}
    f=(c-b-1)*(d-a-1);
    printf("%d",f);
	return 0;
}