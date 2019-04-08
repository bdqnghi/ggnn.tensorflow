/*
 *????SortTheDistance.cpp
 *?????
 *????: 2012-11-13
 *?????????????????????????????
 */


int main(){
	int x[15], y[15], z[15], left[50], right[50];
	int n, i, j, k = 0, gn, temp1;
	double dis[50], temp;

	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i] >> z[i];
	}

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			left[k] = i;
			right[k] = j;
			dis[k] = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
			k++;
		}
	}
	gn = k;
	for (i = 0; i < gn; i++)
	{
		for (j = 0; j < gn - i - 1; j++)
		{
			if(dis[j + 1] > dis[j])
			{
				temp = dis[j];
				dis[j] = dis[j + 1];
				dis[j + 1] = temp;
				temp1 = left[j];
				left[j] = left[j + 1];
				left[j + 1] = temp1;
				temp1 = right[j];
				right[j] = right[j + 1];
				right[j + 1] = temp1;
			}
		}
	}

	for (i = 0; i < gn; i++)
	{
		cout << "(" << x[left[i]] << "," << y[left[i]] << "," << z[left[i]] << ")-(" ;
		cout << x[right[i]] << "," << y[right[i]] << "," << z[right[i]] << ")=" << fixed << setprecision(2) << dis[i] << endl;
	}
	return 0;
}
