int main() {
	int n, i, j, k, count = 0, x, y, m;
	char area[100][100];
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> area[i][j];
	cin >> m;
	for (k = 0; k < m-1; k++){
		for (i = 0; i < n; i++){
			for (j = 0; j < n; j++){
				if (area[i][j] =='@') {
					x = i;
					y = j;
					if ((y - 1 >= 0) && (area[x][y - 1] == '.') ) {
						area[x][y - 1] = '*';
					}
					if ((y + 1 < n)&&(area[x][y + 1] == '.') ) {
						area[x][y + 1] = '*';
					}
					if ((x - 1 >= 0)&&(area[x - 1][y] == '.') ) {
						area[x - 1][y] = '*';
					}
					if ((x + 1 < n) && (area[x + 1][y] == '.') ) {
						area[x + 1][y] = '*';
					}
				}
			}
		}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(area[i][j]=='*')  area[i][j]='@';
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(area[i][j]=='@')
				count++;
	cout<<count<<endl;
	return 0;
}
