int main()
{
	int a[6][6], i, j, i0, j0, k, max, min, count = 0;
		    for(i = 1; i < 6; i++)
		    {
			   for(j = 1; j < 6; j++)
			   {
					cin >> a[i][j];                      //??????
			   }
		    }
			for(i = 1; i < 6; i++)
			{  
				i0 = i;j0=1;
				max = a[i][1];
				for(j = 1; j < 6; j++)
				{ 
					if(max >= a[i][j])continue;
					max = a[i][j]; j0 = j; i0 = i;       //?????????
					
				}
				for(k = 1; k < 6; k++)
				{
					if(max > a[k][j0])break;             //???????????
					
				}
				
				if(k == 6)
				{
					cout << i0<< " " << j0 << " " << max<< endl;
				    count++;
				}
			}
                 if(count == 0)cout << "not found" << endl;
			
			return 0;
}