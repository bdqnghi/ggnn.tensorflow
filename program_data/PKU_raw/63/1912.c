int a,b,c,d;
int m1[128][128],m2[128][128],m3[128][128]={0};
int main() {
	int i, j, k;
	cin >> a >> b;
	for (i = 0; i < a; i++) 
       {	// ????????????
		for (j = 0; j < b; j++) 
               {
			cin >> m1[i][j];
		}
	}
	cin >> c >> d;
	for (i = 0; i < c; i++) 
        {	// ????????????
		for (j = 0; j < d; j++) 
                {
			cin >> m2[i][j];
		}
	}
	for (i = 0; i < a; i++) 
       {	// ???? 
		for (j = 0; j < b; j++) 
                {
			for (k = 0; k < d; k++) 
                       {	// b =c????????????
				m3[i][k] += m1[i][j] * m2[j][k];//????
			}
		}
	}
	for (i = 0; i < a; i++) 
       {
		for (j = 0; j < d-1; ++j) 
               {
			cout << m3[i][j] << ' ';
		}
		cout << m3[i][j];		// ??????????????
		cout << endl;
	}
	return 0;
}
