/*
 * juli.cpp
 *??: ?????????
 *  Created on: 2012-11-9
 *      Author: ??
 */

int main() {
	int n, i, j, k = 0, x[10], y[10], z[10], start[45], end[45];//??n???????????
	double dis[45];//????
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> x[i] >> y[i] >> z[i];//??
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++) {
			start[k] = i;
			end[k] = j;
			dis[k] = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i]
					- y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
			k++;//???????????????????????
		}
	for (i = 0; i < k - 1; i++)
		for (j = 0; j < k - i - 1; j++) {
			if (dis[j] < dis[j + 1]) {
				swap(dis[j], dis[j + 1]);
				swap(start[j], start[j + 1]);
				swap(end[j], end[j + 1]);//????
			}
		}
	for (i = 0; i < k; i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[start[i]], y[start[i]],
				z[start[i]], x[end[i]], y[end[i]], z[end[i]], dis[i]);//?????
	return 0;
}
