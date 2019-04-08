int n,array[101][101],sum[101]={0},k;
void cut(int m)
{
	int p,q,min;
	for(p=0;p<n-m;p++)
	{
		min=array[p][0];
		for(q=1;q<n-m;q++)
			if(array[p][q]<min)
				min=array[p][q];
		for(q=0;q<n-m;q++)
			array[p][q]=array[p][q]-min;
	}
    for(p=0;p<n-m;p++)
	{
		min=array[0][p];
		for(q=1;q<n-m;q++)
			if(array[q][p]<min)
				min=array[q][p];
		for(q=0;q<n-m;q++)
			array[q][p]=array[q][p]-min;
	}
	sum[k]=sum[k]+array[1][1];
	for(p=1;p<n-m-1;p++)
	{
		array[0][p]=array[0][p+1];
		array[p][0]=array[p+1][0];
	}
	for(p=1;p<n-m-1;p++)
		for(q=1;q<n-m-1;q++)
			array[p][q]=array[p+1][q+1];
}
int main()
{
	int i,j;
		scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&array[i][j]);
		for(i=0;i<n-1;i++)
			cut(i);
	}
	for(k=0;k<n;k++)
		printf("%d\n",sum[k]);

	return 0;
}