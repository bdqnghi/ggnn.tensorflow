
int main()
{
	int num[100][100];
	int i=0,j,k=0;
	int line,column[100]={0};
	int tmp,count;
	for(j=0;j<100;j++)
	{
		scanf("%d",&num[i][j]);
		if(num[i][j]==-1) break;
		if(num[i][j]==0)
		{
			i++;j=-1;
		}
		else column[i]++;
	}
	
	line=i-1;
	for(i=0;i<=line;i++)
	{
		tmp=num[i][k];
		count=0;
		for(j=k+1;j<column[i];j++)
		{
			if((tmp*2==num[i][j])||(num[i][j]*2==tmp))
			{
				count++;
			}
			if(j==column[i]-1&&k<column[i]-2)
			{
				k++;
				tmp=num[i][k];
				j=k;
			}
		}
		k=0;
		printf("%d\n",count);
	}
}
