import java.util.*;
import java.lang.*;
import java.io.*;

class Solution
{
	public static int findMaxElement(int a[]) {
		int max = Integer.MIN_VALUE;
		for(int i = 0; i < a.length; i++) {
			if(a[i] >= max) {
				max = a[i];
			} 
		}
		return max;
	}

	public static void countSort(int a[], int exp) {
		int output[] = new int[a.length];
		int count[] = new int[10];
		for(int i = 0; i < a.length; i++) {
			count[(a[i]/exp) % 10]++;
		}
		
		for(int i = 1; i < count.length; i++) {
			count[i] += count[i - 1];
		}
		
		for(int i = a.length - 1; i >= 0; i--) {
			output[count[ (a[i]/exp)%10 ] - 1] = a[i];
            count[ (a[i]/exp)%10 ]--;
		}
		for (int i = 0; i < a.length; i++)
            a[i] = output[i];
	}
	
	public static void radixSort(int a[]) {
		int m = findMaxElement(a);

		
        
        
        for (int exp = 1; m/exp > 0; exp *= 10)
            countSort(a, exp);
	}
	
	public static void main (String[] args) throws java.lang.Exception
	{
		int a[] = {170, 45, 75, 90, 802, 24, 2, 66};
		
		radixSort(a);
		for(int i = 0; i < a.length; i++) {
			System.out.print(a[i] + " ");
		}
	}
}


