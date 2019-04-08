int main()
{
    int sz[100][100];
    int a,b,i,j,u,x,k,l;
	int e=0,f=0;
	char c='+',d;
    scanf("%d,%d",&a,&b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		x=sz[i][0];
		k=0;l=0;
		for(j=0;j<b;j++)
		{
		    if(sz[i][j]>x)
			{
			    x=sz[i][j];
			    l=i;
				k=j;
			}
		}
	    for(u=0;u<a;u++)
		{
		    if(sz[u][k]<x)
			{
			    e++;	
			}
		}
		if(e==0)
		{
			printf("%d%c%d\n",l,c,k);
			f=f+1;
			break;
		}
	}
	if(f==0)
	{
		printf("No\n");
	}
	return 0;
}
	

                   
				
			
