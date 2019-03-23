
import java.util.*;

class TestClass {
    private static void bucketSort(int[] arr) {
        int n=10;
		LinkedList<Integer>[] bucket = new LinkedList[n];
		for (int i=0; i<n; i++)
		    bucket[i]=new LinkedList<Integer>();
		for (int i=0; i<arr.length; i++)
			bucket[setBits(arr[i])].add(arr[i]);
		for (int i=0; i<n; i++){
			if(bucket[i].size()>1)
				Collections.sort(bucket[i]);
		}
		for (int i=0; i<n; i++){
			if(bucket[i].size()>0){
				for(Integer x:bucket[i]){
					System.out.print(x+" ");
				}
				System.out.println();
			}
		}		
	}
    private static int setBits(int num){
        int count=0;
        while(num!=0){
            num &= (num-1);
            count++;
        }
        return count;
    }
    public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int[] arr=new int[N];
        for (int i = 0; i < N; i++) {
            arr[i]=s.nextInt();
        }
        bucketSort(arr);
    }
}
