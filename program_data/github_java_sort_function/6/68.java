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