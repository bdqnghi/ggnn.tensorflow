package sorting;

public class Heapsort 
{
	public void sort(Comparable[] a)
	{
		int N = a.length - 1;
		this.displayArray(a);
		for (int k = N/2; k >= 1; k--) 
		{
			this.sink(a, k, N);
			
		}
		while (N > 1)
		{
			this.exchange(a, 1, N--);
			
			this.sink(a, 1, N);
			
		}
	}
	
	public void sink(Comparable[] a, int k, int N)
	{
		while (2*k <= N)
		{
			int j = 2*k;
			if (j < N && a[j].compareTo(a[j + 1]) < 0)
			{
				j++;
			}
			if (a[k].compareTo(a[j]) >= 0)
			{
				break;
			}
			this.exchange(a, k, j);
			k = j;
		}
	}
	
	private void exchange(Comparable[] a, int i, int j)
	{
		Comparable t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	
	public void displayArray(Comparable[] a)
	{
		for (int i = 0; i < a.length; i++) 
		{			
			System.out.print(a[i].toString() + ", ");
		}
		System.out.println();
	}
}
