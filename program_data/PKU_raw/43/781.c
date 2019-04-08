//*********************************************
//*  file: 1.cpp
//*  description???????
//*  Created on: 2012-10-23
//*  Author: ??     1200012858
//*********************************************
int main()
{
	int m, i, j, k, k1, p, q;
	cin >> m;
	for (i = 3; i <= (m / 2); i = i + 2)
	{
		k = (int)sqrt (i);
		for (p = 2; p <= k; p++)
		{
			if (i % p == 0) break;
		}
		    if (p == k + 1)
		    {
		    	j = m - i;
		        k1= (int)sqrt (j);
		        for (q = 2; q <= k1; q++)
		        {
		    	 if (j % q == 0) break;
		        }
		        if (q == k1 + 1)
		    	cout << i << " " << j << endl;
		    }
	}
	return 0;
	
}