int max(int x[],int h)
{ 
	int i,da=x[0],k=0;
	for(i=1;i<h;i++)
	{
		if(x[i]>da)
		{
			da=x[i];
			k=i;
		}
	}
	return(k);
}

int min(int x[][10],int l,int d)
{
	int i,xiao=x[0][d],k=0;
	for(i=1;i<l;i++)
	{
		if(x[i][d]<xiao)
		{
			xiao=x[i][d];
			k=i;
		}
	}
	return(k);
}

void main()
{
	int i,j,k,l,row,clone,x[10][10];
	char y;
    scanf("%d",&row);
	scanf("%c",&y);
	scanf("%d",&clone);
	for(i=0;i<row;i++)
		for(j=0;j<clone;j++)
			scanf("%d",&x[i][j]);

	for(j=0;j<row;j++)
	{
		k=max(x[j],clone);
		l=min(x,row,k);
		if(l==j)
		{
			printf("%d+%d",j,k);
			break;
		}
		else if(j==row-1)
			printf("No");
	}
}