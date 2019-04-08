int pre(int num)
{
	if(num==1)
		return 0;
	else
	{
		if(num%2)
			return (num-1)/2;
		else
			return num/2;
	}
}

void main()
{
	int n,m,x[100]={0},y[100]={0},i,j,k,d;
	scanf("%d%d",&n,&m);
	x[0]=n;
	y[0]=m;
	for(i=1;;i++)
	{
		x[i]=pre(x[i-1]);
		if(x[i]==0)
			break;
	}
	for(j=1;;j++)
	{
		y[j]=pre(y[j-1]);
		if(y[j]==0)
			break;
	}
	for(k=0;k<i;k++)
		for(d=0;d<j;d++)
			if(x[k]==y[d])
			{
				printf("%d",x[k]);
				goto L;
			}

L:
	printf("\n");
}


	
