
    public static boolean less( Comparable a, Comparable b ) {
        return a.compareTo( b ) == -1;
    }

    
    public static void exchange( Comparable[] a, int i, int j ) {
        Comparable temp = a[ i ];
        a[ i ] = a[ j ];
        a[ j ] = temp;
    }

    public static int insertionSort( Comparable[] a ) {
        int exchangeCount = 0;
        for ( int i = 1; i < a.length; ++i ) {
            for ( int j = i; j > 0 && less( a[ j ], a[ j - 1 ] ); --j ) {
                exchange( a, j, j - 1 );
                ++exchangeCount;
            }
        }
        return exchangeCount;
    }