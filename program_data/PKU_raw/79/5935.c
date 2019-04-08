/*??*/
int king;
int monkeynum(int [],int);
void main()
{
	int m[20],n[20],i,j,k,start,casenum,monkey[300];
	for(i=0;;i++)
	{
		scanf("%d %d",&n[i],&m[i]);
		if(!m[i]) break;
	}
	casenum=i;
	for(i=0;i<casenum;i++)
	{
		for(j=0;j<300;j++)
			monkey[j]=0;
		for(j=0;j<n[i];j++)
			monkey[j]=1;
		start=0;
		while(monkeynum(monkey,n[i])!=1)
		{
				/*printf("%d\n",monkeynum(monkey,n[i]));*/
			k=m[i];
			while(k>0)
			{
				if(start==n[i]) start=0;
					/*printf("start=%d",start);
					getchar();*/
				if(monkey[start]) --k;
					/*printf("k=%d",k);
					getchar();*/
				++start;
			}
			monkey[start-1]=0;
				/*printf("kill monkey %d",start);
				getchar();
				printf("start=%d",start);
				getchar();*/
		}
		printf("%d",king);
		if(i<casenum-1) printf("\n");
	}
}
int monkeynum(int monkey[],int a)
{
	int i,num=0;
	for(i=0;i<a;i++)
		if(monkey[i])
		{
			num++;
			king=i+1;
		}
	return num;
}
