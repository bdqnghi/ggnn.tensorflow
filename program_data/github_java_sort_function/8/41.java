public static int[] quicksort( int[] intArray ) {
        return quicksort(intArray, 0, intArray.length - 1 );
    }
    public static int[] quicksort( int[] arr, int low, int high ) {
        if ( low == high ) {
            return arr;
        }

        int pivotIndex = high;
        int pivot = arr[ high ];
        int highIndex = high - 1;
        int lowIndex = low;
        
        boolean pivotChange = false;
        while ( pivotChange == false ) {
            int lVal = arr[ lowIndex ];
            int hVal = arr[ highIndex ];
            if ( lVal > pivot ) {
                if ( hVal < pivot ) {
                    arr = swap(arr, lowIndex, highIndex );
                    lowIndex += 1;
                    highIndex -= 1;

                } else {
                    for ( int x = highIndex; x >= lowIndex; x-- ) {
                        if ( x == lowIndex ) {
                            swap(arr, x, pivotIndex);
                            pivotChange = true;

                            quicksort(arr, low, x - 1);
                            quicksort(arr, x + 1, pivotIndex);
                            break;
                        }
                        if ( arr[ x ] < pivot ) {
                            swap(arr, x, lowIndex);
                            break;
                        }
                    }
                }
            } else {
                for ( int x = lowIndex; x <= highIndex; x++ ) {
                    if ( x == highIndex ) {
                        swap(arr, x, pivotIndex);
                        pivotChange = true;

                        break;
                    }
                    if ( arr[ x ] > pivot ) {
                        lowIndex = x;
                        lVal = arr[ x ];
                        break;
                    }
                    
                }
            }
        }
        return arr;
        
    }
    
 
    public static int[] swap( int[] array, int posX, int posY) {

        int temp = array[ posX ];
        array[ posX ] = array[ posY ];
        array[ posY ] = temp;
        return array;
    }