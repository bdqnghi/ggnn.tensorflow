
int fxiao(int N1[],int n)
{
	int i,xiao;
	xiao=N1[0];
	for(i=0;i<n;i++)
		if(N1[i]<xiao)xiao=N1[i];
	return xiao; 
}
int fda(int N2[],int n)
{
	int i,da;
	da=N2[0];
	for(i=0;i<n;i++)
		if(N2[i]>da) da=N2[i];
	return da; 
}

void main()
{
	int N1[1002],N2[1002];
	char b[1002];
	int i,j,num;
	for(i=0;;i++)
	{	scanf("%d%c",&N1[i],&b[i]);
	    if(b[i]!=',') {num=i+1;break;}
	}
	for(i=0;i<num;i++)
		scanf("%d%c",&N2[i],&b[i]);
    printf("%d ",num);
	int min=fxiao(N1,num),max=fda(N2,num);
	int N[1001]={0},k;
	for(i=min;i<=max;i++)
		for(j=0;j<num;j++)
		{if(i>=N1[j]&&i<N2[j])N[i]++;}
	int p=fda(N,max-min+1);
	printf("%d\n",p);
}