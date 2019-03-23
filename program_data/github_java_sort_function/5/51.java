public class BubbleSort extends Algorithm {
    
    static <T> boolean loopReverse ( T[] array,
                                     Comparator<T> comparator,
                                     Algorithm algorithm,
                                     int start,
                                     int end,
                                     int subtract,
                                     int gap ) {
        boolean swapped = false;

        for ( int i = start; i >= end; i -= subtract ) {
            if ( i + gap < array.length ) {
                if ( algorithm.compare( array, comparator, i, i + gap ) == Comparator.BIGGER ) {
                    algorithm.swap( array, i, i + gap );
                    swapped = true;
                }
            }
        }

        return swapped;
    }

    
    @Override
    public <T> void sort ( T[] array, Comparator<T> comparator, Converter<T> converter ) {
        
        int wall = array.length;

        
        boolean swapped = true;

        
        
        while ( swapped ) {

            
            swapped = loop( array, comparator, this, 0, wall--, 1, 1 );
        }
    }

    
    static <T> boolean loop ( T[] array,
                              Comparator<T> comparator,
                              Algorithm algorithm,
                              int start,
                              int end,
                              int add,
                              int gap ) {
        boolean swapped = false;

        for ( int i = start; i < end; i += add ) {
            if ( i + gap < array.length ) {
                if ( algorithm.compare( array, comparator, i, i + gap ) == Comparator.BIGGER ) {
                    algorithm.swap( array, i, i + gap );
                    swapped = true;
                }
            }
        }

        return swapped;
    }
}
