
int main() {
	int n;
	cin >> n;
	char zhen[110][110] = {'\0'};  // to store the state of each room
	for(int i = 1; i <= n; i++)  // input part
		for(int j = 1; j <= n; j++)
			cin >> zhen[i][j];
    int m;
	cin >> m;
	char zhen1[110][110] = {'\0'};
	if(m != 1) {
		for(int i = 1; i < m; i++) { 
			  for(int i = 1; i <= n; i++)    // build a new zhen1 to store the change of state of each day
				  for(int j = 1; j <= n; j++)
					  zhen1[i][j] = zhen[i][j];
              for(int i = 1; i <= n; i++)
				  for(int j = 1; j <= n; j++) {
					  if(zhen[i][j] == '@' && zhen[i - 1][j] != '#') zhen1[i - 1][j] = '@';
					  if(zhen[i][j] == '@' && zhen[i + 1][j] != '#') zhen1[i + 1][j] = '@';
					  if(zhen[i][j] == '@' && zhen[i][j - 1] != '#') zhen1[i][j - 1] = '@';
					  if(zhen[i][j] == '@' && zhen[i][j + 1] != '#') zhen1[i][j + 1] = '@';
				  }
			  for(int i = 1; i <= n; i++)
				  for(int j = 1; j <= n; j++)
					  zhen[i][j] = zhen1[i][j];
		}
	}
	int sum = 0; // count the number of  patients
    for(int i = 1; i<= n; i++)
		for(int j = 1; j <= n; j++) {
			if(zhen[i][j] == '@') sum++;
		}
	cout << sum << endl;
	getchar();
	getchar();
	return 0;
}