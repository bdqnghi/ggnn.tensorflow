/**
????4.cpp
?  ?????
?  ??11.02
?  ??????
*/
  
int main()
{
    int a[5][5], cnt=0;
    int i, j, p, k, m, rowmax;
	for(i = 0;i < 5;i++)
		for(j = 0;j < 5;j++)
			cin >> a[i][j];

    for(i = 0;i < 5;i++)
    {   rowmax = a[i][0];
		for(j = 0;j < 5;j++)
		{  
			if(a[i][j] >= rowmax)
				rowmax = a[i][j];
           
		}
		
		for(j = 0;j < 5;j++)
		{
			if(a[i][j] == rowmax)
				p = j;
		}
		
	
		for(k = 0;k < 5;k++)
		{
			if(a[i][p] <= a[k][p])
			    m = i;
		    else 
			{
				m = -1;
			    break;
			}
		}

		if(m == i)
		{   
			cout << m + 1 << " " << p + 1 << " " << a[i][p] << endl;
            cnt++;
		}
		  
	}
	    
	if(cnt == 0)
		cout << "not found" << endl;

	return 0;
}

