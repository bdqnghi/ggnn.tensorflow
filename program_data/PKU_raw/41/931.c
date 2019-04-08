
int main()
{
    int a[5]; //?? 
    int b[5],sum = 0, pin = 0; //????
    
    for ( a[0] = 1; a[0] <= 5; a[0]++ )
    {
        for (a[1] = 1;a[1] <= 5; a[1]++ )
        {
            for (a[2] = 1; a[2] <= 5; a[2]++ )
            {
                for ( a[3] = 1; a[3] <= 5; a[3]++ )
                {
                    for (  a[4] = 1; a[4] <= 5; a[4]++ )
                    {
                        sum = 0;
                        pin = 0;
                        
                        if ( a[4]== 2 || a[4] == 3 )
                           continue;
                        
                        b[0] = ( a[4] == 1);
                        b[1] = ( a[1] == 2);
                        b[2] = ( a[0] == 5);
                        b[3] = ( a[2] != 1 );
                        b[4] = ( a[3] == 1);
                        
                        for ( int j = 0; j < 4; j++ )
                        {
                            for ( int k = j + 1; k <= 4; k++ )
                            {
                                if ( a[j] == a[k] )
                                   pin = 1;             
                            }
                                           
                        } 
                        
                        if ( pin == 1 )
                           continue;
                           
                        for ( int i = 0; i < 5; i++ )
                        {
                            if ( (a[i] == 1 && b[i] == 1))
                               sum++;
                            if (  a[i] == 2 && b[i] == 1)                         
                               sum++;
                            if ( b[i] == 1 &&( a[i] != 1 && a[i] != 2))
                            {
                                 sum = 0;
                                 break;
                            }
                        }
                       
                        if ( sum == 2 )
                        {   cout << a[0] << " "<< a[1] << " "<< a[2] << " "<< a[3] << " "<< a[4]; 
                        
                            return 0;
                        }
                    }
                }
            }
        }
    } 

    return 0;

}
