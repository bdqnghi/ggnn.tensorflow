struct num
{   int n;
	float d;
};
int main()
{	int n,i,j,sum=0;
	float aver;
	struct num nob[300],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&nob[i].n);
		sum+=nob[i].n;
	}
	aver=(sum*1.0)/(n*1.0);
	for(i=0;i<n;i++)
		nob[i].d=nob[i].n>aver?(nob[i].n-aver):(aver-nob[i].n);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
			if(nob[j].d<nob[j+1].d)
			{
				temp=nob[j];
				nob[j]=nob[j+1];
				nob[j+1]=temp;
			}
	}
    
	sum=1;
	for(i=1;i<n;i++)
	{
		if(nob[0].d==nob[i].d) sum++;
		else break;
	}
	if(sum==1)printf("%d\n",nob[0].n);
	else
	{
		for(i=0;i<sum-1;i++)
			for(j=0;j<sum-1-i;j++)
			if(nob[j].n>nob[j+1].n)
			{
				temp=nob[j];
				nob[j]=nob[j+1];
				nob[j+1]=nob[j];
			}
	printf("%d",nob[0].n);
	for(i=1;i<sum;i++)
		printf(",%d",nob[i].n);
	}
	return 0;
}

