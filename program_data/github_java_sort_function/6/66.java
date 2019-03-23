import java.io.*;
import java.util.*;

class Radix {
	

final static int NUM_BIT =7;

int []  radixMulti(int [] a) {
	long tt = System.nanoTime();
    
	int max = a[0], numBit = 2, numDigits, n =a.length;
	int [] bit ;

    
	for (int i = 1 ; i < n ; i++)
		if (a[i] > max) max = a[i];
    while (max >= (1L<<numBit) )numBit++; 

    
    
    numDigits = Math.max(1, numBit/NUM_BIT);
    bit = new int[numDigits];
    int rest = numBit%NUM_BIT, sum =0;
    
    for (int i = 0; i < bit.length; i++){
    	bit[i] = numBit/numDigits;
    	if ( rest-->0) bit[i]++;
    }
    int[] t=a, b = new int [n];
    for (int i =0; i < bit.length; i++) {
		radixSort( a,b,bit[i],sum );    
		sum += bit[i];
		
		t = a;
		a = b;
		b = t;
	}
	if ((bit.length&1) != 0 ) {
	
		System.arraycopy (a,0,b,0,a.length);
	}
	double tid = (System.nanoTime() -tt)/1000000.0;
	System.out.println("\nSorterte "+n+" tall serielt paa:" + tid + "millisek.");
	boolean order = testSort(a);
	System.out.println("a: " + order);
	
	
	return a;
} 




void radixSort ( int [] a, int [] b, int maskLen, int shift){
	
	int  acumVal = 0, j, n = a.length;
	int mask = (1<<maskLen) -1;
	int [] count = new int [mask+1];

	
    
	for (int i = 0; i < n; i++) {
		count[(a[i]>>> shift) & mask]++;
	}

    
	for (int i = 0; i <= mask; i++) {
		j = count[i];
		count[i] = acumVal;
		acumVal += j;
	}

    
	for (int i = 0; i < n; i++) {
		b[count[(a[i]>>>shift) & mask]++] = a[i];
	}
}





boolean testSort(int[] a) {
	boolean order = true;
	for (int i = 1; i < a.length; i++) {
		if (a[i-1] > a[i]) {
			order = false;
		}
	}
	return order;
}
}