

package org.neeraj.algorithms.sorting;



public class RadixSort 
{
    
    final private int NO_RADIX = -1;

    
    final private int NO_DIGITS = -1;

    
    private int radix;

    
    private int digits;

    
    private static class RadixKeyExtractor implements CountingSort.KeyExtractor
    {
	
	private int extractorRadix;

	
	private int divisor;
	
	
	public RadixKeyExtractor(int radix, int divisor)
	{
	    extractorRadix = radix;
	    this.divisor = divisor;
	}

	
	public int extract(int value)
	{
	    return (value / divisor) % extractorRadix;
	}

	
	public int extract(NonNegativeInteger value)
	{
	    return extract(value.getKey());
	}
    }

    
    public RadixSort()
    {
	radix = NO_RADIX;
	digits = NO_DIGITS;
    }

    
    public RadixSort(int radix)
    {
	this.radix = radix;
	this.digits = NO_DIGITS;
    }

    
    public RadixSort(int radix, int digits)
    {
	this.radix = radix;
	this.digits = digits;
    }

    
    private static int calculateDigits(int radix, int max)
    {
	int i = 0;		
	int ri = 1;		

	while (ri <= max) {	
	    i++;		
	    ri *= radix;	
	}

	return i;
    }	

    
    public void sort(NonNegativeInteger[] array)
    {
	if (radix == NO_RADIX) {
	    
	    
	    CountingSort cs = new CountingSort();
	    int max = cs.findMax(array); 
	    int bits = calculateDigits(2, max);
	    int lgn =
		(int) (Math.floor(Math.log(array.length) / Math.log(2.0)));

	    if (bits < lgn)
		radixSort(array, bits, calculateDigits(bits, max));
	    else
		radixSort(array, lgn, calculateDigits(lgn, max));
	} 
	else if (digits == NO_DIGITS)
	    radixSort(array, radix);
	else
	    radixSort(array, radix, digits);
    }

    
    public void radixSort(NonNegativeInteger[] array, int radix)
    {
	CountingSort cs = new CountingSort();
	int max = cs.findMax(array); 

	radixSort(array, radix, calculateDigits(radix, max));
    }

     
    public void radixSort(NonNegativeInteger[] array, int r, int d)
    {
	CountingSort cs = new CountingSort(r-1);
	int divisor = 1;	
	
	for (int i = 0; i < d; i++) {
	    cs.setExtractor(new RadixKeyExtractor(r, divisor));
	    cs.sort(array);
	    divisor *= r;
	}
    }
} 






