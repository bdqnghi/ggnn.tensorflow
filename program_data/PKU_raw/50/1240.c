int main()
    {
		int a[13] = {0,0,3,3,6,1,4,6,2,5,0,3,5}, w, i, j, date, b[13] = {0};
		cin >> w;
		for (i = 1 ; i <= 12 ; i++)
		    {
				date = w + a[i] + 5;
		        for (j = 1 ; j >= 1 ; j++)
				    {
						if (date > 7)
							date-=7;
						else {
							    if (date == 5)
								{cout << i <<endl; break;}
						        else break;				
						     }
				    }
		    }
		return 0;
    }