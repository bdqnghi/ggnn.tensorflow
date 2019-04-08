int main()
{
	char a[105][105];
	int n,m,i,j,k,num = 0;
	for(i= 1;i < 105;i++)
			for(j= 1;j <105;j++)
				a[i][j] = 'A';
	cin >> n;
	for(i= 1;i <= n;i++)
		for(j= 1;j <= n;j++){
			cin >> a[i][j];
			if(a[i][j] == '@') num++;
		}
	cin >>m;
	for(k  = 0;k < m -1 ;k++){
		for(i= 1;i <= n;i++)
			for(j= 1;j <=n;j++)
				if(a[i][j] == '@'){
					if(a[i -1][j] != '@'&&a[i -1][j] != '#'&&a[i -1][j] != 'A'&&a[i -1][j]== '.') {
						a[i - 1][j] ='a';
						num ++;
					}
					if(a[i +1][j] != '@'&&a[i +1][j] != '#'&&a[i +1][j] != 'A'&&a[i+1][j] == '.') {
						a[i +1][j] ='a';
						num ++;
					}
					if(a[i ][j-1] != '@'&&a[i ][j-1] != '#'&&a[i ][j-1] != 'A'&&a[i][j - 1]=='.') {
						a[i ][j-1] ='a';
						num ++;
					}
					if(a[i ][j+1] != '@'&&a[i][j+1] != '#'&&a[i][j+1] != 'A'&&a[i][j+1]=='.') {
						a[i ][j+1] ='a';
						num ++;
					}
				}
				for(i= 1;i <= n;i++){
					for(j= 1;j <=n;j++)
						if(a[i][j] == 'a') a[i][j] = '@';
				}
	}
							cout << num << endl;

		return 0;
}
