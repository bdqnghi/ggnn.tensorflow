//********************************
//*???????   **
//*?????? 1200012837 **
//*???2012.11.5  **
//********************************

int main()
{
	int a[5][5], max[5] = {0}, min[5] = {0};//?????????????????????????
	int i, j, flag = 0;
	for(i = 0; i <= 4; i++)
	for(j = 0; j <= 4; j++)
	{
		cin >> a[i][j];
		if(a[i][j] > max[i])//????????
			max[i] = a[i][j];
	}
	
	for(j = 0; j <= 4; j++)
	{
		min[j] = a[1][j];
		for(i = 0; i <= 4; i++)
		{
			if(a[i][j] < min[j])//????
				min[j] = a[i][j];
		}
	}
	for(int k = 0; k <= 4; k++)//???????
	for(int l = 0; l <= 4; l++)
	{
		if(max[k] == min[l])
		{
			cout << k+1 << " " << l+1 << " " << max[k] << endl;
			flag = 1;//??????
		}

	}
	if(flag == 0)
		cout << "not found" << endl;

	return 0;
}
