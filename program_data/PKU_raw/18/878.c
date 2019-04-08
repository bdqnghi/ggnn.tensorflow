
int main() {
	int n, k, i, j, sum, min,anw=0;
	int test[100][100];
	cin >> n;
	sum = n;
	for (k = 0; k < sum; k++) {
		n=sum;
		for (i = 0; i < sum; i++)
			for (j = 0; j < sum; j++) {
				cin >> test[i][j];
			}
		anw=0;
		while (n != 1) {
			for (i = 0; i < n; i++) {//?????
				min = test[i][0];
				for (j = 0; j < n; j++) {
					if (min > test[i][j])
						min = test[i][j];
				}
				for (j = 0; j < n; j++) {
					test[i][j] -= min;
				}
			}
			for (i = 0; i < n; i++) {//?????
				min = test[0][i];
				for (j = 0; j < n; j++) {
					if (min > test[j][i])
						min = test[j][i];
				}
				for (j = 0; j < n; j++) {
					test[j][i] -= min;
				}
			}
			anw+=test[1][1];
			n--;
			for (i = 1; i < n; i++) {//?????
				for (j = 0; j <= n; j++)
					test[i][j] = test[i + 1][j];
			}
			for (j = 1; j < n; j++) {//?????
				for (i = 0; i < n; i++)
					test[i][j] = test[i ][j+1];
			}

		}
		cout<<anw<<endl;

	}
	return 0;

}
