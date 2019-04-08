/*
 * 1.cpp
 *
 *  Created on: 2013-1-13
 *      Author: Administrator
 */
int main()
{
	int x[2200] = {0}, y[1100] = {0}, max = 0, t = 0, cnt = 0;
	int i, j = 0, k = 0, len = 0;
	while(cin >> x[k])
	{
        char c = getchar();
        if (c == '\n') cnt++;
		k++;
		if (cnt ==2) break;
	}
	for(i = k / 2; i < k; i++)
	{
		y[j] = x[i];
		j++;
	}
	len = k / 2;
	cout << len << " ";
	for(i = 0; i < len; i++)
	{
		t = 0;
		for(j = 0; j < len; j++)
		{
			if(x[j] <= x[i] && y[j] > x[i])
			{
				t++;
			}
		}
		if(max < t)
			max = t;
		t = 0;
		for(j = 0; j < len; j++)
		{
			if(x[j] <= y[i] && y[j] > y[i])
		    {
			    t++;
		    }
		}
		if(max < t)
		    max = t;
	}
	cout << max << endl;
}
