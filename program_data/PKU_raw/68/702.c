/*
 * file    competition 1_5
 * author  ??
 * date    2010-10-22
 * description
           ????????
*/



int main()
{
	int n, i, k, t1, t2, p, j;
	cin >> n;
	for (i = 6; i <= n; i = i + 2)
	{
       	for (j = 3; j <= i; j = j + 2)
		{
			t1 = 0;
	    	t2 = 0;
	       	p = sqrt(j);            
	       	for (k = 3; k <= p; k = k + 2)
        		if (j % k == 0) break;
			if (k > p) t1 = 1;
	     	if (t1 == 1) 
			{
	     		p = sqrt(i-j);            
            	for (k = 3; k <= p; k = k + 2)
	       	    	if ((i - j) % k == 0) break;
	           	if (k > p) t2 = 1;
		   		if (t2 == 1) break;
			}
		}
       	cout << i << "=" << j << "+" << i - j << endl;
	}
	return 0;
}