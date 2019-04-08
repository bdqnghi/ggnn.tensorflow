int qi[1000],tian[1000];
int state[1001][1001];

int cmp(const void *a,const void *b)
{
	return *(int *)b-*(int *)a;
}

int match(int x,int y)
{
	if(x == y )
		return 0;
	else if( x > y)
		return -200;
	else return 200;
}

int main()
{
	int i,j,n,tmp1,tmp2,maxi;
	while(cin>>n){
		if(n==0)
			break;
		


		for(i = 0; i < n; i ++)
			scanf("%d",&tian[i]);
		for(i = 0; i < n; i ++)
			scanf("%d",&qi[i]);
		
		qsort(tian,n,sizeof(int),cmp);
		qsort(qi,n,sizeof(int),cmp);

		for(i = 0; i <=n ; i ++)
			state[0][i]=0;

		for(i = 1; i <= n; i ++)
			for(j = 0; j <= i; j ++){
				if(j == 0)
					state[i][j]=state[i-1][j]+match(qi[i-1],tian[n-i+j]);
				else if(i == j){
					state[i][j]=state[i-1][j-1]+match(qi[i-1],tian[j-1]);
				}
				else
				{	
					tmp1=state[i-1][j-1] + match(qi[i-1],tian[j-1]);
					tmp2=state[i-1][j] + match(qi[i-1],tian[n-i+j]);
					if(tmp1 > tmp2)
						state[i][j]=tmp1;
					else state[i][j]=tmp2;

				}
			}

		maxi=state[n][0];


		for(i = 1; i <= n; i ++){
			if(state[n][i] > maxi)
				maxi=state[n][i];
		}

		printf("%d\n",maxi);

	


	}
	return 0;
}

