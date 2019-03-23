package lykrast.noisysorting.sorting;

import java.util.Arrays;

import lykrast.noisysorting.array.VisualArray;

public class SorterRadixLSD extends SorterAbstract {
	private int radix;
	
	public SorterRadixLSD(VisualArray array, int radix)
	{
		super(array);
		this.radix = radix;
	}

	
	@Override
	protected void sort() throws InterruptedException {
		
		int maxIndex = 0;
		for (int i=0;i<a.getSize();i++)
		{
			if (a.get(i) > a.get(maxIndex)) maxIndex = i;
			sleep();
		}
		
		int max = a.getSilent(maxIndex);
		for (int exp=1;max/exp>0;exp*=radix)
			countSort(exp);
	}
	
	private void countSort(int exp) throws InterruptedException
	{
		int size = a.getSize();
		int[] counts = new int[radix];
		Arrays.fill(counts, 0);
		
		for (int i=0;i<size;i++)
		{
			counts[(a.get(i)/exp) % radix]++;
			sleep();
		}
		
		
		for (int i=1;i<radix;i++) counts[i] += counts[i-1];
		
		
		int[] tmp = new int[size];
		for (int i=size-1;i>=0;i--)
		{
			tmp[counts[(a.getSilent(i)/exp) % radix]-1] = a.getSilent(i);
			counts[(a.getSilent(i)/exp) % radix]--;
		}
		
		
		for (int i=0;i<size;i++)
		{
			a.set(i, tmp[i]);
			sleep();
		}
	}

}
