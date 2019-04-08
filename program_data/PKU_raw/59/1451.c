
int main()
{
	char map[105][105];
	int a[105][105] = {0},m,n;
	scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		scanf("%s",map[i]);
		for(int j = 0;j < n;j ++){
			if(map[i][j] == '@') a[i][j+1] = 1;
			if(map[i][j] == '#') a[i][j+1] = -1;
		}
	}
	
	scanf("%d",&m);
	for(int i = 1;i < m;i ++){
		for(int j = 1;j <= n;j ++){
			for(int k = 1;k <= n;k ++){
				if(a[j][k] != i + 1 && a[j][k] != -1 && a[j][k] != 0){
					
					if(a[j-1][k] == 0) a[j-1][k] = i + 1;
					if(a[j][k+1] == 0) a[j][k+1] = i + 1;
					if(a[j+1][k] == 0) a[j+1][k] = i + 1;
					if(a[j][k-1] == 0) a[j][k-1] = i + 1;
				}
			}
		}	}
	int ans = 0;
	for(int i = 1;i <= n;i ++){
		for(int j = 1;j <= n;j ++){
			if(a[i][j] > 0) ans++;
		}
	}
	printf("%d\n",ans);

	return 0;
}
  