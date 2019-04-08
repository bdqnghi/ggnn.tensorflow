
int main()
{
	int x[100],y[100],i,j,k;
	scanf("%d %d",&x[0],&y[0]);
	for(i=1;;i++)
	{
		x[i]=x[i-1]/2;
		if(x[i]==1)
			break;
	}
	for(j=1;;j++)
	{
		y[j]=y[j-1]/2;
		for(k=0;k<=i;k++)
		{
			if(y[0]==x[k]||y[j]==x[k])
				goto out;
		}
	}
out:printf("%d",x[k]);
	return 0;
}

