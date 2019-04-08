int main()
{
	int num[1000]={0};   //?????????
	int inout[1000][2];   //???????
	int max;
	int n=0;
	int i,j;
	int d;
	char c=',';
	while(c==',')      //??????
	{
	    scanf("%d%c",&d,&c);
	    inout[n][0]=d;
	    n++;
	}
	scanf("%d",&inout[0][1]);
	for(i=1;i<n;i++)             //??????
	{
		scanf(",%d",&inout[i][1]);
	}
	for(i=0;i<n;i++)
	{
		//printf("%d %d\n",inout[i][0],inout[i][1]);//debug
		for(j=inout[i][0];j<inout[i][1];j++)
		{
			num[j]++;
		}
	}
	max=0;
	for(i=0;i<1000;i++)
	{
		if(max<num[i])
			max=num[i];
	}
	printf("%d %d",n,max);
	return 0;
}
