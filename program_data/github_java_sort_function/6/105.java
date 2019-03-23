import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;
import java.util.Random;

public class RadixSort
{
    
    public static void radixSortA( String [ ] arr, int stringLen )
    {
        final int BUCKETS = 256;
        
        ArrayList<String> [ ] buckets = new ArrayList<>[ BUCKETS ];
        
        for( int i = 0; i < BUCKETS; i++ )
            buckets[ i ] = new ArrayList<>( );
        
        for( int pos = stringLen - 1; pos >= 0; pos-- )
        {
            for( String s : arr )
                buckets[ s.charAt( pos ) ].add( s );
            
            int idx = 0;
            for( ArrayList<String> thisBucket : buckets )
            {
                for( String s : thisBucket )
                    arr[ idx++ ] = s;
                
                thisBucket.clear( );
            }
        }
    }
       
    
    public static void countingRadixSort( String [ ] arr, int stringLen )
    {
        final int BUCKETS = 256;
        
        int N = arr.length;
        String [ ] buffer = new String[ N ];

        String [ ] in = arr;
        String [ ] out = buffer;
        
        for( int pos = stringLen - 1; pos >= 0; pos-- )
        {
            int[ ] count = new int [ BUCKETS + 1 ];
            
            for( int i = 0; i < N; i++ )
                count[ in[ i ].charAt( pos ) + 1 ]++;

            for( int b = 1; b <= BUCKETS; b++ )
                count[ b ] += count[ b - 1 ];

            for( int i = 0; i < N; i++ )
                out[ count[ in[ i ].charAt( pos ) ]++ ] = in[ i ];
            
              
            String [ ] tmp = in;
            in = out;
            out = tmp;
        }
        
           
        if( stringLen % 2 == 1 )
            for( int i = 0; i < arr.length; i++ )
                out[ i ] = in[ i ];
    }
    
    
    public static void radixSort( String [ ] arr, int maxLen )
    {
        final int BUCKETS = 256;
        
        ArrayList<String> [ ] wordsByLength = new ArrayList<>[ maxLen + 1 ];
        ArrayList<String> [ ] buckets = new ArrayList<>[ BUCKETS ];
        
        for( int i = 0; i < wordsByLength.length; i++ )
            wordsByLength[ i ] = new ArrayList<>( );
        
        for( int i = 0; i < BUCKETS; i++ )
            buckets[ i ] = new ArrayList<>( );
        
        for( String s : arr )
            wordsByLength[ s.length( ) ].add( s );
       
        int idx = 0;
        for( ArrayList<String> wordList : wordsByLength )
            for( String s : wordList )
                arr[ idx++ ] = s;
        
        int startingIndex = arr.length;    
        for( int pos = maxLen - 1; pos >= 0; pos-- )
        {
            startingIndex -= wordsByLength[ pos + 1 ].size( );
            
            for( int i = startingIndex; i < arr.length; i++ )
                buckets[ arr[ i ].charAt( pos ) ].add( arr[ i ] );
            
            idx = startingIndex;
            for( ArrayList<String> thisBucket : buckets )
            {
                for( String s : thisBucket )
                    arr[ idx++ ] = s;
                
                thisBucket.clear( );
            }
        }
    }

    public static void main( String [ ] args )
    {
        List<String> lst = new ArrayList<>( );
        Random r = new Random( );

        final int LEN = 5;
        
        for( int i = 0; i < 100000; i++ )
        {
            String str = "";
            int len = LEN; 

            for( int j = 0; j < len; j++ )
                str += (char) ( 'a' + r.nextInt( 26 ) );

            lst.add( str );
        }

        String [ ] arr1 = new String[ lst.size( ) ];
        String [ ] arr2 = new String[ lst.size( ) ];

        lst.toArray( arr1 );
        lst.toArray( arr2 );

        long start, end;

        start = System.currentTimeMillis( );
        Arrays.sort( arr1 );
        end = System.currentTimeMillis( );
        System.out.println( "Elapsed: " + ( end - start ) );


        start = System.currentTimeMillis( );
        countingRadixSort( arr2, LEN );
        end = System.currentTimeMillis( );
        System.out.println( "Elapsed: " + ( end - start ) );

        for( int i = 0; i < arr1.length; i++ )
            if( !arr1[ i ].equals( arr2[ i ]  ) )
                System.out.println( "OOPS!!" );
    }
    
}
