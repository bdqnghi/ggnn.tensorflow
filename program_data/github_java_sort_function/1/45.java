

class InsertionSortAlgorithm extends SortAlgorithm
{
    void sort(int a[]) throws Exception
    {
	
	
	for (int i = 1; i < a.length; i++ )
	{
	    int value = a[i];		
	    int j;

	    
	    for ( j = i - 1; j >= 0 && a[j] > value; j-- )
            {
		if (stopRequested)
                {   return;
                }

                
                
                a[j+1] = a[j];
                pause(i,j);
            }
 
            
	    
            a[j+1] = value;
	}
    }
}

