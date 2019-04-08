
int N,array[2][1001];
int benefit[1001][1001]={0};

int main()
{
	int i,j,cnt=0;
	while(scanf("%d",&N)!=EOF&&N)
	{
		++cnt;
		for(i=0;i<N;i++) scanf("%d",array[0]+i);
		for(i=0;i<N;i++) scanf("%d",array[1]+i);
		sort(array[0],array[0]+N);
		sort(array[1],array[1]+N);
		if(array[0][0]<array[1][N-1]) benefit[1][0]=-200;
		else if(array[0][0]>array[1][N-1]) benefit[1][0]=200;
		else benefit[1][0]=0;
		if(array[0][N-1]<array[1][N-1]) benefit[1][1]=-200;
		else if(array[0][N-1]>array[1][N-1]) benefit[1][1]=200;
		else benefit[1][1]=0;
		for(i=2;i<=N;i++)
			for(j=0;j<=i;j++)
			{
				int tmp1=-INF,tmp2=-INF;
				if(i>j)
				{
					tmp1=benefit[i-1][j];
					if(array[0][i-j-1]>array[1][N-i]) tmp1+=200;
					else if(array[0][i-j-1]<array[1][N-i]) tmp1-=200;
				}
				if(j>0)
				{
					tmp2=benefit[i-1][j-1];
					if(array[0][N-j]>array[1][N-i]) tmp2+=200;
					else if(array[0][N-j]<array[1][N-i]) tmp2-=200;
				}
				benefit[i][j]=tmp1;
				if(benefit[i][j]<tmp2) benefit[i][j]=tmp2;
			}
		int m_benefit=-INF;
		for(j=0;j<=N;j++)
			if(m_benefit<benefit[N][j]) m_benefit=benefit[N][j];
		printf("%d\n",m_benefit);
	}
	return 0;
}