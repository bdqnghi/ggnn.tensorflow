

public class HeapSort {
	public static void sort(Comparable[] pq) {
		
		
		
		int n = pq.length;
		for(int k = n / 2; k >= 1; k--) {
			sink(pq, k, n);
		}
		
		while(n > 1) {
			
			
			
			exch(pq, 1, n--);
			sink(pq, 1, n);
		}
	}
	
	
	
	public static void sink(Comparable[] pq, int k, int n) {
		while(2 * k <= n) {
			int j = 2 * k;
			
			if(j < n && less(pq, j, j + 1)) {
				j++;
			}
			
			
			
			
			
			
			if(!less(pq, k, j)) {
				break;
			}
			exch(pq, k, j);
			
			
			
			
			
			
			k = j;
		}
	}
	
	public static void exch(Object[] pq, int i, int j) {
		Object swap = pq[i - 1];
		pq[i - 1] = pq[j - 1];
		pq[j - 1] = swap;
	}
	
	
	
	public static boolean less(Comparable[] pq, int i, int j) {
		return pq[i - 1].compareTo(pq[j - 1]) < 0;
	}
	
	public static void show(Comparable[] a) {
		for(int i = 0; i < a.length; i++) {
			StdOut.print(a[i]);
		}
	}
	
	public static void main(String[] args) {
		String[] a = {"S", "O", "R", "T", "E", "X", "A", "M", "P", "L", "E"};
		sort(a);
		show(a);
	}
}



public class HeapSort {
	public static void sort(Comparable[] pq) {
		int n = pq.length;
		for(int k = n/2 - 1; k >= 0; k--) {
			sink(pq, k, n);
		}
		
		
		
		show(pq);
		
		
		
		
		
		n = n - 1;
		while(n > 0) {			
			exch(pq, 0, n--);
			sink(pq, 0, n);
		}
	}
	
	public static void exch(Comparable[] pq, int i, int j) {
		Comparable swap = pq[i];
		pq[i] = pq[j];
		pq[j] = swap;
	}
	
	public static boolean less(Comparable[] pq, int i, int j) {
		return pq[i].compareTo(pq[j]) < 0;
	}
	
	public static void sink(Comparable[] pq, int k, int n) {
		
		
		
		
		
		while(k <= n/2 - 1) {
			
			
			
			
			
			
			
			int j = 2 * k + 1;
			if(j < n - 1 && less(pq, j, j + 1)) {
				j++;
			}
			if(!less(pq, k, j)) {
				break;
			}
			exch(pq, k, j);
			k = j;
		}
	}
	

}
