void main()
{
	int i,j,k,t,m,n,a[8][8],b,o,x,y,w;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
for(o=0;o<m;o++)
{
    for(k=0;k<n;k++)
	{
		x=0;y=0;
		for(t=0;t<n;t++)
		{
			if(a[o][k]>=a[o][t]) x=x+1;
		}
		if(x==n) 
		{
            for(b=0;b<m;b++)
			{
			    if(a[o][k]<=a[b][k]) y=y+1;	
			}

			if(y==m)
			{
				w=1;
				printf("%d+%d",o,k);
			}
		}
	}
}
if(w!=1) printf("No");

}