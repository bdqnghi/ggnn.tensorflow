/*
 * ????????.cpp
 * Created on: 2011-1-1
 * Author: ???
 */
struct {
	int abs;
	int ver;
	int ord;

} coor[10];  //??????

double fdis(int a, int b, int c, int d, int e, int f) {  //??????
	int m;
	double n;
	m = (a - d) * (a - d) + (b - e) * (b - e) + (c - f) * (c - f);
	n = sqrt((double) m);
	return n;
}

int main() {
	int n, i, j, k = 0, q, flag1[45], flag2[45], s, t;
	double dis[45], tempt;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> coor[i].abs >> coor[i].ver >> coor[i].ord;
	}  //????
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			dis[k] = fdis(coor[i].abs, coor[i].ver, coor[i].ord, coor[j].abs,
					coor[j].ver, coor[j].ord);
			flag1[k] = i;
			flag2[k] = j;
			k++;
		}
	}
	for (k = 0; k < n * (n - 1) / 2; k++) {
		for (q = 0; q < n * (n - 1) / 2 - k - 1; q++) {
			if (dis[q] - dis[q + 1] < -1e-6) {
				s = flag1[q];
				flag1[q] = flag1[q + 1];
				flag1[q + 1] = s;
				t = flag2[q];
				flag2[q] = flag2[q + 1];
				flag2[q + 1] = t;
				tempt = dis[q];
				dis[q] = dis[q + 1];
				dis[q + 1] = tempt;  //??
			}
		}
	}
	for (k = 0; k < n * (n - 1) / 2; k++) {
		cout << "(" << coor[flag1[k]].abs << "," << coor[flag1[k]].ver << ","
				<< coor[flag1[k]].ord << ")-(" << coor[flag2[k]].abs << ","
				<< coor[flag2[k]].ver << "," << coor[flag2[k]].ord << ")"
				<< "=" << fixed << setprecision(2) << dis[k] << endl;
	}  //??
	return 0;
}

