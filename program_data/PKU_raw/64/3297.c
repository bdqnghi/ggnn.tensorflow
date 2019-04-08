
int main() {
	int X[120], Y[120], Z[120], I[1020], J[1020];
	double R2[1020], mid;
	int n;
	int i, x, y, z, a, b, pai, mi;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> x >> y >> z;
		X[i] = x;
		Y[i] = y;
		Z[i] = z;

	}
	int r = 1;
	for (a = 1; a <= n; a++) {
		for (b = 2; b <= n; b++) {
			if (b <= a) {
				continue;
			}
			I[r] = a;
			J[r] = b;
			R2[r] = (X[a] - X[b]) * (X[a] - X[b]) + (Y[a] - Y[b]) * (Y[a]
					- Y[b]) + (Z[a] - Z[b]) * (Z[a] - Z[b]);
			r++;
		}
	}

	pai = n * (n - 1) / 2 + 1;
	while (pai--) {
		for (i = 1; i < r - 1; i++) {
			if (R2[i] < R2[i + 1]) {
				mid = R2[i];
				R2[i] = R2[i + 1];
				R2[i + 1] = mid;
				mi = J[i];
				J[i] = J[i + 1];
				J[i + 1] = mi;
				mi = I[i];
				I[i] = I[i + 1];
				I[i + 1] = mi;
			}

		}
	}

	for (i = 1; i <= n * (n - 1) / 2; i++) {
		R2[i] = sqrt(R2[i]);

		cout << "(" << X[I[i]] << "," << Y[I[i]] << "," << Z[I[i]] << ")-("
				<< X[J[i]] << "," << Y[J[i]] << "," << Z[J[i]] << ")=" << fixed
				<< setprecision(2) << R2[i] << endl;
	}
	return 0;
}