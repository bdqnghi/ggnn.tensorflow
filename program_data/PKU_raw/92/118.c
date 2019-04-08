int max(int a,int b)
{
	return (a>b?a:b);
}
int cmp(const void *a,const void *b)
{
	return (*(int *)b - *(int *)a);
}
int g(int i,int j,int general[],int king[])
{
	if(general[i-1] > king[j-1])	
		return 200;
	else if(general[i-1] < king[j-1])
		return -200;		
	else				
		return 0;
}

int f[2000][2000];
int main()
{
	int n;
	while(cin >> n)
	{
		if(n == 0)
			break;
		int i,j;
		int king[1002];//??
		int general[1002];//??
		for(i = 0;i < n;i++)
			cin >> general[i];
		for(i = 0;i < n;i++)
			cin >> king[i];
		
		qsort(general,n,sizeof(general[0]),cmp);
		qsort(king,n,sizeof(king[0]),cmp);
		
/*??????*/
		for(i = 0;i <= n;i++)
			f[0][i] = 0;
		for(i = 1;i <= n;i++)
			f[i][0] = f[i-1][0] + g(n+1-i,i,general,king);
//DP
		for(i = 1;i <= n;i++)
			for(j = 1;j <= i;j++)
			{
				if(i == j)
					f[i][j] = f[i-1][j-1] + g(j,i,general,king);
				else
					f[i][j] = max(f[i-1][j]+g(n-(i-j)+1,i,general,king),f[i-1][j-1]+g(j,i,general,king));
			} 
		int temp = -200000000;
		for(i = 0;i <= n;i++)
			temp = max(temp,f[n][i]);

		cout << temp << endl;
	}
	return 0;
}


	