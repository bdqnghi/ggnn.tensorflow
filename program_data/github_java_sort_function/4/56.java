

public class Heapsort {

    
    public int[] sort( int[] data ) 
    {	

	System.out.print( "Input array: \t" );
	printArr( data );


	
	
	

	maxHeapify(data);
	System.out.println( "Array heapified. Root at index 0" );
	printArr( data );

	
	
	
	for( int lastLeaf = data.length-1; lastLeaf>0; lastLeaf-- ) { 
	    
	    int tmp = data[0]; 

	    
	    data[0] = data[lastLeaf];

	    
	    int pos = 0;
	    int minChildPos;
	    int maxChildPos;

	    while( pos <= lastLeaf ) {

		
		maxChildPos = maxChildPos( pos, lastLeaf, data );

		
		if ( maxChildPos == -1 ) 
		    break;
		
		else if ( data[pos] >= data[maxChildPos] ) 
		    break;
		
		else {
		    swap( pos, maxChildPos, data );
		    pos = maxChildPos;
		}
	    }

	    
	    data[lastLeaf] = tmp;
	}

	
	
	return data;
	
    }


	
    private void minHeapify( int[] a ) {

	for( int i=1; i<a.length; i++ ) {
	    
	    int addValPos = i; 

	    
	    while( addValPos > 0 ) { 

		
		int parentPos = (addValPos-1) / 2;

		if ( a[addValPos] < a[parentPos] ) {
		    swap( addValPos, parentPos, a );
		    addValPos = parentPos;
		}
		else 
		    break;
	    }
	}
    }



    private void maxHeapify( int[] a ) {
	for( int i=1; i<a.length; i++ ) {
	    
	    int addValPos = i; 

	    
	    while( addValPos > 0 ) { 

		
		int parentPos = (addValPos-1) / 2;

		if ( a[addValPos] > a[parentPos] ) {
		    swap( addValPos, parentPos, a );
		    addValPos = parentPos;
		}
		else 
		    break;
	    }
	}
    }



    
    private int minChildPos( int pos, int last, int[] a ) {
	int retVal;
	int lc = 2*pos + 1; 
	int rc = 2*pos + 2; 

	
	if ( pos < 0 || pos >= last || lc > last )
	    retVal = -1;
	
	else if ( rc > last )
	    retVal = lc;
	
	else if ( a[lc] < a[rc] )
	    retVal = lc;
	else
	    retVal = rc;
	return retVal;
    }



    
    private int maxChildPos( int pos, int last, int[] a ) {
	int retVal;
	int lc = 2*pos + 1; 
	int rc = 2*pos + 2; 

	
	if ( pos < 0 || pos >= last || lc > last )
	    retVal = -1;
	
	else if ( rc > last )
	    retVal = lc;
	
	else if ( a[lc] > a[rc] )
	    retVal = lc;
	else
	    retVal = rc;
	return retVal;
    }



    
    private int minOf( int a, int b ) {
	return (a<b)?a:b;
    }

    public static void swap( int x, int y, int[] o ) {
	int tmp = o[x];
	o[x] = o[y];
	o[y] = tmp;
    }

    public static void printArr( int[] a ) {
	for ( int o : a )
	    System.out.print( o + " " );
	System.out.println();
    }

  

  
}



