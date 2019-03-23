import java.util.Arrays;


public class Radixsort {
	public static int getmax(int ar[])
	{
		int max=ar[0];
		for(int i=1;i<ar.length;i++)
		{
			if(max<ar[i])
				max=ar[i];
		}
		return max;
	}
	public static void sort(int ar[],int n,int exp)
	{
		int count[]=new int[10];
		int output[]=new int[n];
		Arrays.fill(count,0);
		for(int i=0;i<n;i++)
			count[(ar[i]/exp)%10]++;
		for(int i=1;i<10;i++)
			count[i]+=count[i-1];
		for(int i=n-1;i>=0;i--)
		{
			output[count[(ar[i]/exp)%10]-1]=ar[i];
			count[(ar[i]/exp)%10]--;
		}
		for(int i=0;i<n;i++)
			ar[i]=output[i];
		
	}
	public static void radixsort(int ar[])
	{
		int max=getmax(ar);
		for(int exp=1;max/exp>0;exp*=10)
			sort(ar,ar.length,exp);
		for(int i=0;i<ar.length;i++)
			System.out.print(ar[i]+" ");
	}

}
