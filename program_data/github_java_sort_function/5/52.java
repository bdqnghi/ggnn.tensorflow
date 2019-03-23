public static void sort( int [] numbers, int array_Size )
    
    {
        int i, j, temp;
        int counter = 0;
        
        for ( i = (array_Size - 1); i >= 0; i-- )
        {
            for ( j = 1; j <= i; j++ )
            {
                if ( numbers[j-1] > numbers[j] )
                {
                    temp = numbers[j-1];
                    numbers[j-1] = numbers[j];
                    numbers[j] = temp;
                    counter++;
                    
                }
                
            }
            
        }
        System.out.println(counter);
    }
    
    