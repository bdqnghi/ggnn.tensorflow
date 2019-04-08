//* ??   *
//* author:??? *
//* time : 10.19  *
 


int main()
{
	int a[16] = {0};
	int i, j, k, n = 0;
	do
	{
    	for(i = 0; i <= 15; i++)
		{
		    cin >> a[i];
			if(a[0] == -1)
				break;
			if(a[i] == 0)
				break;
		}
                  if (a[0] == -1)
                       break; 
		for(j = 0; j <= i - 1; j++)
			for(k = 0; k <= i - 1; k++) 
			{
				if( a[j] == 2 * a[k])
					n++;
			}
            cout << n << endl;
			n = 0;
	}while(1);
	return 0;
}

		            
